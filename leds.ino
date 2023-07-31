const int tatalLEDs = 8;
int ledPins[] = {4,5,6,7,8,9,10,11};

void setup(){
  for(int pin=0; pin < tatalLEDs;pin++){
    pinMode(ledPins[pin], OUTPUT);
  }
}

void loop(){
  for(int pin=0; pin < tatalLEDs;pin++){
    digitalWrite(ledPins[pin], HIGH);
    delay(500);
    digitalWrite(ledPins[pin],LOW);
  }

}

