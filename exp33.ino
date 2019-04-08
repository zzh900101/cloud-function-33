

int led = D6;
int photosensor = A0;

int intactValue;
int brokenValue;
int beamThreshold;

bool beamBroken = false;

void myHandler(const char *event, const char *data); 


void setup() {

    pinMode(led,OUTPUT); 
    pinMode(photosensor,INPUT);

    Particle.subscribe("zzh", myHandler);


}


void loop() {
    if (analogRead(photosensor) > 10) 
    {
        
        Particle.publish("zzh");

    }

    else {

    }
}


void myHandler(const char *event, const char *data)
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