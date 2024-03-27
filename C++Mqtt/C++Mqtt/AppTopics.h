#define TOPIC_APP_MESSAGE "EDM/App/Message"
#define TOPIC_APP_STATUS "EDM/App/Status"
#define TOPIC_APP_ERROR "EDM/App/Error"

#define TOPIC_APP_SYSTEM "EDM/App/System"
#define TOPIC_APP_SYSTEM_STATUS "EDM/App/System/Status"

#define TOPIC_APP_TEST "EDM/App/Test"
#define TOPIC_APP_TEST_COMMAND "EDM/App/Test/Command"
#define TOPIC_APP_TEST_STATUS "EDM/App/Test/Status"
#define TOPIC_APP_TEST_LIMITSTATUS "EDM/App/Test/LimitStatus"
#define TOPIC_APP_TEST_RECORDSTATUS "EDM/App/Test/RecordStatus"
#define TOPIC_APP_TEST_LIST "EDM/App/Test/List"
#define TOPIC_APP_TEST_REPORTFILE "EDM/App/Test/ReportFile"
#define TOPIC_APP_TEST_REPORTTEMPLATES "EDM/App/Test/ReportTemplates"
#define TOPIC_APP_TEST_RECORDFILE "EDM/App/Test/RecordFile"
#define TOPIC_APP_TEST_REPORTNOTES "EDM/App/Test/ReportNotes"

#define TOPIC_APP_TEST_CHANNELS "EDM/App/Test/Channels"
#define TOPIC_APP_TEST_PARAMETERS "EDM/App/Test/Parameters"
#define TOPIC_APP_TEST_SIGNALS "EDM/App/Test/Signals"
#define TOPIC_APP_TEST_SIGNALDATA "EDM/App/Test/SignalData"
#define TOPIC_APP_TEST_COMPRESSED_SIGNALDATA "EDM/App/Test/CompressedSignalData"
#define TOPIC_APP_TEST_SIGNALPROPERTY "EDM/App/Test/SignalProperty"
#define TOPIC_APP_TEST_RUNFOLDER "EDM/App/Test/RunFolder"
#define TOPIC_APP_TEST_ADV_STATUS "EDM/App/Test/AdvancedStatus"

#define TOPIC_GLOBAL_PARAMETER_REQUEST "EDM/GlobalParameter/Request"
#define TOPIC_GLOBAL_PARAMETER_RESPONSE "EDM/GlobalParameter/Response"

#define TOPIC_DSA_TEST_COMMAND "EDM/DSA/Test/Command"
#define TOPIC_DSA_TEST_DSA_STATUS "EDM/DSA/Test/DSAStatus"

#define TOPIC_VCS_TEST_COMMAND  "EDM/VCS/Test/Command"
#define TOPIC_VCS_TEST_STAGE  "EDM/VCS/Test/Stage"
#define TOPIC_VCS_TEST_SHAKER "EDM/VCS/Test/Shaker"
#define TOPIC_VCS_TEST_CONTROL_UPDATED  "EDM/VCS/Test/ControlUpdated"

#define TOPIC_VCS_TEST_RANDOM_STATUS  "EDM/VCS/Test/RandomStatus"
#define TOPIC_VCS_TEST_SINE_STATUS  "EDM/VCS/Test/SineStatus"
#define TOPIC_VCS_TEST_SHOCK_STATUS  "EDM/VCS/Test/ShockStatus"
#define TOPIC_VCS_TEST_TWR_STATUS  "EDM/VCS/Test/TWRStatus"

#define TOPIC_THV_TEST_COMMAND  "EDM/THV/Test/Command"
#define TOPIC_THV_TEST_TH_STATUS  "EDM/THV/Test/THStatus"
#define TOPIC_THV_TEST_VT_STATUS  "EDM/THV/Test/VHStatus"

#define Pause "Pause"
#define Continue "Continue"
#define Run "Run"
#define Stop "Stop"
#define Connect "Connect"
#define Disconnect "Disconnect"
#define StartRecord "StartRecord"
#define StopRecord "StopRecord"
#define SaveSignals "SaveSignals"
#define ResetAverage "ResetAverage"
#define RequestDetailStatus "RequestDetailStatus"
#define RequestSignalData "RequestSignalData"
#define RequestSignalProperty "RequestSignalProperty"
#define RequestReportFile "RequestReportFile"
#define RequestRunFolder "RequestRunFolder"
#define RequestRecordFile "RequestRecordFile"

#define ListReportNotes "ListReportNotes"
#define SetReportNotes "SetReportNotes"

#define LoadTest "LoadTest"
#define CreateTest "CreateTest"
#define DeleteTest "DeleteTest"
#define ListTest "ListTest"

#define GenerateReport "GenerateReport"
#define SetParameter "SetParameter"

//global parameters
#define ListGlobalParameters "ListGlobalParameters"

//dsa
#define TriggerOn "TriggerOn"
#define TriggerOff "TriggerOff"

#define OutputOn "OutputOn"
#define OutputOff "OutputOff"
#define SetOutputParameters "SetOutputParameters"
#define SetOutputIndex "SetOutputIndex"

#define LimitOn "LimitOn"
#define LimitOff "LimitOff"

//vcs
#define CheckOnly "CheckOnly"
#define Proceed "Proceed"
#define SaveHSignal "SaveHSignal"

#define SetLevel "SetLevel"
#define LevelUp "LevelUp"
#define LevelDown "LevelDown"
#define RestoreLevel "RestoreLevel"
#define NextEntry "NextEntry"
#define ShowPretest "ShowPretest"
#define AbortChecksOn "AbortChecksOn"
#define AbortChecksOff "AbortChecksOff"
#define ScheduleClockTimerOn "ScheduleClockTimerOn"
#define ScheduleClockTimerOff "ScheduleClockTimerOff"
#define ClosedLoopControlOn "ClosedLoopControlOn"
#define ClosedLoopControlOff "ClosedLoopControlOff"


#define SetFrequency "SetFrequency"
#define SetPhase "SetPhase"
#define HoldSweep "HoldSweep"
#define SweepUp "SweepUp"
#define SweepDown "SweepDown"
#define ReleaseSweep "ReleaseSweep"
#define IncreaseSpeed "IncreaseSpeed"
#define DecreaseSpeed "DecreaseSpeed"

#define RoRBandsOn "RoRBandsOn"
#define RoRBandsOff "RoRBandsOff"

#define SoRTonesOn "SoRTonesOn"
#define SoRTonesOff "SoRTonesOff"

#define SoRTonesHoldSweep "SoRTonesHoldSweep"
#define SoRTonesReleaseSweep "SoRTonesReleaseSweep"

#define SoRTonesSweepUp "SoRTonesSweepUp"
#define SoRTonesSweepDown "SoRTonesSweepDown"

#define InversePulseOn "InversePulseOn"
#define InversePulseOff "InversePulseOff"

#define SinglePulseOn "SinglePulseOn"
#define SinglePulseOff "SinglePulseOff"

#define OutputSinglePulse "OutputSinglePulse"

#define SetChannelTable "SetChannelTable"
#define SetRandomProfile "SetRandomProfile"
#define SetSineProfile "SetSineProfile"
#define SetShockProfile "SetShockProfile"
#define SetSchedule "SetSchedule"

#define RequestPeakFrequency "RequestPeakFrequency"
#define RequestPeakValue "RequestPeakValue"

//Test Sequence FAT
#define StartTestSequence "StartTestSequence"
#define PauseTestSequence "PauseTestSequence"
#define ResumeTestSequence "ResumeTestSequence"
#define StopTestSequence "StopTestSequence"
#define NextTestSequence "NextTestSequence"