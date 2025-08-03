int trimpot= A0;
int led = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int portvalue= analogRead(trimpot);
  int pwmvalue = map(portvalue,0,1023,0,255);
  analogWrite(led, pwmvalue);
  delay(10);
}
