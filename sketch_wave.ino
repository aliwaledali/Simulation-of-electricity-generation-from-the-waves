
 int in11 =9;
 int in21 =8;
 
const byte interruptPin = 2;
volatile byte state = LOW;
int n=0;

void setup() {
  Serial.begin(9600);
  pinMode(in11, OUTPUT);
  pinMode(in21, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), stat, RISING );
}



void loop() {
  
  Serial.print(n);
  Serial.print("\t");

  if(n==1){
     digitalWrite(in11, LOW);
     digitalWrite(in21, HIGH);
     delay(300);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     delay(50);
     digitalWrite(in11, HIGH);
     digitalWrite(in21, LOW);
     delay(300);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     delay(50);
 }
  else {
      digitalWrite(in11, LOW);
      digitalWrite(in21, LOW);
      n=0;
 }

}
void stat() {

  n++;
}
