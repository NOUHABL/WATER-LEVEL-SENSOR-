int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A0);
  if(value <= 300)
  {
    digitalWrite(13, 1); // Green
    digitalWrite(12, 0); // Yellow
    digitalWrite(11, 0); // Red
  }
  else if(value <= 400)
  {
    digitalWrite(13, 0); // Green
    digitalWrite(12, 1); // Yellow
    digitalWrite(11, 0); // Red
  }
  else if(value <= 450)
  {
    digitalWrite(13, 0); // Green
    digitalWrite(12, 0); // Yellow
    digitalWrite(11, 1); // Red
  }
}
