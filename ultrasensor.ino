#define TRIG_PIN 15
#define ECHO_PIN 18



void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);  

  if (duration == 0) {
    
    Serial.println("No echo received");
    
  } else {
    float distance = duration * 0.034 / 2;
    float value = duration * 0.0067; 
    Serial.print(" Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    Serial.print(" value: ");
    Serial.print(value);
    Serial.println(" inches");
  }

  delay(700);
}
