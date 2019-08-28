#define SIGNAL_PIN A0
#define BUZZER 6

void setup() {
  // put your setup code here, to run once:
  pinMode(SIGNAL_PIN, INPUT);
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
}

void loop() 
{
  int volt;
  volt = map(analogRead(A0),0,1023,0,5000);
  Serial.print((21.61/(volt-0.1696))*1000);
  Serial.println(" cm");
  tone(BUZZER,400);
  delay(200);
  noTone(BUZZER);
  delay(300);
}
