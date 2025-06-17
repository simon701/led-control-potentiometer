int potPin=A2;
float potVal;
int br=9600;
int w=100;
int redPin=11;
float volts;
float brightness;
int wPin=10;
int brightnesss;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  Serial.begin(br);
  pinMode(redPin, OUTPUT);
  pinMode(wPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  volts=(5./1023.)*potVal;
  brightness=pow(2., potVal/127.875)-1;
  brightnesss=(255./1023.)*potVal;
  analogWrite(redPin, brightness);
  analogWrite(wPin, brightnesss);
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.print(" Voltage: ");
  Serial.println(volts);
  Serial.print("Exponential Brightness: ");
  Serial.println(brightness);
  Serial.print("Linear Brightness: ");
  Serial.println(brightnesss);
  delay(w);
}
