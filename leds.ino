int led = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;
int led11 = 12;
int led12 = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led6, HIGH);
delay(10);
digitalWrite(led7, HIGH);
delay(10);
digitalWrite(led5, HIGH);
delay(30);
digitalWrite(led8, HIGH);
delay(30);
digitalWrite(led4, HIGH);
delay(50);
digitalWrite(led9, HIGH);
delay(50);
digitalWrite(led3, HIGH);
delay(70);
digitalWrite(led10, HIGH);
delay(70);
digitalWrite(led2, HIGH);
delay(90);
digitalWrite(led11, HIGH);
delay(90);
digitalWrite(led, HIGH);
delay(110);
digitalWrite(led12, HIGH);
delay(110);

digitalWrite(led6, LOW);
delay(10);
digitalWrite(led7, LOW);
delay(10);
digitalWrite(led5, LOW);
delay(30);
digitalWrite(led8, LOW);
delay(30);
digitalWrite(led4, LOW);
delay(50);
digitalWrite(led9, LOW);
delay(50);
digitalWrite(led3, LOW);
delay(70);
digitalWrite(led10, LOW);
delay(70);
digitalWrite(led2, LOW);
delay(90);
digitalWrite(led11, LOW);
delay(90);
digitalWrite(led, LOW);
delay(110);
digitalWrite(led12, LOW);
delay(110);

}
