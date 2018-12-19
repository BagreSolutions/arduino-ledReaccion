int estado=0;
int pulsadorAhora=0;
int pulsadorAntes=0;
int pulsadorAhora2=0;
int pulsadorAntes2=0;
int pulsadorAhora3=0;
int pulsadorAntes3=0;
int pulsadorAhora4=0;
int pulsadorAntes4=0;
double tiempo1 = 0;
bool bandera = false;
long rmd;
int num;
int ledPin =7;
int ledPin2 =8;
int ledPin3 =9;
int ledPin4 =10;
void setup() {
      
  pinMode(3,INPUT); //el pin 3 del Arduino entrada al pulsador
  pinMode(4,INPUT); //el pin 4 del Arduino entrada al pulsador
  pinMode(5,INPUT); //el pin 5 del Arduino entrada al pulsador
  pinMode(6,INPUT); //el pin 6 del Arduino entrada al pulsador
  pinMode(ledPin,OUTPUT);//el pin 7 del Arduino salida al diodo
  pinMode(ledPin2,OUTPUT);//el pin 8 del Arduino salida al diodo
  pinMode(ledPin3,OUTPUT);//el pin 9 del Arduino salida al diodo
  pinMode(ledPin4,OUTPUT);//el pin 10 del Arduino salida al diodo
  Serial.begin(9600);
  digitalWrite(ledPin,LOW);
    num = 1;
}
void loop() {
 

    if(num==1){
        
        pulsadorAhora=digitalRead(3);
        rmd = random(1000,5000);
        //if (pulsadorAhora==HIGH && pulsadorAntes==LOW) {
          // estado=1-estado;
        //}
        //pulsadorAntes=pulsadorAhora;
        
        if(digitalRead(ledPin)==LOW){
                if ( bandera == false ){
                    Serial.println("***");
                    //tiempo1 = millis();
                    bandera = true;
                    Serial.println("ESPERE ENCENDIDO LED1");
                    delay(rmd);
                    digitalWrite(ledPin,HIGH);
                    tiempo1 = millis();
                    
                }    
        }else{
            if( pulsadorAhora == HIGH && bandera ==true){
                Serial.println("TIEMPO DE REACCION");
                tiempo1 =  millis()- tiempo1;
            // tiempo1 =  rmd - tiempo1;
                Serial.println(tiempo1/1000);
                digitalWrite(ledPin,LOW);
                bandera = false;
                Serial.println("");
               num = random(1,5);
               Serial.println(num);
            }
        }
    }else if(num==2){
     
        pulsadorAhora2=digitalRead(4);
        rmd = random(1000,5000);
        //if (pulsadorAhora2==HIGH && pulsadorAntes2==LOW) {
          // estado=1-estado;
        //}
        //pulsadorAntes2=pulsadorAhora2;
        
        if(digitalRead(ledPin2)==LOW){
                if ( bandera == false ){
                    Serial.println("***");
                    //tiempo1 = millis();
                    bandera = true;
                    Serial.println("ESPERE ENCENDIDO LED2");
                    delay(rmd);
                    digitalWrite(ledPin2,HIGH);
                    tiempo1 = millis();
                }    
        }else{
            if( pulsadorAhora2 == HIGH && bandera ==true){
                Serial.println("TIEMPO DE REACCION");
                tiempo1 =  millis()- tiempo1;
            // tiempo1 =  rmd - tiempo1;
                Serial.println(tiempo1/1000);
                digitalWrite(ledPin2,LOW);
                bandera = false;
                Serial.println("");
               num = random(1,5);
               Serial.println(num);
            }
        }

    }else if(num==3){
     
        pulsadorAhora3=digitalRead(5);
        rmd = random(1000,5000);
        //if (pulsadorAhora3==HIGH && pulsadorAntes3==LOW) {
          // estado=1-estado;
        //}
        //pulsadorAntes3=pulsadorAhora3;
        
        if(digitalRead(ledPin3)==LOW){
                if ( bandera == false ){
                    Serial.println("***");
                    //tiempo1 = millis();
                    bandera = true;
                    Serial.println("ESPERE ENCENDIDO LED3");
                    delay(rmd);
                    digitalWrite(ledPin3,HIGH);
                    tiempo1 = millis();
                }    
        }else{
            if( pulsadorAhora3 == HIGH && bandera ==true){
                Serial.println("TIEMPO DE REACCION");
                tiempo1 =  millis()- tiempo1;
            // tiempo1 =  rmd - tiempo1;
                Serial.println(tiempo1/1000);
                digitalWrite(ledPin3,LOW);
                bandera = false;
                Serial.println("");
               num = random(1,5);
               Serial.println(num);
            }
        }
    }else{

        pulsadorAhora4=digitalRead(6);
        rmd = random(1000,5000);
        //if (pulsadorAhora4==HIGH && pulsadorAntes4==LOW) {
          // estado=1-estado;
        //}
        //pulsadorAntes4=pulsadorAhora4;
        
        if(digitalRead(ledPin4)==LOW){
                if ( bandera == false ){
                    Serial.println("***");
                    //tiempo1 = millis();
                    bandera = true;
                    Serial.println("ESPERE ENCENDIDO LED4");
                    delay(rmd);
                    digitalWrite(ledPin4,HIGH);
                    tiempo1 = millis();
                }    
        }else{
            if( pulsadorAhora4 == HIGH && bandera ==true){
                Serial.println("TIEMPO DE REACCION");
                tiempo1 =  millis()- tiempo1;
            // tiempo1 =  rmd - tiempo1;
                Serial.println(tiempo1/1000);
                digitalWrite(ledPin4,LOW);
                bandera = false;
                Serial.println("");
               num = random(1,5);
               Serial.println(num);
            }
        }
    }

}
