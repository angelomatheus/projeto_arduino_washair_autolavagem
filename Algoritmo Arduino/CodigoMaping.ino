

int v1 = 22;
int v2 = 23;
int v3 = 24;
int v4 = 25;
int v5 = 26;

int v6 = 27;
int v7 = 28;
int v8 = 29;
int v9 = 30;
int v10 = 31;
int v11 = 32;
int b1 = 33;   // in4
int b2 = 34;  //in3
boolean statusOk = false;
void setup() {
  
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(v4, OUTPUT);
  pinMode(v5, OUTPUT);
  pinMode(v6, OUTPUT);
  pinMode(v7, OUTPUT);
  pinMode(v8, OUTPUT);  
  pinMode(v9, OUTPUT);
  pinMode(v10, OUTPUT);
  pinMode(v11, OUTPUT);
    pinMode(b1, OUTPUT);    
    pinMode(b2, OUTPUT);
 digitalWrite(v1, HIGH);
 digitalWrite(v2, HIGH);
 digitalWrite(v3, HIGH);
 digitalWrite(v4, HIGH);
 digitalWrite(v5, HIGH);
 digitalWrite(v6, HIGH);
 digitalWrite(v7, HIGH);
 digitalWrite(v8, HIGH);
 digitalWrite(v9, HIGH);
 digitalWrite(v10, HIGH);
 digitalWrite(v11, HIGH);

   digitalWrite(b1, HIGH);
   digitalWrite(b2, HIGH);
     Serial.begin(9600); 
}

//Testes de Componentes
  void tBombas() {
   Serial.println("Bomba 1 e Bomba 2 Ligada");
   digitalWrite(b1, LOW);
   delay(3000);
   digitalWrite(b1, HIGH);
   delay(3000);
  
}
  void tSol(){
    Serial.println("Teste valvulas solenoide")
  }

void loop() {
  if(statusOk == true) {
  Serial.println("COMEÇO DA LAVAGEM");
  statusOk = false;
  Serial.println("FIM DA LAVAGEM"); 
 }
   if(statusOk == false) {
    tSol();
  }
}