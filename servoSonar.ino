// finishing moving functions


const int trigPinF = 2;
const int echoPinF = 3;
const int trigPinR = 4;
const int echoPinR = 5;
const int trigPinL = 6;
const int echoPinL = 7;
const int motorPinR = 8;
const int motorPinL = 9;

long duration; // time it took signal to return
int distanceF; // distance from front of bot
int distanceR; // distance from right of bot
int distanceL; // distance from left of bot


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPinF, OUTPUT);
  pinMode(echoPinF, INPUT);
//  pinMode(trigPinR, OUTPUT);
//  pinMode(echoPinR, INPUT);
//  pinMode(trigPinL, OUTPUT);
//  pinMode(echoPinL, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);

}

int reading(trigPin, echoPin) {
  // clear the trig pin for 2ms
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // set the  front trig pin on high for 10ms
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // front echo pin will wait to go HIGH and start timing until LOW
  duration = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance = duration * 0.034 / 2;

  return distance;

// functions to handle the bots movement.
void moveBotForward() {
  
  
}
void moveBotRight() {
  
  
}
void moveBotLeft() {
  
  
}

void loop() {
  
  distanceF = reading(trigPinF, echoPinF);
  delay(100) // delay to avoid interference between sensors
  
  distanceR = reading(trigPinR, echoPinR);
  delay(100) // delay to avoid interference between sensors
  
  distanceL = reading(trigPinL, echoPinL);
  
  // print distance
  Serial.print("Distance: ");
  Serial.println(distance);
}
