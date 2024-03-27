#include <hv/mqtt_client.h>
#include <hv/mqtt_protocol.h>
#include <hv/hexport.h>
#include <iostream>
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
		if (auth)
		{
			this->client.setAuth(username.c_str(), password.c_str());
		}
        initClientAsyncMethods();
	}

    void connect() {
        this->client.connect(this->host.c_str(), this->port);
    }

    void subscribe(std::string topic) {
        this->client.subscribe(topic.c_str());
    }

    void publish(std::string topic, std::string payload) {
        this->client.publish(topic, payload);
    }

    void run() {
        this->client.run();
    }

private:
    std::string host;
    int port;
	void initClientAsyncMethods() {
        client.onConnect = [](hv::MqttClient* cli) {

        };

        client.onMessage = [](hv::MqttClient* cli, mqtt_message_t* msg) {
            std::cout << msg->topic << std::endl;
        };

        client.onClose = [](hv::MqttClient* cli) {
            std::cout << "disconnected!" << std::endl;
        };
	}
};
