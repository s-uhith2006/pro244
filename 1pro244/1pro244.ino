const int BUZZER_PIN = 26;
const int POTENTIOMETER_PIN = 15;

const int TOUCH_SENSOR_VALUE_1 = 30;
const int TOUCH_SENSOR_VALUE_2 = 70;
const int TOUCH_SENSOR_VALUE_3 = 100;

void setup() {
  pinMode(POTENTIOMETER_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  Serial.begin(115200);
  Serial.println("Potentiometer Values:");
}

void loop() {
  int potValue = analogRead(POTENTIOMETER_PIN);

  Serial.println(potValue);

  if (potValue < TOUCH_SENSOR_VALUE_1) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(100);
    digitalWrite(BUZZER_PIN, LOW);
    delay(100);
  } else if (potValue < TOUCH_SENSOR_VALUE_2) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZER_PIN, LOW);
    delay(200);
  } else if (potValue < TOUCH_SENSOR_VALUE_3) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(300);
    digitalWrite(BUZZER_PIN, LOW);
    delay(300);
  }
}
