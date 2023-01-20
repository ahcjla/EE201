int digitalPin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(digitalPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(digitalPin);
  if (value == 1) {
    Serial.println("Hello World!");}
  else{
    Serial.println("It's 2023");}
  delay(1000);
}
