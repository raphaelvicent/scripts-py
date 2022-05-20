#include <arduino.h>

void setup() {
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	digitalWrite(13, HIGH);
	Serial.println("ON");
	delay(200);
	digitalWrite(13, LOW);
	Serial.println("OFF");
	delay(200);
}
