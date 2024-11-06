// To use: Rename this file to aprs-config.h

// MUST CHANGE THIS
#define CALLSIGN "N0CALL" // DON'T FORGET TO CHANGE THIS
// MUST CHANGE THIS

#define CALLNUMBER 11 //SSID http://www.aprs.org/aprs11/SSIDs.txt
#define SYMBOL 'O' // '/O' for balloon, '/>' for car, for more info : http://www.aprs.org/symbols/symbols-new.txt
#define ALT_SYMBOL false //false = '/' , true = '\'

#define FREQUENCY "144.3900" //default frequency. 144.3900 for US, 144.8000 for Europe

// LED Pinout Numbers
// Make sure the numbers for the LEDs match the diagram - https://github.com/lightaprs/LightAPRS-1.0/blob/master/images/lightaprs-pinout.jpg
#define GrnLedPin 5   // green LED - turn on when transmitting, turn off when not
#define YlwLedPin 6   // yellow LED - turn on when GPS fix, turn off when no GPS fix
#define RedLedPin 7   // red LED - turn on once when APRS is powered on
