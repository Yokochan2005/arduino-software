//www.elegoo.com
//2016.12.09

// Arduino pin numbers

const int X_pin = 0; // analog pin connected to X output


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));

  Serial.print("\n\n");
  delay(500);
}
