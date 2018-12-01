#define BTN_PIN 3
#define LED_PIN 2


#define SHUTTER_PIN 6
#define FOCUS_PIN 5


void setup() {
  // put your setup code here, to run once:
pinMode(BTN_PIN, INPUT_PULLUP);
pinMode(LED_PIN,OUTPUT);
digitalWrite(LED_PIN, HIGH);
delay(100);
digitalWrite(LED_PIN, LOW);
pinMode(FOCUS_PIN,OUTPUT);
digitalWrite(FOCUS_PIN, LOW);

pinMode(SHUTTER_PIN,OUTPUT);
digitalWrite(SHUTTER_PIN, LOW);


digitalWrite(LED_PIN, HIGH);
}



void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(BTN_PIN) == LOW){
  delay(50);
  while(digitalRead(BTN_PIN) == LOW){delay(10);}

volatile int _ts = 300;
  for(int i = 0;i< 20;i++){
digitalWrite(LED_PIN, HIGH);
delay(_ts);
digitalWrite(LED_PIN, LOW);
delay(_ts);
if(i == 7){_ts = 200;}
if(i == 14){_ts = 75;}
   }

digitalWrite(FOCUS_PIN, HIGH);
delay(700);
digitalWrite(SHUTTER_PIN, HIGH);

delay(700);
  digitalWrite(FOCUS_PIN, LOW);
  digitalWrite(SHUTTER_PIN, LOW);
  digitalWrite(LED_PIN, HIGH);
  }
}
