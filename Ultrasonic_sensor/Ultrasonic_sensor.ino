
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    
    char data = Serial.read();

    if(){
      digitalWrite(7,HIGH);
      delay(2000);
      digitalWrite(7,LOW);
    }    
  }
}
