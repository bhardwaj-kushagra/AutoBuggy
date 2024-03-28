//Kushagra-37/CS/22-R.E.C. Mainpuri

const int enA = 9; //Enabler Pin number at which you connected Arduino to motor driver(Right)
const int in1 = 6; //input pin 1 for right side
const int in2 = 7; //input pin 2 for right side
const int enB = 5; //Enabler Pin number at which you connected Arduino to motor driver(Left)
const int in3 = 4; //input pin 1 for left side
const int in4 = 8; //input pin 2 for left side
const int triggerPin = 2; //for Ultrasonic's trigger pin
const int echoPin = 3; //for Ultrasonic's echo pin
const int fwdLimit = 45; // Maximum distance to move forward
const int bwdLimit = 10; // Minimum distance to move back

//declarations
void setup() {
  Serial.begin(9600); //just for observation
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(triggerPin, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

long readUltrasonicDistance() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);  //to measure the duration of a pulse (high or low) on a digital input pin. There are other ways to do it but I prefer this one.
}

void loop() {
  int cm = 0.01723 * readUltrasonicDistance();// conversion from inches to cm(you can choose what you're familiar with)
  Serial.println(cm); // for observation again

  //pwm signal width for speed control of motors. It varies from 0 to 255.
  analogWrite(enA, 255); //255 for full capacity, you can vary it for lower speeds.
  analogWrite(enB, 255);

  if (cm < bwdLimit && cm > 0) {
    moveBackward();
  } else if (cm > fwdLimit) {
    moveForward();
  } else {
    stop();
  }

  delay(100);
}

void moveForward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  Serial.println("Moving forward");
}

void moveBackward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  Serial.println("Moving backward");
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  Serial.println("Stop");
}
