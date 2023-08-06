int led=8;
int sensor=2;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int durum=digitalRead(sensor);
if(durum==HIGH){
  digitalWrite(led,HIGH);
}else{
  digitalWrite(led,LOW);
}
delay(100);
}

