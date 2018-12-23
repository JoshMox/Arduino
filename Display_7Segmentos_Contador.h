/**********************************************************************

 ** este programa contará  hexadecimal desde el 0123456789ABCDEF     **

 ** con un delay 1 segundo entre cada carácter,                      **     

 **                                                                  **

 ** *******************************************************************

 */



int mensaje=0;// Variable que almacena mensaje, lo que yo pongo en la consola

void setup(){//Método propio de Arduino que inicializa la configuración

  

// Selecionando cada pin a su salida





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











display (1,1,1,1,1,1,0); //0

delay(1000);



display (0,1,1,0,0,0,0);//1

delay(1000);



display (1,1,0,1,1,0,1);//2

delay(1000);



display (1,1,1,1,0,0,1);//3

delay(1000);



display (0,1,1,0,0,1,1);//4

delay(1000);



display (1,0,1,1,0,1,1);//5

delay(1000);



display (1,0,1,1,1,1,1);//6

delay(1000);



display (1,1,1,0,0,0,0);//7

delay(1000);



display (1,1,1,1,1,1,1);//8

delay(1000);



display (1,1,1,0,0,1,1);//9

delay(1000);



display (1,1,1,0,1,1,1);//A

delay(1000);



display (0,0,1,1,1,1,1);//B

delay(1000);



display (1,0,0,1,1,1,0);//C

delay(1000);



display (0,1,1,1,1,0,1);//D

delay(1000);



display (1,0,0,1,1,1,1);//E

delay(1000);



display (1,0,0,0,1,1,1);//F

delay(1000);



}
