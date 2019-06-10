int TRIG=5;
int ECHO=3;
float Duration;
float Distance;
void setup() {
  Serial.begin (9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop() {
  digitalWrite(TRIG,LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  Duration=pulseIn(ECHO,HIGH);

  Distance=(Duration/2)*0.0343;
  Serial.print("Distance: ");
  Serial.print(" ");
  Serial.print(Distance);
  Serial.print(" ");
  Serial.println("cm" );
  delay(500);
}
