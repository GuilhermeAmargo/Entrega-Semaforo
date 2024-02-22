Entrega-Semaforo.cpp
int vermelho = 3;
int amarelo = 4;
int verde = 5;
int tempo_intermitente = 1000;
int botao = 2;
int verde2 = 6;
int vermelho2 = 7;
int memory =0;

 
  void setup (){
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(verde2, OUTPUT);
    pinMode(vermelho2, OUTPUT);
    pinMode(botao, INPUT);

    controlaCor(amarelo, 1000, false);
    controlaCor(amarelo, 1000, false);
    controlaCor(amarelo, 1000, false);

}


void loop(){
  memory = digitalRead(botao);
  
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(vermelho2, LOW);
  delay(5000);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(5000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(3000);
  
  
  if(memory == HIGH){
    digitalWrite(verde2, HIGH);
    digitalWrite(vermelho2, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, HIGH);
  } else {
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(vermelho2, LOW);
  delay(5000);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(5000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(3000);
  }
}
int controlaCor (int cor, int tempo, bool esta_no_loop) {
    digitalWrite(cor, 1);
    delay(tempo);
    digitalWrite(cor, 0);
    
    if(esta_no_loop == false){
        delay(tempo);
        return 0;
    }
    else{
        return 1;
        //se bateu aqui, é por que a função foi chamada no Loop
    }
}
