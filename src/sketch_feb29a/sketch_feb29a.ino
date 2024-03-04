const int buttonPin12 = 12; // o número do pino onde o botão está conectado
const int ledPin13 = 13;    //o número do pino onde o LED está conectado

// variável para armazenar o estado do botão (pressionado ou não)
int buttonState = 0;         

void setup() {
  // inicializa o pino do LED como saída:
  pinMode(ledPin13, OUTPUT);
  // inicializa o pino do botão como entrada:
  pinMode(buttonPin12, INPUT);
}

void loop(){
  // lê o estado do botão:
  buttonState = digitalRead(buttonPin12);

  // verifica se o botão está pressionado.
  // se estiver, o estado do botão será HIGH:
  if (buttonState == HIGH) {
    // acende o LED:
    digitalWrite(ledPin13, HIGH);
  } else {
    // apaga o LED:
    digitalWrite(ledPin13, LOW);
  }
}