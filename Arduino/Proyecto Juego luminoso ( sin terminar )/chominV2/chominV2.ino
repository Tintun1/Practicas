// Temas
#define MATEMATICA 0
int diffmat;
#define EJEMPLO1 2
#define EJEMPLO2 4

// dificultades
#define FACIL 0
#define INTERMEDIO 2
#define DIFICIL 4


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// char PREGUNTASMATEMATICA[8][5] = {{"Pregunta 1", "Rta1", "Rta2", "Rta3", "Rta4"},{},{},{},{},{},{},{}}
//modificado...

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
  lcd.print("Thiago Ramadan");
  lcd.setCursor(0,1);
  lcd.print("     YBA      ");
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
  PREGUNTA = map(SELECTOR, 0, 1023, 0, 9);
  CONFIRMADOR = digitalRead(PULSADOR);

    if ( CONFIRMADOR == 1 && PREGUNTA == MATEMATICA ) {

      lcd.setCursor(0,0);
      lcd.print("Tema Matematica         ");
      lcd.setCursor(0,1);
      lcd.print("--Seleccionar--         ");
      delay(500);

    }

    if ( CONFIRMADOR == 1 && PREGUNTA == EJEMPLO1 ) {

      lcd.setCursor(0,0);
      lcd.print("Tema Intermedio         ");
      lcd.setCursor(0,1);
      lcd.print("--Seleccionar--         ");
      delay(100);

    }

    if ( CONFIRMADOR == 1 && PREGUNTA == EJEMPLO2 ) {

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
      delay(1000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Elejir dificultad");

      if ( CONFIRMADOR == 1 && PREGUNTA == FACIL ) {
        lcd.setCursor(0,1);
        lcd.print("--Facil--");
      }

      if ( CONFIRMADOR == 1 && PREGUNTA == INTERMEDIO ) {
        lcd.setCursor(0,1);
        lcd.print("--Intermedio--");
      }

      if ( CONFIRMADOR == 1 && PREGUNTA == DIFICIL ) {
        lcd.setCursor(0,1);
        lcd.print("--Dificil--");
      }
      
      if ( CONFIRMADOR == 0 && PREGUNTA == FACIL ) {
        lcd.setCursor(0,1);
        lcd.print("Seleccionado");
        delay(500);
         // incia el tema de matematica llamando a su funcion
        TemaMatematicaFacil(); 
      }

      if ( CONFIRMADOR == 0 && PREGUNTA == INTERMEDIO ) {
        lcd.setCursor(0,1);
        lcd.print("Seleccionado");
        delay(500);
        // incia el tema de matematica llamando a su funcion
        TemaMatematicaIntermedio();
      }

      if ( CONFIRMADOR == 0 && PREGUNTA == DIFICIL ) {
        lcd.setCursor(0,1);
        lcd.print("Seleccionado");
        delay(500);
        // incia el tema de matematica llamando a su funcion
        TemaMatematicaDificil();
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
