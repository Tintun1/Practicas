void TemaMatematicaFacil () {

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
    
  