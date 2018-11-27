// Use constants to associate control signals with Arduino Pins
int motorR1 = 4; // IN1 (Right Motor)
int motorR2 = 5; // IN2 (Right Motor)
int motorL1 = 6; // IN3 (Left Motor)
int motorL2 = 7; // IN4 (Left Motor)
int time = 0;
bool delayRunning = false;
unsigned long delayStart = 0;

// Lets make some functions for different moves yo
void stop(){
  //Stops Right Motor
 digitalWrite(motorR1, LOW); //rRight Motor wire 1 is 0V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V

 //Stops Left Motor
 digitalWrite(motorL1, LOW); //Left Motor wire 1 is 0V
 digitalWrite(motorL2, LOW); //LeftMotor wire 2 is 0V;
}


void leftSpin(int time){
  //This spins right motor forwards
 digitalWrite(motorR1, LOW); //Right Motor wire 1 is 0V
 digitalWrite(motorR2, HIGH); //Right Motor wire 2 is 9.6V

 //This spins left motor backwards
 digitalWrite(motorL1, HIGH); //Left Motor wire 1 is 9.6V
 digitalWrite(motorL2, LOW); //Left Motor wire 2 is 0V;
 delay(time);
 stop();
 }


void rightSpin(int time){
  //This spins right motor backwards
 digitalWrite(motorR1, HIGH); //Right Motor wire 1 is 9.6V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V

 //This spins left motor forwards
 digitalWrite(motorL1, LOW); //Left Motor wire 1 is 0V
 digitalWrite(motorL2, HIGH); //Left Motor wire 2 is 9.6V
 delay(time);
 stop();
 }


void rightPivotForward(int time){
//This spins left motor forwards
 digitalWrite(motorL1, LOW); //Left Motor wire 1 is 0V
 digitalWrite(motorL2, HIGH); //Left Motor wire 2 is 9.6V

//Stops Right Motor
 digitalWrite(motorR1, LOW); //rRight Motor wire 1 is 0V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V
 delay(time);
 stop();
 }

void rightPivotBackward(int time){
//This spins left motor forwards
 digitalWrite(motorL1, HIGH); //Left Motor wire 1 is 9.6V
 digitalWrite(motorL2, LOW); //Left Motor wire 2 is 0V

//Stops Right Motor
 digitalWrite(motorR1, LOW); //rRight Motor wire 1 is 0V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V
 delay(time);
 stop();
 }

 void leftPivotForward(int time){
//This spins Right motor forwards
 digitalWrite(motorR1, LOW); //Right Motor wire 1 is 0V
 digitalWrite(motorR2, HIGH); //Right Motor wire 2 is 9.6V

//Stops Left Motor
 digitalWrite(motorL1, LOW); //Left Motor wire 1 is 0V
 digitalWrite(motorL2, LOW); //Left Motor wire 2 is 0V
 delay(time);
 stop();
 }

 void leftPivotBackward(int time){
//This spins Right motor forwards
 digitalWrite(motorR1, HIGH); //Right Motor wire 1 is 9.6V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V

//Stops Left Motor
 digitalWrite(motorL1, LOW); //Left Motor wire 1 is 0V
 digitalWrite(motorL2, LOW); //Left Motor wire 2 is 0V
 delay(time);
 stop();
 }

 void forward(int time){
//This spins Right motor forwards
 digitalWrite(motorR1, LOW); //Right Motor wire 1 is 0V
 digitalWrite(motorR2, HIGH); //Right Motor wire 2 is 9.6V

//This spins Left motor forwards
 digitalWrite(motorL1, LOW); //Right Motor wire 1 is 0V
 digitalWrite(motorL2, HIGH); //Right Motor wire 2 is 9.6V
 delay(time);
 stop();
 }

 void backward(int time){
//This spins Right motor forwards
 digitalWrite(motorR1, HIGH); //Right Motor wire 1 is 9.6V
 digitalWrite(motorR2, LOW); //Right Motor wire 2 is 0V

//This spins Left motor forwards
 digitalWrite(motorL1, HIGH); //Right Motor wire 1 is 9.6V
 digitalWrite(motorL2, LOW); //Right Motor wire 2 is 0V
 delay(time);
 stop();
 }
 


void wiggleBoogie(int time){
for(int i = 0; i<= time; i+=200) {
rightSpin(100);
leftSpin(100);
}
stop();
}

void pivotBoogie(int time){
for(int i = 0; i<= time; i+=2000) {
leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(500);
}
stop();
}

void setup()
{
 pinMode(motorR1, OUTPUT); //Set digital pins as OUTPUTs
 pinMode(motorR2, OUTPUT);
 pinMode(motorL1, OUTPUT);
 pinMode(motorL2, OUTPUT);
}
void loop(){
leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(500);
leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(500);
leftPivotForward(445);

leftSpin(2270);

rightSpin(2232);

leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(85);

forward(430);
backward(430); 
 
leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(183);

rightSpin(1933);

forward(427);
backward(427);

leftSpin(1405);

rightSpin(2230);

forward(427);
backward(427); 

leftPivotForward(500);
leftPivotBackward(500);
rightPivotForward(500);
rightPivotBackward(146);

rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(100);
leftSpin(100);
rightSpin(18);

leftSpin(2000);

stop();
delay(5000);
}






