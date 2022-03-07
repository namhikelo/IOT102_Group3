//define the pins
int Relay = 4;
int PIR = A3;
const int Led = 13;

void setup() {
  Serial.begin(19200);
  //define the Relay pin as output
  pinMode(Relay, OUTPUT);
  //define the sensor pin as input
  pinMode(PIR, INPUT_PULLUP);
  // define the Led
  pinMode(Led, OUTPUT);
}

void loop() {
  //using the digitalRead function we will read the signal of the sensor
  int value = digitalRead(PIR);
  //int Denled = digitalRead(Led);
  Serial.println("value:" + String(value));
  //if its high or if an any object is detected it will activate the Relay Module 
  if (value == HIGH){
   digitalWrite(Relay, HIGH); //For activating the Relay we will send a LOW as the Relay input pin works inversely.
   digitalWrite(Led, HIGH);
   delay(1000);
   
  }
  else {
    //digitalWrite(LED, LOW);
    digitalWrite(Relay, LOW);
    digitalWrite(Led, LOW);
    delay(1000);
  }
  //delay(500);
   
}
