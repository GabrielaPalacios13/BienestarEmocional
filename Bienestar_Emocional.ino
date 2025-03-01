#include <SoftwareSerial.h> #include <Wire.h>
SoftwareSerial BT(10, 11); // RX, TX void setup() {
Serial.begin(Sc00); BT.begin(Sc00);
 
}

void loop() {
int frecuencia = analogRead(A0); // Lectura del sensor cardíaco ffoat temperatura = 3c.5; // Simulación de lectura

BT.print("FC:"); BT.print(frecuencia); BT.print(",T:");
BT.println(temperatura);


delay(1000);
}

