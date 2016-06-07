/*
Cayenne Generic PWM Output Example

This sketch shows how to set up a Generic PWM Output with Cayenne.

Steps:
1. In the Cayenne Dashboard add a new Generic PWM Output.
2. Select a digital PWM pin number (3, 5, 6, 9, 10, and 11 on most Arduino boards).
3. Attach an analog ouput device to the PWM pin on your Arduino matching the selected pin.
4. Set the token variable to match the Arduino token from the Dashboard.
5. Compile and upload this sketch.

Notice that there isn't much coding involved to interact with the PWM pins.
Most of it is handled automatically from the Cayenne library.
*/

#define CAYENNE_PRINT Serial  // Comment this out to disable prints and save space
#include <CayenneEthernet.h>

// Cayenne authentication token. This should be obtained from the Cayenne Dashboard.
char token[] = "AuthenticationToken";

void setup()
{
	Serial.begin(9600);
	Cayenne.begin(token);
}

void loop()
{
	Cayenne.run();
}