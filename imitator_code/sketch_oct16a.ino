//IN1-3_1-зеленый справо
//IN2-2_зеленый слево
//IN3-4_зеленый вверх
//IN4-30_зеленый лево-низ
//IN5-12_зеленый право-низ

//IN6-6_красный вверх(БОРТ)
//IN7-8_красный слева(БОРТ)
//IN8-9_красный справо(БОРТ)
//IN9-10_красный(слева-низ) (БОРТ)
//IN10-11_красный(справо-низ) (БОРТ)

//but-7

int IN1 = 3;
int IN2 = 2;
int IN3 = 4;
int IN4 = 30;
int IN5 = 12;
int IN6 = 6;
int IN7 = 8;
int IN8 = 9;
int IN9 = 10;
int IN10 = 11;

int BUT = 7;
int val;
int button;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while (!Serial);

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(IN5, OUTPUT);
pinMode(IN6, OUTPUT);
pinMode(IN7, OUTPUT);
pinMode(IN8, OUTPUT);
pinMode(IN9, OUTPUT);
pinMode(IN10, OUTPUT);

pinMode(BUT, INPUT);
digitalWrite(IN4, LOW);   // turn the LED on (HIGH is the voltage level)
//Serial.println("START");
}

void loop() {

if (Serial.available()) {

val = Serial.read();
int button = digitalRead(BUT);
//Serial.println("WALK");
digitalWrite(IN4, LOW);   // turn the LED on (HIGH is the voltage level)
if (val == '1') 
{
digitalWrite(IN1, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN2, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN4, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN6, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN10, LOW);   // turn the LED on (HIGH is the voltage level)

} 

if (val == '2') 
{
digitalWrite(IN6, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, HIGH);   // turn the LED on (HIGH is the voltage level
digitalWrite(IN10, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN1, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN2, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN4, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, LOW);   // turn the LED on (HIGH is the voltage level)
} 

if (val == '3') 
{
digitalWrite(IN2, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN4, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN1, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN6, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN10, LOW);   // turn the LED on (HIGH is the voltage level)
} 

if (val == '4') 
{
digitalWrite(IN1, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN2, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN6, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN10, LOW);   // turn the LED on (HIGH is the voltage level)
} 

if (val == '5') 
{
digitalWrite(IN1, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN2, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN4, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN6, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN10, LOW);   // turn the LED on (HIGH is the voltage level)
} 

if (val == '6') 
{
digitalWrite(IN1, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN2, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, HIGH);   // turn the LED on (HIGH is the voltage level)

digitalWrite(IN3, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN4, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN6, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, LOW);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN10, LOW);   // turn the LED on (HIGH is the voltage level)
} 

if (val == '7')  
{
digitalWrite(IN1, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN2, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN3, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN4, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN5, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN6, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN7, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN8, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(IN9, HIGH);   // turn the LED on (HIGH is the voltage level
digitalWrite(IN10, HIGH);   // turn the LED on (HIGH is the voltage level)
}
}
 
}
