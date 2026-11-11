// Define os pinos
int ldr = A0;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  // Lê a luminosidade
  int luz = analogRead(ldr);

  // Se estiver escuro, acende o LED
  if (luz < 500) {
    digitalWrite(led, HIGH);
  } 
  
  // Se estiver claro, apaga o LED
  else {
    digitalWrite(led, LOW);
  }
}