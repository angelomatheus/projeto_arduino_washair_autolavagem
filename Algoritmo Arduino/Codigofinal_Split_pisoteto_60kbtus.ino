/*
  Codigo Final Split Piso teto 60k btus
  Criado em 09/07/2018
  por Angelo Sampaio  

  Cliente Final: Estrela Panelas de Aluminio
  Sistema de Autolavagem de Ar-condicionado
 */
 
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
int cm = 37;
int led_verde = 36;

boolean statusOk = true; // false para teste no codigo e true para codigo final
  
  void setup() {
  pinMode(led_verde, OUTPUT);
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
    pinMode(cm, OUTPUT);
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
    digitalWrite(cm, HIGH);
      Serial.begin(9600); 
}


   void cicloAgua() { 
     digitalWrite(b1, LOW);
     digitalWrite(b2, LOW);
     digitalWrite(v1,LOW);
   Serial.println("v1 ligada");
   Serial.println("bomba1 ligada");
   Serial.println("bomba2 ligada");
      delay(29500);
    digitalWrite(v2, LOW);
      delay(500);
    digitalWrite(v1, HIGH);
   Serial.println("v1 desligada");
   Serial.println("v2 ligada");
     delay(29500);
         digitalWrite(v3,LOW);
         digitalWrite(v4, HIGH);
         delay(500);
       digitalWrite(v2,HIGH);
       Serial.println("v2 desligada");
       Serial.println("v3 ligada");
       delay(59500); //DOIS MIN V3
       digitalWrite(v4,LOW);
       delay(500);
       digitalWrite(v3,HIGH);
       Serial.println("v3 desligada");
       Serial.println("v4 ligada");
          delay(29500);
       digitalWrite(v5,LOW);
     delay(500);
     digitalWrite(v4,HIGH);
     Serial.println("v4 desligada");
     Serial.println("v5 ligada");
     delay(29500);
     digitalWrite(v6, LOW);
     delay(500);
     digitalWrite(v5, HIGH);
     Serial.println("v5 desligada");
     Serial.println("v6 ligada");
     delay(29500);
     digitalWrite(v7, LOW);
     delay(500);
     digitalWrite(v6, HIGH);
     Serial.println("v6 desligada");
     Serial.println("v7 ligada!");
     delay(29500);
     digitalWrite(v8, LOW);
     delay(500);
     digitalWrite(v7, HIGH);
      Serial.println("v7 desligada");
     Serial.println("v8 ligada!");
     delay(29500);
     digitalWrite(v9, LOW);
     delay(500);
     digitalWrite(v8, HIGH);
     Serial.println("v8 desligada");
     Serial.println("v9 ligada!");
     delay(29500);
      digitalWrite(v10, LOW);
     delay(500);
     digitalWrite(v9, HIGH);
      Serial.println("v9 desligada");
     Serial.println("v10 ligada!");
     delay(29500);
      digitalWrite(v11, LOW);
     delay(500);
     digitalWrite(v10, HIGH);
      Serial.println("v10 desligada");
      Serial.println("v11 ligada!");
     delay(29500);
     digitalWrite(v11,HIGH);
     digitalWrite(b1,HIGH);
     digitalWrite(b2,HIGH);
     Serial.println("v11 desligada!");
     Serial.println("b1 desligada!");
     Serial.println("b2  desligada!");     
   }
  
  void loop() {
      if(statusOk == true) {
      digitalWrite(cm, LOW);
      digitalWrite(led_verde, HIGH);
      Serial.println("COMEÇO DA LAVAGEM");
      Serial.println("Comeco ciclo 1 Agua FILTRO");
      cicloAgua(); // 15min
      Serial.println("Comeco ciclo 2 Agua FILTRO");
      cicloAgua();  // 15min
      Serial.println("Comeco ciclo Final Agua FILTRO");
      cicloAgua();  // 15min
      digitalWrite(cm, HIGH);
      Serial.println("FIM DOS CICLOS");
      statusOk = false;
      
        }
        
      if(statusOk == false){
        //teste led
        digitalWrite(led_verde, LOW);
        delay(1500);
        digitalWrite(led_verde, HIGH);
        delay(500);
        digitalWrite(led_verde, LOW);
        delay(500);
      Serial.println("FIM DA LAVAGEM");  
      }
  }
