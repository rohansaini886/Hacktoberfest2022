#include <CheapStepper.h>
#include <math.h>
float r= 0, coeff = 29.988, power = -1.173;
CheapStepper motor(8, 9, 10, 11);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  motor.setRpm(50);
  Serial.begin(115200);
}
int t = 50, x=0;
void loop() {
  // put your main code here, to run repeatedly:
  motor.moveDegreesCW(3);
  x++;
  if(x%40 == 0) { t += 50; }
  float v = analogRead(A0);
  r = coeff*(pow(v, power));
  Serial.println(r);
  delay(t);
}
