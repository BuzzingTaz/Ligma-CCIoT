

#define BLYNK_DEVICE_NAME           "Ligma"
#define BLYNK_AUTH_TOKEN            "eZCsc5rJmbFK-6HLfOVuXiFW79F3GC1w"

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "JioFi_209888E";
char pass[] = "0gxjmixm50";

#define up_pin D0
#define down_pin D2


void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);


  pinMode(up_pin, OUTPUT);
  pinMode(down_pin, OUTPUT);
  digitalWrite(up_pin, LOW);
  digitalWrite(down_pin, LOW);
}

void loop()
{
  Blynk.run();

}
