#define LED_PIN 13

int LEDstatus = 0;

void setup() {
 pinMode(IN_PIN, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  input = digitalRead(IN_PIN);
  if(input == HIGH){
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}
