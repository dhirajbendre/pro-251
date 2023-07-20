
#include<WiFi.h>

//  wifi credentials
const char ssid[] = "DHIRAJ 2007";
const char password[] = "76894688";


const int potpin = 34;

void setup()
{
  Serial.begin(115200);

  //  connecting to wifi
  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{

  //  reading potentiometer at an interval of 1 sec
  int pot = analogRead(potpin);
  Serial.print("Pot values : ");
  Serial.println(pot);
  delay(1000);

}
