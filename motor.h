#define PINA 12
#define PINB 14
#define PINC 26
#define PIND 27
const int PWMCHA = 0;
const int PWMCHB = 1;
const int PWMCHC = 2;
const int PWMCHD = 3;
#define HIGH 200
#define LOW 55
void setup(){
   
 // Serial.begin(9600);
  pinMode(PINA, OUTPUT);
  ledcSetup(PWMCHA, 169000 ,8); //100kHz, 8bit(256段階)
  ledcAttachPin(PINA, PWMCHA);

  pinMode(PINB, OUTPUT);
  ledcSetup(PWMCHB, 169000 ,8); //100kHz, bit(16段階)
  ledcAttachPin(PINB, PWMCHB);

  pinMode(PINC, OUTPUT);
  ledcSetup(PWMCHC, 169000 ,8); //100kHz, bit(16段階)
  ledcAttachPin(PINC, PWMCHC);

  pinMode(PIND, OUTPUT);
  ledcSetup(PWMCHD, 169000 ,8); //100kHz, 8bit(16段階)
  ledcAttachPin(PIND, PWMCHD);
}
void stop(){
  ledcWrite(PWMCHA, 128);
  ledcWrite(PWMCHB, 120);
  ledcWrite(PWMCHC, 130);
  ledcWrite(PWMCHD, 118);
}
void foward(){
  ledcWrite(PWMCHA, LOW);
  ledcWrite(PWMCHB, HIGH);
  ledcWrite(PWMCHC, HIGH);
  ledcWrite(PWMCHD, LOW);
}
void back(){
  ledcWrite(PWMCHA, HIGH);
  ledcWrite(PWMCHB, LOW);
  ledcWrite(PWMCHC, LOW);
  ledcWrite(PWMCHD, HIGH);
}
void left(){
  ledcWrite(PWMCHA, LOW);
  ledcWrite(PWMCHB, LOW);
  ledcWrite(PWMCHC, HIGH);
  ledcWrite(PWMCHD, HIGH);
}
void right(){
  ledcWrite(PWMCHA, HIGH);
  ledcWrite(PWMCHB, HIGH);
  ledcWrite(PWMCHC, LOW);
  ledcWrite(PWMCHD, LOW);
}
void turnl(){
  ledcWrite(PWMCHA, HIGH);
  ledcWrite(PWMCHB, HIGH);
  ledcWrite(PWMCHC, HIGH);
  ledcWrite(PWMCHD, HIGH);
}
void turnr(){
  ledcWrite(PWMCHA, LOW);
  ledcWrite(PWMCHB, LOW);
  ledcWrite(PWMCHC, LOW);
  ledcWrite(PWMCHD, LOW);
}
void loop(){

stop();
delay(200);
foward();
delay(1000);



}