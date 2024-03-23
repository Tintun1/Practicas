#define MATEMATICA 1
#define MATEMATICA_MEDIO 2
#define MATEMATICA_DIFICIL 3

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// char PREGUNTASMATEMATICA[8][5] = {{"Pregunta 1", "Rta1", "Rta2", "Rta3", "Rta4"},{},{},{},{},{},{},{}}


int value;

int CONT=0;
int CANT=4;

int PULSADOR=7;
int CONFIRMADOR=0;

int SELECTOR;
int PREGUNTA;

int PUNTAJE1 = 0;
int PUNTAJE2 = 0;

int RESPUESTA1 = 28;
int RESPUESTA2 = 30;
int RESPUESTA3 = 32;
int RESPUESTA4 = 34;
int RESPUESTA5 = 36;
int RESPUESTA6 = 38;
int RESPUESTA7 = 40;
int RESPUESTA8 = 42;



int RTA1 = 0;
int RTA2 = 0;
int RTA3 = 0;
int RTA4 = 0;
int RTA5 = 0;
int RTA6 = 0;
int RTA7 = 0;
int RTA8 = 0;

const int LED = 4;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  //lcd.print("CATA JUACO CIELO");
  lcd.print("Thiago Ramadan");
  lcd.setCursor(0,1);
  lcd.print("     Mono      ");
  delay(500);

  // Pin setup
  pinMode(PULSADOR,INPUT);
  pinMode(RESPUESTA1,INPUT);
  pinMode(RESPUESTA2,INPUT);
  pinMode(RESPUESTA3,INPUT);
  pinMode(RESPUESTA4,INPUT);
  pinMode(RESPUESTA5,INPUT);
  pinMode(RESPUESTA6,INPUT);
  pinMode(RESPUESTA7,INPUT);
  pinMode(RESPUESTA8,INPUT);
  pinMode (LED,OUTPUT);
}

String carga = "//";
String cargaAux;

void TiempoCarga(int cantidad){
  cargaAux = "";
  for(int j = 0; j <= cantidad - 1; j++){
    cargaAux = cargaAux + carga;
  }
  lcd.setCursor(0,1);
  lcd.print(cargaAux);
}

