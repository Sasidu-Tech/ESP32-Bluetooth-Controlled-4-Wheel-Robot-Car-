#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

char command;


// =====================================
// L298N PINS
// =====================================

#define ENA 15
#define IN1 2
#define IN2 4

#define IN3 16
#define IN4 17
#define ENB 19



// =====================================
// MOTOR FUNCTIONS
// =====================================

void stopCar() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
}


void forward() {

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}


void backward() {

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}


void left() {

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}


void right() {

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}



void setup() {

  Serial.begin(115200);
  SerialBT.begin("BT_CAR");

  delay(1000);


  // Motor pins
  pinMode(ENA, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENB, OUTPUT);


  // Start stopped
  stopCar();

}
void loop() {

  if(SerialBT.available()){
    command = SerialBT.read();
  }
 

  switch(command){

    case 'F':
      forward() ;
      break;

    case 'B':
      backward();
      break;

    case 'L':
      left() ;
      break;

    case 'R':
      right();
      break;

    case 'S':
      stopCar();
      break;
    
  }
}  
