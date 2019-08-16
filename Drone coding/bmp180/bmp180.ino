#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
void setup(void) 
{
  Serial.begin(9600);
  if(!bmp.begin())
  {
    Serial.print("Ooops, no BMP085 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }
}
void loop(void) 
{
  sensors_event_t event;
  bmp.getEvent(&event);
  if (event.pressure)
  {
    float seaLevelPressure = SENSORS_PRESSURE_SEALEVELHPA;
    int alt =bmp.pressureToAltitude(seaLevelPressure,
                                        event.pressure); 
    Serial.print(alt); 
    Serial.println("");
  }
  delay(1000);
}
