// #define FLAME_AO 34  

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   int flameValue = analogRead(FLAME_AO);  
//   Serial.println(flameValue);             

//   delay(500);
// }


#define FLAME_DO 25  

void setup() {
  Serial.begin(9600);
  pinMode(FLAME_DO, INPUT);
}

void loop() {
  int flame = digitalRead(FLAME_DO);

  if (flame == LOW) {
    Serial.println(" Flame Detected!");
  } else {
    Serial.println(" No Flame");
  }

  delay(1000);
}
