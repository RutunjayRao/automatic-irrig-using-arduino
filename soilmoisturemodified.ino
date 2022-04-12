int sensor=A0;
int s1;
void setup() {

Serial.begin(9600);
pinMode(3,OUTPUT);
}

void loop() {
s1=analogRead(sensor);
s1=map(s1,500,0,0,100);
Serial.print("mositure");
Serial.println(s1);
delay(500);

if((-104>=s1) && (s1<=10));
{
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
}


}
