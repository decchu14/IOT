int MY_LED = 3
void setup()
{
  pinMode(MY_LED, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int analogValue = analogRead(A0);
  int brightness = map(analogValue,0,1023,0,255);
  analogWrite(MY_LED, brightness);
  
  Serial.print("Analog Value : ");
  Serial.println(digitalRead(MY_LED));
  
  Serial.print("Brightness : ");
  Serial.println(brightness);
  delay(100);
  
}