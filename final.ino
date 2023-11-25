#include <Servo.h>  // Incluye la librería Servo para controlar el servo motor
// Declaración de puertos a utilizar:
const int A = 12; // Puerto digital para
//control de pin A del motor
const int B = 11; // Puerto digital para control
//de pin B del motor
const int C = 10; // Puerto digital para control
//de pin C del motor
const int D = 9; // Puerto digital para
//control de pin D del motor

Servo servo1;          // Crea un objeto de tipo Servo llamado servo1
Servo servo2;          // Crea un objeto de tipo Servo llamado servo1
Servo servo3;          // Crea un objeto de tipo Servo llamado servo1
int PINSERVO1 = 3;      // abajo
int PINSERVO2 = 5;      // mitad
int PINSERVO3 = 6;      // arriba
int Pulso_min = 500;   // Duración mínima del pulso en microsegundos
int Pulso_max = 2500;  // Duración máxima del pulso en microsegundos

// Define color sensor pins
#define S0 7
#define S1 8
#define S2 4
#define S3 2
#define Out 13

int rojo = 0;  
int verde = 0;  
int azul = 0;  

void setup() {
  pinMode(A,OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D, OUTPUT);

  servo1.attach(PINSERVO1, Pulso_min, Pulso_max); // Configura el servo en el pin especificado con límites de pulso mínimo y máximo
  servo2.attach(PINSERVO2, Pulso_min, Pulso_max); // Configura el servo en el pin especificado con límites de pulso mínimo y máximo
  servo3.attach(PINSERVO3, Pulso_min, Pulso_max); // Configura el servo en el pin especificado con límites de pulso mínimo y máximo

  pinMode(S0,OUTPUT);  
  pinMode(S1,OUTPUT);  
  pinMode(S2,OUTPUT);  
  pinMode(S3,OUTPUT);  
  pinMode(Out,INPUT);   
  digitalWrite(S0,HIGH);  
  digitalWrite(S1,HIGH);  

  Serial.begin(9600);
  }
void loop() {
  color();

  if (rojo < azul && verde > azul && rojo < 35) {  
    Serial.println("   Rojo"); 
    ManzanasRojas();   
  }    

  else if (rojo > verde && azul > verde )  {  
    Serial.println("   Verde"); 
    ManzanasVerdes();      
  }  
  else{
    Serial.println("Se acabaron");  
  }
  delay(900);     
}

void ManzanasRojas(){
    //----------------------------------------------------------------
  // COGE LA PEPA
  servo2.write(130);     // Gira el servo a 0 grados
  delay(20); 
  for (int i=90; i<170; i++){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(60);
  delay(100);
  
  for (int i=130; i<145; i++){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(0);
  delay(2000);
  for (int i=170; i>90; i--){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=145; i>130; i--){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  //---------------------------------------------------------------
  //GIRA
  for (int c=0; c<120; c++) { //512
  //Paso 1
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 2
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 3
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    delay(2);
    //Paso 4
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    delay(2);
  }
  delay(200);
  //--------------------------------------------------------------
  // SUELTA LA PEPA
  servo2.write(130);     // Gira el servo a 0 grados
  delay(20); 
  for (int i=90; i<170; i++){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=130; i<145; i++){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(60);
  delay(2000);
  for (int i=170; i>90; i--){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=120; i>130; i--){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  //----------------------------------------------------------------
  //SE DEVUELVE POR OTRA PEPA
  for (int c=0; c<120; c++){ //512
  //Paso 1
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    delay(2);
    //Paso 2
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 3
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 4
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    delay(2);
  }
  delay(200);
  Serial.println("dejar roja");
}

//..............................................................................

void ManzanasVerdes(){
    //-------------------------------------------------------------------
  // COGE LA PEPA
  servo2.write(130);     // Gira el servo a 0 grados
  delay(20); 
  for (int i=90; i<170; i++){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(60);
  delay(100);
  
  for (int i=130; i<145; i++){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(0);
  delay(2000);
  for (int i=170; i>90; i--){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=145; i>130; i--){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  //------------------------------------------------------------------
  //GIRA
  for (int c=0; c<250; c++) { //512
  //Paso 1
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 2
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 3
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    delay(2);
    //Paso 4
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    delay(2);
  }
  delay(200);
  //---------------------------------------------------------------
 // SUELTA LA PEPA
  servo2.write(130);     // Gira el servo a 0 grados
  delay(20); 
  for (int i=90; i<170; i++){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=130; i<145; i++){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  servo3.write(60);
  delay(2000);
  for (int i=170; i>90; i--){
    servo1.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  for (int i=120; i>130; i--){
    servo2.write(i);     // Gira el servo a 0 grados
    delay(20); 
  }
  //------------------------------------------------------------
  //SE DEVUELVE POR OTRA PEPA
  for (int c=0; c<250; c++){ //512
  //Paso 1
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    delay(2);
    //Paso 2
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 3
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    delay(2);
    //Paso 4
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    delay(2);
  }
  delay(200);
  Serial.println("dejar verde");
}

//....................................................................

void color()  
{    
  digitalWrite(S2, LOW);  
  digitalWrite(S3, LOW);   
  rojo = pulseIn(Out, digitalRead(Out) == HIGH ? LOW : HIGH);  
  digitalWrite(S3, HIGH);   
  azul = pulseIn(Out, digitalRead(Out) == HIGH ? LOW : HIGH);  
  digitalWrite(S2, HIGH);    
  verde = pulseIn(Out, digitalRead(Out) == HIGH ? LOW : HIGH);  
}
