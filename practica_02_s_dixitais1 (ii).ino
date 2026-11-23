/*
Programa que permite escoller o LED que parpadea (500 ms) en función do valor
dunha variable de tipo "String" modificada manualmente no código (pines 12 a 7).

Autor: Juan Manuel Pouso Martínez
Data: 23/11/2026
*/


// Cambia este texto en el codigo para elegir que LED parpadea
String led = "blanco";

// Pines de los 6 LEDs (del 12 al 7)
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.begin(9600);
}

//Condiciones de encendido
void loop() {
if (Serial.available()){
    led = Serial.readString();
  }
  //Se a variable led está en blanco que se encenda o LED blanco
  //En caso contrario, que se encenda un LED azul, verde e asi sucesivamente
  if (led == "blanco") {
    digitalWrite(12, HIGH);
    Serial.print("LED pin 12 encendido; ");
    delay(500);
    digitalWrite(12, LOW);
    Serial.println("LED pin 12 apagado");
    delay(500);
  }
  else if (led == "azul") {
    digitalWrite(11, HIGH);
    Serial.print("LED pin 11 encendido; ");
    delay(500);
    digitalWrite(11, LOW);
    Serial.println("LED pin 11 apagado");
    delay(500);
  }
  else if (led == "verde") {
    digitalWrite(10, HIGH);
    Serial.print("LED pin 10 encendido; ");
    delay(500);
    digitalWrite(10, LOW);
    Serial.println("LED pin 10 apagado");
    delay(500);
  }
  else if (led == "amarillo") {
    digitalWrite(9, HIGH);
    Serial.print("LED pin 9 encendido; ");
    delay(500);
    digitalWrite(9, LOW);
    Serial.println("LED pin 9 apagado");
    delay(500);
  }
  else if (led == "naranja") {
    digitalWrite(8, HIGH);
    Serial.print("LED pin 8 encendido; ");
    delay(500);
    digitalWrite(8, LOW);
    Serial.println("LED pin 8 apagado");
    delay(500);
  }
  else if (led == "rojo") {
    digitalWrite(7, HIGH);
    Serial.print("LED pin 7 encendido; ");
    delay(500);
    digitalWrite(7, LOW);
    Serial.println("LED pin 7 apagado");
    delay(500);
  }
  //Mensaje que aparece si no se tiene ningún led encendido
  else {
    Serial.println("ERROR variable no seleccionada");
  }
}