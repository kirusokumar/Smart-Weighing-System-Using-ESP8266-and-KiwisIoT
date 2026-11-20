#include <HX711.h>
#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// HX711 connections
#define DT_PIN D2
#define SCK_PIN D1

HX711 scale;

// Replace with your calibrated value
float calibrationFactor = YOUR_CALIBRATION_FACTOR;

unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 2000;

void setup()
{
  Serial.begin(115200);

  scale.begin(DT_PIN, SCK_PIN);

  Serial.println("Smart Weighing System Starting");

  scale.set_scale(calibrationFactor);

  Serial.println("Taring weighing platform...");
  scale.tare();

  kiwisiot.begin();

  Serial.println("Smart Weighing System Ready");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    if (scale.is_ready())
    {
      float weight = scale.get_units(10);

      // Remove small negative readings near zero
      if (weight < 0 && weight > -0.05)
      {
        weight = 0;
      }

      Serial.print("Measured Weight: ");
      Serial.print(weight, 2);
      Serial.println(" g");

      // Send weight to KiwisIoT Channel 0
      kiwisiot.send("0", String(weight, 2));
    }
    else
    {
      Serial.println("HX711 Not Ready");
    }
  }
}