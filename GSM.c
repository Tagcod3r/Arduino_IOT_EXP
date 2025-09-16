#include <SoftwareSerial.h>

SoftwareSerial sim900(10, 11);

void setup() {
  Serial.begin(9600);
  sim900.begin(9600);
  delay(1000);

  sim900.println("AT");
  delay(1000);
  sim900.println("AT+CMGF=1");
  delay(1000);
  sim900.println("AT+CSCS=\"GSM\"");
  delay(1000);
  sim900.println("AT+CMGS=\"+919164499334\"");
  delay(1000);

  sim900.print("Hi Ma'am! How are you?");
  delay(1000);

  sim900.write(26);
  delay(5000);

  Serial.println("SMS Sent!");
}

void loop() {
}
