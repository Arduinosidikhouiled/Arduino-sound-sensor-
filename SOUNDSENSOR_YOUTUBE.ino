int soundSensor = 3;
int led = 4;
String state = "open";
int buzzer = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(soundSensor,INPUT);
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int sutSensor = digitalRead(soundSensor);
 if(sutSensor == 1){
 if(state == "open"){
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  state = "close";}
 else if(state == "close"){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100); 
  state = "open";}
delay(2000);  
}}
