const int thermistorPin = A0;
const int buzzerPin = 9;
const float referenceResistor = 1000.0; // 1kΩ
const float beta = 3950.0; // Typical for 102 thermistor
const float roomTemp = 298.15; // 25°C in Kelvin

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(thermistorPin);
  
  // Calculate resistance of thermistor
  float resistance = referenceResistor * (1023.0 / adcValue - 1.0);

  // Calculate temperature using Beta formula
  float tempK = (beta * roomTemp) / (beta + roomTemp * log(resistance / referenceResistor));
  float tempC = tempK - 273.15;

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" C");

  if (tempC >= 35.0) { // Set threshold (32°C example)
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}

