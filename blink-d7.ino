// We define MY_LED to be the LED that we want to blink. 
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// here we declare 2 integer variable to reduce the amount of number we have to type in and also reduce the number of typo
int dah = 3000;
int dit = 1000;

/*this method is declare so that we don't have too much recursive happening in our program.
    it is a simply method that take in integer and base on the integar given the light will blink accrodingly.
*/
void morsecode(int num)
{
    digitalWrite(MY_LED, HIGH);

	// Leave it on for num second
	delay(num);
	
	digitalWrite(MY_LED, LOW);

	// Leave it on for one second
	delay(1s);
}
// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop() {
    
    //s
    morsecode(dit);
    morsecode(dit);
    morsecode(dit);
    //a
    morsecode(dit);
    morsecode(dah);
    //k
    morsecode(dah);
    morsecode(dit);
    morsecode(dah);
    //a
    morsecode(dit);
    morsecode(dah);
    //d
    morsecode(dah);
    morsecode(dit);
    morsecode(dit);
    //a
    morsecode(dit);
    morsecode(dah);
}

