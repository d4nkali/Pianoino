/*

  Programa do Pianoino simples

  Autor: d4nkali
  Data: 23/07/2023

*/

// Definir os tons de mhz de cada nota musical natural

  #define do 262
  #define re 294
  #define mi 330
  #define fa 349
  #define sol 392
  #define la 440
  #define si 494
  #define do_M 523

// Definir os tons de mhz de cada nota musical sustenido

  #define do_sus 277
  #define re_sus 311
  #define fa_sus 370
  #define sol_sus 415
  #define la_sus 466

  #define tmp 300 //Exceto esse que define o tempo de verificação

// Criando variaveis dos componetes(exceto teclas)

  const int led = 13; //Define que o led estar no pino 13
  const int som = 2; //Define que o auto-falante ta no pino 2

// Criando variaveis das teclas naturais

 const int tec_do = 12; //Define o pino 12 como a tecla do
 const int tec_re = 11; //Define o pino 11 como a tecla re
 const int tec_mi = 10; //Define o pino 10 como a tecla mi
 const int tec_fa = 9; //Define o pino 9 como a tecla fa
 const int tec_sol = 8; //Define o pino 8 como a tecla sol
 const int tec_la = 7; //Define o pino 7 como a tecla la
 const int tec_si = 6; //Define o pino 6 como a tecla si
 const int tec_do_M = 5; //Define o pino 5 como a tecla do maior

// Criando variaveis das teclas sustenidas

 const int tec_do_sus = 4; //Define o pino 4 como a tecla do sustenido
 const int tec_re_sus = 3; //Define o pino 11 como a tecla re sustenido
 const int tec_fa_sus = A0; //Define o pino 10 como a tecla fa sustenido
 const int tec_sol_sus = A1; //Define o pino 9 como a tecla sol sustenido
 const int tec_la_sus = A2; //Define o pino 8 como a tecla la sustenido

void setup() { //Configura as portas

// O LED e auto-falante como saida

 pinMode(led, OUTPUT); //Led como saída
 pinMode(som, OUTPUT); //Auto-falante como saída

//As teclas como entrada pullup (pullup:usar os resistores do arduino)
 
 pinMode(tec_do, INPUT_PULLUP); 
 pinMode(tec_re, INPUT_PULLUP);
 pinMode(tec_mi, INPUT_PULLUP);
 pinMode(tec_fa, INPUT_PULLUP); 
 pinMode(tec_sol, INPUT_PULLUP);
 pinMode(tec_la, INPUT_PULLUP); 
 pinMode(tec_si, INPUT_PULLUP);
 pinMode(tec_do_M, INPUT_PULLUP);

 pinMode(tec_do_sus, INPUT_PULLUP); 
 pinMode(tec_re_sus, INPUT_PULLUP);
 pinMode(tec_fa_sus, INPUT_PULLUP); 
 pinMode(tec_sol_sus, INPUT_PULLUP);
 pinMode(tec_la_sus, INPUT_PULLUP);

}

void loop() { // Programação central para o arduino

 digitalWrite(led, HIGH); // Liga o led para saber se esta funcionando

 if(digitalRead(tec_do) == LOW){ // Se a tecla do for precionado então:

  tone(som, do); //Liga auto-falante na nota dó
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar

  }

 if(digitalRead(tec_re) == LOW){ // Se a tecla re for precionado então:

  tone(som, re); //Ligar auto-falante na nota re
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar
  
  }  
  
 if(digitalRead(tec_mi) == LOW){ // Se a tecla mi for precionado então:

  tone(som, mi); //Ligar auto-falante na nota mi
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar
  }

 if(digitalRead(tec_fa) == LOW){ // Se a tecla fa for precionado então:

  tone(som, fa); //Ligar auto-falante na nota fa
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar

  }

 if(digitalRead(tec_sol) == LOW){ // Se a tecla sol for precionado então:

  tone(som, sol); //Liga auto-falante na nota sol
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_la) == LOW){ // Se a tecla la for precionado então:

  tone(som, la); //Liga auto-falante na nota la
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_si) == LOW){ // Se a tecla si for precionado então:

  tone(som, si); //Liga auto-falante na nota si
  delay(tmp); //Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); //Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_do_M) == LOW){ // Se a tecla do maior for precionado então:

  tone(som, do_M); // Liga auto-falante na nota dó maior
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }

 if(digitalRead(tec_do_sus) == LOW){ // Se a tecla do sustenido for precionado então:

  tone(som, do_sus); // Liga auto-falante na nota dó sustenido
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_re_sus) == LOW){ // Se a tecla re sustenido for precionado então:

  tone(som, re_sus); // Liga auto-falante na nota re sustenido
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_fa_sus) == LOW){ // Se a tecla fa sustenido for precionado então:

  tone(som, fa_sus); // Liga auto-falante na nota fa sustenido
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_sol_sus) == LOW){ // Se a tecla sol sustenido for precionado então:

  tone(som, sol_sus); // Liga auto-falante na nota sol sustenido
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }
  
 if(digitalRead(tec_la_sus) == LOW){ // Se a tecla la sustenido for precionado então:

  tone(som, la_sus); // Liga auto-falante na nota la sustenido
  delay(tmp); // Espera para verrificar se o botao está precionado. Se tiver fica ligado, senão desliga
  noTone(som); // Desliga auto-falante se parar de precionar

  }

}

//FIM