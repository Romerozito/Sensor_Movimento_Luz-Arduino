// Sensor de Movimento para acionar Luz

#include <NewPing.h>

#define SONAR_NUM 2      // Number of sensors.
#define MAX_DISTANCE 200 // Maximum distance (in cm) to ping.
int distancia = 0;
const int pinRele = 7;
const int pinLDR = A0;
int leitura = 0;

NewPing sonar[SONAR_NUM] = {   // Sensor object array.
  NewPing(9, 8, MAX_DISTANCE), // Each sensor's trigger pin, echo pin, and max distance to ping. 
  NewPing(11, 10, MAX_DISTANCE) 
  };

void setup() {
  Serial.begin(9600); // Open serial monitor at 9600 baud to see ping results.
  pinMode(pinRele, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop() { 
  leitura = analogRead(pinLDR);
  if (leitura < 500){
  for (uint8_t i = 0; i < SONAR_NUM; i++) { // Loop through each sensor and display results.
    delay(50); // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
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
