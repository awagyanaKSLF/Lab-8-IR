
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
  volt = map(analogRead(SIGNAL_PIN),0,1023,0,5000);
  Serial.print((0.0001936428309 * a0 *volt + 0.06987226424 * volt - 14.32575223;));
  Serial.println(" cm");
  tone(BUZZER, 500);
  delay(200);
  noTone(BUZZER);
  delay(200);
}
