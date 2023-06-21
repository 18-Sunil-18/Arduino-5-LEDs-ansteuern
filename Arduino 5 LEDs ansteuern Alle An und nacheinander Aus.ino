int rot = 13,
    gelb = 11,
    gruen = 10,
    blau = 9,
    weiss = 6;


int pause = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
  pinMode(weiss, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rot, HIGH);
  digitalWrite(gelb, HIGH);
  digitalWrite(gruen, HIGH);
  digitalWrite(blau, HIGH);
  digitalWrite(weiss, HIGH);
  delay(pause);
  digitalWrite(rot, LOW);
  delay(pause);
  digitalWrite(gelb, LOW);
  delay(pause);
  digitalWrite(gruen, LOW);
  delay(pause);
  digitalWrite(blau, LOW);
  delay(pause);
  digitalWrite(weiss, LOW);
  delay(pause);
}

