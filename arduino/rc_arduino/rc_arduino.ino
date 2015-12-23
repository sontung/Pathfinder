String command = "";
boolean minus = false;
int PWM_array[2] = {0, 0}; 
int index = 0;

void setup() {
  // bluetooth setup
  Serial.begin(9600);
  
  // motor channels setup
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  read_command();
  go();
  delay(100);
  PWM_array[0] = 0;
  PWM_array[1] = 0;
}

void read_command() {
  while (Serial.available() > 0) {
    int c = Serial.read();
    if (isDigit(c)) {
      command += (char)c;
    } else if (c == ' ') {
      if (minus) {
        PWM_array[index] = command.toInt()*-1;
      } else {
        PWM_array[index] = command.toInt();
      }
      index += 1;
      minus = false;
      command = "";
      Serial.println(PWM_array[0]);
      Serial.println(PWM_array[1]);
    } else if (c == '-') {
      minus = true;
    }
  }
  index = 0;
}

void go() {
  // Motor channel A
  int val1 = PWM_array[0];
  if (val1 > 0) {
    digitalWrite(12, HIGH); // forward direction
  } else if (val1 == 0) { 
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(12, LOW); // backward direction
  }
  digitalWrite(9, LOW);  // disengage brake
  analogWrite(3, val1);  // speed
  
  // Motor channel B
  int val2 = PWM_array[1];
  if (val2 > 0) {
    digitalWrite(13, HIGH); // forward direction
  } else if (val1 == 0) { 
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(13, LOW); // backward direction
  }
  digitalWrite(8, LOW);  // disengage brake
  analogWrite(11, val2);  // speed  
}

void brake() {
  digitalWrite(9, HIGH);  // engage brake of channel A
  digitalWrite(8, HIGH);  // engage brake of channel B
}
