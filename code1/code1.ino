int redled=11;
int greenled=10;

int blinknumber=4;
int blinkmber=4;

void setup() {
  Serial.begin (9600);
  pinMode (redled,OUTPUT);
  pinMode (greenled,OUTPUT);
  Serial.print ("This is my first program");
}

void loop() {
  for(int j=1;)<blinknumber;j=j+1)
{

Serial.println("This is the redled blinking");
Serial.print(j);

digitalWrite (redled,HIGH);
delay(1000);
digitalWrite (redled,LOW);
delay(1000);

for(int j=1;j<=blinkmber;j=j+1)

{

  Serial.println("This is the greenled blinking");
  Serial.println(j);

  digitalWrite (greenled,HIGH);
  delay(1000);
  digitalWrite (greenled,LOW);
  delay(1000);
}

  
}

