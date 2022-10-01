#include <CheapStepper.h>

#include <AccelStepper.h>
#include<math.h>
// Motor pin definitions:
#define motorPin1  8      // IN1 on the ULN2003 driver
#define motorPin2  9      // IN2 on the ULN2003 driver
#define motorPin3  10     // IN3 on the ULN2003 driver
#define motorPin4  11     // IN4 on the ULN2003 driver
int stepsPerRevolution = 72;
#define MotorInterfaceType 8
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);
float r= 0, coeff = 29.988, power = -1.173;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  stepper.setMaxSpeed(2000);
  Serial.begin(115200); 
}

void lidar() {
  stepper.setSpeed(1500);
  stepper.runSpeed();
  float v = analogRead(A0);
  r = coeff*(pow(v, power));
  Serial.println(r);
  delay(300);
}
//THIS IS THE MAIN ONE
void loop() {
  lidar();
}