void loop(){



  digitalWrite(LED, HIGH);
  delay(300);
  digitalWrite(LED, LOW);
  delay(300);

  SELECTOR = analogRead(A0);
  PREGUNTA = map(SELECTOR, 0, 1023, 1, 4);
  CONFIRMADOR = digitalRead(PULSADOR);

    if ( CONFIRMADOR == 0 && PREGUNTA == MATEMATICA ) {

      lcd.setCursor(0,0);
      lcd.print("Tema Matematica         ");
      lcd.setCursor(0,1);
      lcd.print("--Seleccionar--         ");
      delay(500);

    }

    if ( CONFIRMADOR == 0 && PREGUNTA == MATEMATICA_MEDIO ) {

      lcd.setCursor(0,0);
      lcd.print("Tema Medio         ");
      lcd.setCursor(0,1);
      lcd.print("--Seleccionar--         ");
      delay(500);

    }

    if ( CONFIRMADOR == 0 && PREGUNTA == MATEMATICA_DIFICIL ) {

      lcd.setCursor(0,0);
      lcd.print("Tema Dificil         ");
      lcd.setCursor(0,1);
      lcd.print("--Seleccionar--         ");
      delay(500);

    }
      
    if(CONFIRMADOR == 0){
    if(PREGUNTA == MATEMATICA){
      lcd.setCursor(0,0);
      lcd.print("Tema Matematica         ");
      lcd.setCursor(0,1);
      lcd.print("--Cargando--         ");
      delay(500);
      for (int i = 0; i <= CANT; i++) {
        switch (i) {
          case 0:
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("2+2            ");
            delay(2000);
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("1) 8  2) 4");
            lcd.setCursor(0,1);
            lcd.print("3) 5  4) 2");
            delay(1000);
            for(int j = 0; j < 8; j++){
              TiempoCarga(j);
              delay(500);
            }
              RTA1 = digitalRead(RESPUESTA1);
              RTA2 = digitalRead(RESPUESTA2);
              RTA3 = digitalRead(RESPUESTA3);
              RTA4 = digitalRead(RESPUESTA4);
              RTA5 = digitalRead(RESPUESTA5);
              RTA6 = digitalRead(RESPUESTA6);
              RTA7 = digitalRead(RESPUESTA7);
              RTA8 = digitalRead(RESPUESTA8);
            
              if ( RTA2 == LOW ) {
                lcd.setCursor(0,1);
                lcd.print("Correcto!J1        ");
                
                delay(2000);
                ++PUNTAJE1;
              }
              if ( RTA1 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              if ( RTA3 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              if ( RTA4 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              if (  RTA6 == LOW ) {
                lcd.setCursor(0,1);
                lcd.print("Correcto!J2        ");
                
                delay(2000);
                ++PUNTAJE2;
              } 
              if ( RTA5 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              if ( RTA7 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              if ( RTA8 == LOW ) {

                  lcd.setCursor(0,1);
                  lcd.print("Incorrecto!        ");
                  
                  delay(2000);
              } 
              delay(2000);
         case 1:
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("7+7            ");
            delay(2000);
            
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("1) 16  2) 15");
            lcd.setCursor(0,1);
            lcd.print("3) 14  4) 19");
            delay(1000);
            for(int j = 0; j < 8; j++){
              TiempoCarga(j);
              delay(500);
            }
            RTA1 = digitalRead(RESPUESTA1);
            RTA2 = digitalRead(RESPUESTA2);
            RTA3 = digitalRead(RESPUESTA3);
            RTA4 = digitalRead(RESPUESTA4);
            RTA5 = digitalRead(RESPUESTA5);
            RTA6 = digitalRead(RESPUESTA6);
            RTA7 = digitalRead(RESPUESTA7);
            RTA8 = digitalRead(RESPUESTA8);
            
            if ( RTA3 == LOW ) {
              lcd.setCursor(0,1);
              lcd.print("Correcto!J1        ");
              
              delay(2000);
              ++PUNTAJE1;
            } 
              if ( RTA2 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA1 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA4 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if (  RTA7 == LOW ) {
                lcd.setCursor(0,1);
                lcd.print("Correcto!J2        ");
              
              delay(2000);
              ++PUNTAJE2;
              } 
              if ( RTA6 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA5 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA8 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              delay(2000);
          case 2:
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("3+4            ");
            delay(2000);
            
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("1) 7  2) 9");
            lcd.setCursor(0,1);
            lcd.print("3) 8  4) 6");
            delay(1000);
            for(int j = 0; j < 8; j++){
              TiempoCarga(j);
              delay(500);
            }
            RTA1 = digitalRead(RESPUESTA1);
            RTA2 = digitalRead(RESPUESTA2);
            RTA3 = digitalRead(RESPUESTA3);
            RTA4 = digitalRead(RESPUESTA4);
            RTA5 = digitalRead(RESPUESTA5);
            RTA6 = digitalRead(RESPUESTA6);
            RTA7 = digitalRead(RESPUESTA7);
            RTA8 = digitalRead(RESPUESTA8);
            
            if ( RTA1 == LOW ) {
              lcd.setCursor(0,1);
              lcd.print("Correcto!J1        ");
              
              delay(2000);
              ++PUNTAJE1;
              } 
              if ( RTA2 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA3 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA4 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if (  RTA5 == LOW ) {
              lcd.setCursor(0,1);
              lcd.print("Correcto!J2        ");
              
              delay(2000);
              ++PUNTAJE2;
              } 
              if ( RTA6 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA7 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA8 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              delay(2000);
        case 3:
          lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("6+5            ");
            delay(2000);
            
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("1) 12  2) 13");
            lcd.setCursor(0,1);
            lcd.print("3) 9  4) 11");
            delay(1000);

            // Pantalla de carga
            for(int j = 0; j < 8; j++){
              TiempoCarga(j);
              delay(500);
            }

            RTA1 = digitalRead(RESPUESTA1);
            RTA2 = digitalRead(RESPUESTA2);
            RTA3 = digitalRead(RESPUESTA3);
            RTA4 = digitalRead(RESPUESTA4);
            RTA5 = digitalRead(RESPUESTA5);
            RTA6 = digitalRead(RESPUESTA6);
            RTA7 = digitalRead(RESPUESTA7);
            RTA8 = digitalRead(RESPUESTA8);
            
            if ( RTA4 == LOW ) {
              lcd.setCursor(0,1);
              lcd.print("Correcto!J1        ");
              
              delay(2000);
              ++PUNTAJE1;
              } 
              if ( RTA2 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA3 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA1 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if (  RTA8 == LOW ) {
              lcd.setCursor(0,1);
              lcd.print("Correcto!J2        ");
              
              delay(2000);
              ++PUNTAJE2;
              } 
              if ( RTA6 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA7 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              if ( RTA5 == LOW ) {

                lcd.setCursor(0,1);
                lcd.print("Incorrecto!        ");
                
                delay(2000);
              } 
              delay(2000);
        case 4:
          lcd.clear();
          lcd.setCursor(0,0);

          if ( PUNTAJE1 < PUNTAJE2){

            lcd.print("Jugador 2 gana        ");
            lcd.setCursor(0,1);
            lcd.print("con        ");
            lcd.print(PUNTAJE2);
            bool Termino = true;
      
          } else if ( PUNTAJE2 < PUNTAJE1 ) {

              lcd.print("Jugador 1 gana        ");
              lcd.setCursor(0,1);
              lcd.print("con        ");
              lcd.print(PUNTAJE1);
              bool Termino = true;
      
          } else { 

              lcd.print("empate        ");
              bool Termino = true;
          }

          
     
    break;
      
        }
      }
    }
  }
}


/* Funcion de pruba de pulsadores  

  void Prueba() {
  rta1 = digitalRead(RESPUESTA1);
  rta2 = digitalRead(RESPUESTA2);
  rta3 = digitalRead(RESPUESTA3);
  rta4 = digitalRead(RESPUESTA4);

  Serial.print("Rta1: ");
  Serial.println(rta1);

  Serial.print("Rta2: ");
  Serial.println(rta2);

  Serial.print("Rta3: ");
  Serial.println(rta3);
  
  Serial.print("Rta4: ");
  Serial.println(rta4);

  delay(100);
  }

  bool rta1;
  bool rta2;
  bool rta3;
  bool rta4;


  void ElegirTema(){

  }

  void ElegirPregunta(){

  }

  void ElegirRespuesta(){

  }
*/       
