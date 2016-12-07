#include "datos.h"
// DECLARACION DE VARIABLES
int i=0;     
int j=0;
int k=0;
int l=0;
int m=0;
int n=0;
int suma;
double suma2;
double multi=1;
double promedio;

void setup() {
pinMode(2,INPUT); // puerto 2 como entrada
pinMode(3,INPUT);  // puerto 3 como entrada
pinMode(4,INPUT);  // puerto 4 como entrada
Serial.begin(9600); // inicilizo la cx serial
}

void loop() {
 //Suma de cada fila
if(digitalRead(2)==HIGH) // leo el puerto 2 y verifico si esta en HIGH
{
for(;i<20;i++) // ciclo para recorrer las filas
{
  for(;j<3;j++) // ciclo para recorrerlas columnas
{
  suma=suma+matriz[i][j]; // almaceno en la variable la suma de cada fila
}
Serial.print("La suma de la fila es "); // imprimo el mjs entre comillas 
Serial.println(suma); // imprimo el valor de la variable suma
delay(1000); // espero un segundo 
j=0; // encero la variable j
suma=0; // encero la variable suma
}
}
if(digitalRead(2)==LOW) // leo el puerto 2 y verifico si esta en LOW
{
  // ENCERO VARIABLES
 i=0; 
 j=0; 
}


// Multiplicacion de cada columna
if(digitalRead(3)==HIGH) // leo elpuerto 3 y verifico si esta en HIGH
{
for(;k<3;k++) // ciclo para recorrer las columnas
{
  for(;l<10;l++) // ciclo para recorrer las filas
{
  multi=multi*matriz[l][k]; // almaceno en la variable la multi de cada fila
}
Serial.println("La multiplicacion es "); // imprimo el mjs entre comillas 
Serial.println(multi);// imprimo el valor de la variable suma
delay(1000); // tiempo de espera
l=0; //encero la variable l
multi=1; //asigno valor de uno a la variable multi
}
}
if(digitalRead(3)==LOW) // leo el puerto 3 y verifico si esta en LOW
{
  // ENCERO VARIABLES
 k=0;
 l=0; 
}

// Promedion de las sumas de cada columna
if(digitalRead(4)==HIGH) // leo elpuerto 4 y verifico si esta en HIGH
{
for(;m<3;m++) // ciclo para recorrer las columnas
{
  for(;n<20;n++) // ciclo para recorrer las filas
{
  suma2=suma2+matriz[n][m];// almaceno en la variable la suma2 de cada fila
}
n=0; //encero la variable n
}
promedio=(suma2/3); // obtengo el promedio de la suma de cada una de las columnas
Serial.println("El promedio es");// imprimo el mensaje especificado
Serial.println(promedio);// imprimo el valor de la variable suma
delay(1000); // tiempo de espera
suma2=0; // encerio variable suma2
}
if(digitalRead(2)==LOW) // leo elpuerto 4 y verifico si esta en LOW
{
  // ENCERO VARIABLES
 m=0;
 n=0; 
}

}
