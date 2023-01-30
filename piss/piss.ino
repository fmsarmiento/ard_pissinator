int OUTPUTPIN = 2;
int TIMEPERSHOT = 2000;
int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUTPIN, OUTPUT);
  digitalWrite(OUTPUTPIN, LOW);
  Serial.begin(9600);
  Serial.setTimeout(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!Serial.available());
  x = Serial.readString().toInt();
  if (x == 1) {
    digitalWrite(OUTPUTPIN, HIGH);
  }
  if (x == 0) {
    digitalWrite(OUTPUTPIN, LOW);
  }
  Serial.print(x);
}
