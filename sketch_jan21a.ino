int Time ;
int distance;

void setup()
{
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);


}

void loop()
{
digitalWrite(2,HIGH);
delayMicroseconds(10);
digitalWrite(2,LOW);
delayMicroseconds(5);
digitalWrite(2,HIGH);
delayMicroseconds(10);

Time = pulseIn(3,HIGH);

distance= 0.0343*Time/2;
Serial.print("distane from sensor to object is =");
Serial.println(distance);
delay(5);


if(distance>1 && distance <=10 )
{

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
}

if(distance>10 && distance <=15)
{
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}


if(distance>15 && distance <=20)
{

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);

}

if(distance>20 && distance <=25)
{
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);


}
if(distance>25 && distance <=30)
{
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}

if(distance>30)
{
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);

}
}