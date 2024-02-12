int ledPin=13;
int dotDelay=200;
void setup() {
  // put your setup code here, to run once:
 pinMode(ledPin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  delay(3*dotDelay);

   digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
   digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
   digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(3*dotDelay);

  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
   digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
   digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(7*dotDelay);

}
