/**********************************************************************
 ** este programa contará  hexadecimal desde el 0123456789ABCDEF     **
 ** con un delay 1 segundo entre cada carácter, tecleando            **     
 ** la serie de numeros en la consola iran apareciendo en el display **
 ** *******************************************************************
 */

int mensaje=0;// Variable que almacena mensaje, lo que yo pongo en la consola
void setup(){//Método propio de Arduino que inicializa la configuración
  
// Selecionando cada pin a su salida

Serial.begin(9600);//Monitor
pinMode(2, OUTPUT);  
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);

}
void display (int a, int b, int c, int d, int e, int f, int g) // Método Display, es el encargado de configurar donde encender el segmento del display
{
digitalWrite (2,a);   
digitalWrite (3,b);   
digitalWrite (4,c);
digitalWrite (5,d);
digitalWrite (6,e);
digitalWrite (7,f);
digitalWrite (8,g);
}

void loop(){// Método que se repite todo el rato buscando el cambio

if (Serial.available()>0){
mensaje=Serial.read();

if (mensaje=='0'){
display (1,1,1,1,1,1,0); 
}
if (mensaje=='1'){
display (0,1,1,0,0,0,0);
}
if (mensaje=='2'){
display (1,1,0,1,1,0,1);
}
if (mensaje=='3'){
display (1,1,1,1,0,0,1);
}
if (mensaje=='4'){
display (0,1,1,0,0,1,1);
}
if (mensaje=='5'){
display (1,0,1,1,0,1,1);
}
if (mensaje=='6'){
display (1,0,1,1,1,1,1);
}
if (mensaje=='7'){
display (1,1,1,0,0,0,0); 
}
if (mensaje=='8'){
display (1,1,1,1,1,1,1); 
}
if (mensaje=='9'){
display (1,1,1,0,0,1,1);
}
if (mensaje=='a'){
display (1,1,1,0,1,1,1);
}
if (mensaje=='b'){
display (0,0,1,1,1,1,1);
}
if (mensaje=='c'){
display (1,0,0,1,1,1,0);
}
if (mensaje=='d'){
display (0,1,1,1,1,0,1);
}
if (mensaje=='e'){
display (1,0,0,1,1,1,1);
}
if (mensaje=='f'){
display (1,0,0,0,1,1,1);
}

}
delay(1000);//Delay esta dentro de void loop en Milisegundos
}