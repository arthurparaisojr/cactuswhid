void setup() {
  pinMode(2, OUTPUT); // Alterar o número do pino, se necessário
}

void loop() {
  digitalWrite(2, HIGH); // Liga o LED
  delay(1000);           // Aguarda 1 segundo
  digitalWrite(2, LOW);  // Desliga o LED
  delay(1000);           // Aguarda 1 segundo
}
