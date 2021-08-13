// Sensor de Movimento para acionar Luz

// Vinicius N. Romero
// viniciusdename@hotmail.com
// 10/08/2021 
// Itirapina/sp


#include <NewPing.h>

#define SONAR_NUM 2      // Numeros de Sensores
#define MAX_DISTANCE 200 // Distancia maxima para detecção
int distancia = 0;
const int pinRele = 7;
const int pinLDR = A0;
int leitura = 0;

NewPing sonar[SONAR_NUM] = {   // Sensor object array.
  NewPing(9, 8, MAX_DISTANCE), // Pino Trigger,  Pino Echo e Maxima Distancia para cada Sensor
  NewPing(11, 10, MAX_DISTANCE) 
  };

void setup() {
  Serial.begin(9600); // Abrir o Monitor Serial em 9600, para verificar os registros dos sensores
  pinMode(pinRele, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop() { 
  leitura = analogRead(pinLDR);
  if (leitura < 500){ // Verificando a lumioniosidade do ambiente
  for (uint8_t i = 0; i < SONAR_NUM; i++) { // Loop para cada sensor, e registrar seus resultados
    delay(50); // Espera 50ms entre os pings (cerca de 20 pings/sec). 29ms deve ser o minimo para entre cada ping.
    distancia = (sonar[i].ping_cm());
    
    if (distancia != 0){
    Serial.print(i);
    Serial.print("=");    
    Serial.print(distancia);
    Serial.print("cm ");
    if (pinRele != HIGH){
     Serial.print ("Luz Ligada");
     digitalWrite(pinRele, HIGH);
    }        
    delay (5000);
    }
    else{
      Serial.print("Luz Apagada!");
      digitalWrite(pinRele, LOW);
    }
  }
  }
  else{
    Serial.print("o dia está Claro");
    delay(5000);
    }
  Serial.println();
}
