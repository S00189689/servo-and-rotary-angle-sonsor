

#include "Servo.h"


#define PIN_SERVO_1 8
#define PIN_SERVO_2 6

#define PIN_KNOB_1 A0
#define PIN_KNOB_2 A1


//Servo servo; // creates servo object to control the SG90 servo
Servo servo_1;
Servo servo_2;

//int value_knob = 0; // will be used to store the value of the potentiometer/knob
int value_knob_1 = 0;
int value_knob_2 = 0;

//int value_servo = 0; // will be used to control the servo => should be between 5 and 175 degrees
int value_servo_1 = 0;
int value_servo_2 = 0;

void setup()
{
//servo.attach(PIN_SERVO); // assigns pin 8 to the servo object
servo_1.attach(PIN_SERVO_1); 
servo_2.attach(PIN_SERVO_2); 
 
}

void loop()
{
  value_knob_1 = analogRead(PIN_KNOB_1); // reads value of the knob/potentiometer. Return value will be between 0 and 1023.
  value_servo_1 = map(value_knob_1, 0, 1023, 5, 175); // will map knob value range to servo value range
  servo_1.write(value_servo_1); // shaft of servo will start to rotate. value_servo is interpreted as an absolute position.
  delay(20); // give servo some time to rotate

  value_knob_2 = analogRead(PIN_KNOB_2); // reads value of the knob/potentiometer. Return value will be between 0 and 1023.
  value_servo_2 = map(value_knob_2, 0, 1023, 5, 175); // will map knob value range to servo value range
  servo_1.write(value_servo_2); // shaft of servo will start to rotate. value_servo is interpreted as an absolute position.
  delay(20); // give servo some time to rotate


  
}
