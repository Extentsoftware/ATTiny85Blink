#include <arduino.h>



#define LED PB4
void setup()
{
	//The 8-pin ATTinys (25/45/85) all have 5 usable digital output pins 0-4
	pinMode(LED, OUTPUT);
}
void loop()
{
	digitalWrite(LED, HIGH);  	//Set the LED pins to HIGH. This gives power to the LED and turns it on
	digitalWrite(LED, LOW); 	// Set the LED pins to LOW. This turns it off
}