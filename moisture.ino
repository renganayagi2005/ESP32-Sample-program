#define MOISTURE_PIN 39  

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(MOISTURE_PIN);
  Serial.println(moisture);
  delay(500);
}

// #define SOIL_DO 26  

// void setup() {
//   Serial.begin(9600);
//   pinMode(SOIL_DO, INPUT);
// }

// void loop() {
//   int soilState = digitalRead(SOIL_DO); 

//   if (soilState == LOW) {
//     Serial.println(" Soil is WET");
//   } else {
//     Serial.println(" Soil is DRY");
//   }

//   delay(1000);
// }
