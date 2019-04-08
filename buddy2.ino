int led = D7;

void blink(const char *event, const char *data)
{
    digitalWrite(led,HIGH);
    delay(300);
    digitalWrite(led,LOW);
    delay(200);
        digitalWrite(led,HIGH);
    delay(300);
    digitalWrite(led,LOW);
    delay(200);
        digitalWrite(led,HIGH);
    delay(300);
    digitalWrite(led,LOW);
    delay(200);
}


void setup() {

    pinMode(led,OUTPUT);
    
   Particle.subscribe("zzh", blink);

    
}

void loop() {


}