#include <Arduino.h>

#ifdef __WPI_NETWORK__
// If you’re working off campus, update these with values
// suitable for your network. Then change in .ini file accordingly.
const char* ssid = "WPI-PSK";
const char* password = "\\V9#=][quOU;/yld";

#elif defined __USE_RBE_NETWORK__
//RBE
const char* ssid = "RBE";
const char* password = "elm69wisest16poisoned";
#endif
// robomqtt credientials
#ifdef __RBE_MQTT__
const char* mqtt_server = "robomqtt.cs.wpi.edu";
const char* MQTT_USER = "team10";
const char* MQTT_PASSWORD = "langeland0824";
int mqtt_port = 1883;
#endif

#ifdef __HOME_MQTT__
const char* mqtt_server = "192.168.137.29";
#define mqtt_port 1883
#define MQTT_USER "diddy"
#define MQTT_PASSWORD "east"
#endif