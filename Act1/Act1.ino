int redPin=11;
int greenPin=10;
int bluePin=6;
int brightness=255;
String colorChoice;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("what color would you like the LED? (red,green, or blue)");
while(Serial.available()==0) {}
colorChoice=Serial.readString();

if(colorChoice=="red"){
  analogWrite(redPin, brightness);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}
if(colorChoice=="green"){
  analogWrite(redPin, 0);
  analogWrite(greenPin, brightness);
  analogWrite(bluePin, 0);
}
if(colorChoice=="blue"){
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, brightness);
}
if(colorChoice!="red" && colorChoice!="green" && colorChoice!="blue"){
  Serial.println("That is not a valid color choice,please try again");
  Serial.println("");
}
}


