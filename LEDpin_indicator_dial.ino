int ledPin1 = 2;
int ledPin2 = 4;
int ledPin3 = 6;
int ledPin4 = 8;
int ledPin5 = 10;

int tonePin = 3;

int sensorPin = 0;
int sensorValue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

  pinMode(tonePin, OUTPUT);
}



void loop() {

  midi();
  sensorValue= analogRead(sensorPin);

  byte volume = map (sensorValue, 0, 1024,0,125);

  analogWrite(3, volume);
    
  delay(1);
  
  if (sensorValue > 0 && sensorValue < 10){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  } else if(sensorValue >= 10 && sensorValue < 200){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  }else if (sensorValue >= 200 && sensorValue < 400){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  }else if(sensorValue >= 400 && sensorValue < 600){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  }else if(sensorValue >= 600 && sensorValue < 800){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
  }else if(sensorValue >= 800){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
//    midi();
}

 void midi()
{
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 277, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 277, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 277, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 277, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 675.0);
    delay(750.0);
    tone(tonePin, 220, 675.0);
    delay(750.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 220, 450.0);
    delay(500.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 293, 675.0);
    delay(750.0);
    tone(tonePin, 195, 675.0);
    delay(750.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 246, 112.5);
    delay(125.0);
    tone(tonePin, 293, 450.0);
    delay(500.0);
    tone(tonePin, 195, 450.0);
    delay(500.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 246, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 329, 675.0);
    delay(750.0);
    tone(tonePin, 220, 675.0);
    delay(750.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 220, 450.0);
    delay(500.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 293, 675.0);
    delay(750.0);
    tone(tonePin, 195, 675.0);
    delay(750.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 246, 112.5);
    delay(125.0);
    tone(tonePin, 293, 450.0);
    delay(500.0);
    tone(tonePin, 195, 450.0);
    delay(500.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 246, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 329, 675.0);
    delay(750.0);
    tone(tonePin, 220, 675.0);
    delay(750.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 220, 450.0);
    delay(500.0);
    tone(tonePin, 261, 112.5);
    delay(125.0);
    tone(tonePin, 293, 112.5);
    delay(125.0);
    tone(tonePin, 246, 450.0);
    delay(500.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 450.0);
    delay(500.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 450.0);
    delay(500.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 246, 450.0);
    delay(500.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 293, 675.0);
    delay(750.0);
    tone(tonePin, 195, 675.0);
    delay(750.0);
    tone(tonePin, 246, 337.5);
    delay(375.0);
    tone(tonePin, 261, 337.5);
    delay(375.0);
    tone(tonePin, 246, 337.5);
    delay(375.0);
    tone(tonePin, 195, 337.5);
    delay(375.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 195, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 174, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 174, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 112.5);
    delay(125.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 112.5);
    delay(125.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 87, 225.0);
    delay(250.0);
    tone(tonePin, 110, 112.5);
    delay(125.0);
    tone(tonePin, 123, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 87, 225.0);
    delay(250.0);
    tone(tonePin, 110, 112.5);
    delay(125.0);
    tone(tonePin, 123, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 123, 225.0);
    delay(250.0);
    tone(tonePin, 146, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 220, 112.5);
    delay(125.0);
    tone(tonePin, 195, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 174, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 164, 112.5);
    delay(125.0);
    tone(tonePin, 174, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 112.5);
    delay(125.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 112.5);
    delay(125.0);
    tone(tonePin, 146, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 87, 225.0);
    delay(250.0);
    tone(tonePin, 110, 112.5);
    delay(125.0);
    tone(tonePin, 123, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 87, 225.0);
    delay(250.0);
    tone(tonePin, 110, 112.5);
    delay(125.0);
    tone(tonePin, 123, 112.5);
    delay(125.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 130, 225.0);
    delay(250.0);
    tone(tonePin, 123, 225.0);
    delay(250.0);
    tone(tonePin, 97, 225.0);
    delay(250.0);
    tone(tonePin, 123, 225.0);
    delay(250.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 110, 225.0);
    delay(250.0);
    tone(tonePin, 82, 225.0);
    delay(250.0);
    tone(tonePin, 87, 112.5);
    delay(125.0);
    tone(tonePin, 97, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 164, 225.0);
    delay(250.0);
    tone(tonePin, 174, 112.5);
    delay(125.0);
    tone(tonePin, 195, 112.5);
    delay(125.0);
    tone(tonePin, 220, 225.0);
    delay(250.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 349, 112.5);
    delay(125.0);
    tone(tonePin, 391, 112.5);
    delay(125.0);
    tone(tonePin, 440, 225.0);
    delay(250.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 349, 112.5);
    delay(125.0);
    tone(tonePin, 391, 112.5);
    delay(125.0);
    tone(tonePin, 440, 225.0);
    delay(250.0);
    tone(tonePin, 329, 225.0);
    delay(250.0);
    tone(tonePin, 349, 112.5);
    delay(125.0);
    tone(tonePin, 391, 112.5);
    delay(125.0);
    tone(tonePin, 440, 675.0);
    delay(750.0);
}
