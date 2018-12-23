//Pantalla LCD



// Incluímos la libreria externa para poder utilizarla



#include <LiquidCrystal.h> // Entre los símbolos <> buscará en la carpeta de librerías configurada



// Definimos las constantes



#define COLS 16 // Columnas del LCD



#define ROWS 2 // Filas del LCD



// Lo primero es inicializar la librería indicando los pins de la interfaz



LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



 



//Sensor de humedad



#include "DHT.h" //cargamos la librería DHT



#define DHTPIN 7 //Seleccionamos el pin en el que se conectará el sensor



#define DHTTYPE DHT11 //Se selecciona el DHT11 ya que hay otros DHT



DHT dht(DHTPIN, DHTTYPE); //Se inicia una variable que será usada por Arduino para comunicarse con el sensor



 



 



void setup() {



  // Configuración monitor serie



  Serial.begin(9600);



  dht.begin();//Se inicia el sensor de humedad



 



  // Configuramos las filas y las columnas del LCD en este caso 16 columnas y 2 filas



  lcd.begin(COLS, ROWS);



}



void loop() {



 



//Datos del sensor de humedad:



  float h = dht.readHumidity(); //Se lee la humedad



float t = dht.readTemperature(); //Se lee la temperatura



 



//Datos de la pantalla LCD:



  // Limpiamos la pantalla



  lcd.clear();



 lcd.print("   Mi proyecto");

  lcd.setCursor(3,1);

  lcd.print("   en Telecomunicaciones");

  lcd.setCursor(3,1);



 delay (2500);

lcd.setCursor(3,0);



 delay (2500);

lcd.setCursor(3,0);

 delay (2500);

lcd.setCursor(3,0);

  // Situamos el cursor en la columna 0 fila 0



  lcd.setCursor(3,0);



  // Escribimos Humedad y su variable para que la muestre

 lcd.clear();

  lcd.print("   Humedad ");

  lcd.setCursor(3,1);

  lcd.print(h);



 delay (2500);

lcd.setCursor(3,0);



  // Escribimos Humedad y su variable para que la muestre

 lcd.clear();

  lcd.print("  Temperatura ");

  lcd.setCursor(3,1);

  lcd.print(t);



  delay (1000);

    // Situamos el cursor en la columna 0 fila 1

 

  }