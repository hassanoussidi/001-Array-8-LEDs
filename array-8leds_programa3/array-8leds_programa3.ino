/**********************************************************************************
Al pulsar el pulsador conectado al pin 2, realiza el programa del ejercicio 1 
y al dejar de pulsar, realiza el programa del ejercicio 2
*********************************************** ***********************************/

const int led0 = 5;          // dar nombre al pin 5 del Arduino
const int led1 = 6;          // dar nombre al pin 6 del Arduino
const int led2 = 7;          // dar nombre al pin 7 del Arduino
const int led3 = 8;          // dar nombre al pin 8 del Arduino
const int led4 = 9;          // dar nombre al pin 9 del Arduino
const int led5 = 10;         // dar nombre al pin 10 del Arduino
const int led6 = 11;         // dar nombre al pin 11 del Arduino
const int led7 = 12;         // dar nombre al pin 12 del Arduino
const int buttonPin = 2;     // dar nombre al pin 2 del Arduino


void setup ()
{
  pinMode (led0, OUTPUT);     // definir el pin 5 como una salida
  pinMode (led1, OUTPUT);     // definir el pin 6 como una salida
  pinMode (led2, OUTPUT);     // definir el pin 7 como una salida
  pinMode (led3, OUTPUT);     // definir el pin 8 como una salida
  pinMode (led4, OUTPUT);     // definir el pin 9 como una salida
  pinMode (led5, OUTPUT);     // definir el pin 10 como una salida
  pinMode (led6, OUTPUT);     // definir el pin 11 como una salida
  pinMode (led7, OUTPUT);     // definir el pin 12 como una salida
  pinMode (buttonPin, INPUT); // definir el pin 2 como una entrada
}

void loop ()
{
if (digitalRead (buttonPin) == 1)
  {   
  digitalWrite(led0, HIGH);    // poner a 5V el pin 5
  digitalWrite(led1, HIGH);    // poner a 5V el pin 6
  digitalWrite(led2, HIGH);    // poner a 5V el pin 7
  digitalWrite(led3, HIGH);    // poner a 5V el pin 8
  digitalWrite(led4, HIGH);    // poner a 5V el pin 9
  digitalWrite(led5, HIGH);    // poner a 5V el pin 10
  digitalWrite(led6, HIGH);    // poner a 5V el pin 11
  digitalWrite(led7, HIGH);    // poner a 5V el pin 12
  delay(500);                  // milisegundos que los leds se quedan encendidos
  
  digitalWrite(led0, LOW);     // poner a 0V el pin 5
  digitalWrite(led1, LOW);     // poner a 0V el pin 6
  digitalWrite(led2, LOW);     // poner a 0V el pin 7
  digitalWrite(led3, LOW);     // poner a 0V el pin 8
  digitalWrite(led4, LOW);     // poner a 0V el pin 9
  digitalWrite(led5, LOW);     // poner a 0V el pin 10
  digitalWrite(led6, LOW);     // poner a 0V el pin 11
  digitalWrite(led7, LOW);     // poner a 0V el pin 12
  delay(500);                  // milisegundos que los leds se quedan apagados
  }

else
{
  digitalWrite(led0, HIGH);    // poner a 5V el pin 5
  digitalWrite(led1, LOW);     // poner a 0V el pin 6
  digitalWrite(led2, HIGH);    // poner a 5V el pin 7
  digitalWrite(led3, LOW);     // poner a 0V el pin 8
  digitalWrite(led4, HIGH);    // poner a 5V el pin 9
  digitalWrite(led5, LOW);     // poner a 0V el pin 10
  digitalWrite(led6, HIGH);    // poner a 5V el pin 11
  digitalWrite(led7, LOW);     // poner a 0V el pin 12
  delay(500);                  // milisegundos que los leds se quedan encendidos
  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  delay(500);                  // milisegundos que los leds se quedan encendidos
 }
 }

