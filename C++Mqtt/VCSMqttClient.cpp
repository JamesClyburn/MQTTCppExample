#include <hv/mqtt_client.h>
#include <hv/mqtt_protocol.h>
#include <hv/hexport.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "decompress.hpp"
#include "AppTopics.h"

#define HV_EXPORT  __declspec(dllimport)

class VCSMqttClient
{
public:
	hv::MqttClient client;

    VCSMqttClient(std::string host, std::string id, int port = 1883, bool auth = true, std::string username="Admin", std::string password="123456") {
		this->client.setID(id.c_str());
        this->host = host;
        this->port = port;
        this->topicPrefix = "EDM/";

        log.open("log.txt");

		if (auth) {
			this->client.setAuth(username.c_str(), password.c_str());
		}
        initClientAsyncMethods();
	}

    void connect() {
        this->client.connect(this->host.c_str(), this->port);
    }

    void subscribe(std::string topic) {
        std::string topicAndPrefix = topicPrefix + topic;
        this->client.subscribe(topicAndPrefix.c_str());
    }

    void publish(std::string topic, std::string payload) {
        std::string topicAndPrefix(topicPrefix + topic);
        this->client.publish(topicAndPrefix, payload);
    }

    void run() {
        this->client.run();
    }

private:
    std::string host;
    int port;
    std::string topicPrefix;
    std::ofstream log;
	void initClientAsyncMethods() {
        client.onConnect = [](hv::MqttClient* cli) {

        };

        client.onMessage = [this](hv::MqttClient* cli, mqtt_message_t* msg) {
            if (msg->topic == nullptr) return;
            std::string topicAndPayload(msg->topic);
            std::string topic = topicAndPayload.substr(0, msg->topic_len);
            std::string topicWithUnderscore(topic);
            std::replace(topicWithUnderscore.begin(), topicWithUnderscore.end(), '/', '_');
            std::string payload(msg->payload);
            std::time_t now = std::time(NULL);
            std::string fileName = topicWithUnderscore + "_" + std::to_string(now) + ".txt";
            std::ofstream outfile;

            std::string data = "";

            if (topic == topicPrefix + TOPIC_APP_TEST_COMPRESSED_SIGNALDATA) {
                data = gzip::decompress(msg->payload, msg->payload_len);
            }

            payload = data;

            outfile.open(fileName);
            if (outfile.is_open()) {
                outfile << "Topic: " << topic << std::endl;
                outfile << "Payload Length: " << msg->payload_len << std::endl;
                outfile << "Payload: " << payload << std::endl;
                outfile.close();
            } else {
                this->log << "Unable to create file" << fileName << std::endl;
            }
        };

        client.onClose = [](hv::MqttClient* cli) {
            std::cout << "disconnected!" << std::endl;
        };
	}
};
