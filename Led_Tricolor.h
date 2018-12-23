const int r=11, g=10, b=9;





void setup() {



Serial.begin (9600);



}



void loop() {



      for (int red=0; red<255; red=red+20){ //20 esta bien, pero 10 se aprecia mejor

      for (int green=0; green<255; green=green+20){  

      for (int blue=0; blue<255; blue=blue+20){ 

      

      analogWrite(r, red);

      analogWrite(g, green);

      analogWrite(b, blue);



  delay(10);// 200 o 500 otra opcion

   

   Serial.print (red); Serial.print (":red   ");

   Serial.print (green); Serial.print (":green  ");

   Serial.print (blue); Serial.print (":blue  ");

   Serial.println ();



   } 



   }



   }



   



  }