String command = "";

void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT); // Relay control pin
  digitalWrite(7, LOW); // Start with LED OFF
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim(); // Remove any newline or extra space

    if (command == "light on") {
      digitalWrite(7, HIGH);
    } 
    else if (command == "light off") {
      digitalWrite(7, LOW);
    }
  }
}
