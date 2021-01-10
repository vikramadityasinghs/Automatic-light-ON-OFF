int LED = 13; // Use the onboard Uno LED
int analog_IN = A0;  // This is our input pin

void setup() //Setup for initializing pinmodes
{
  pinMode(LED, OUTPUT);
  pinMode(analog_IN, INPUT);
  Serial.begin(9600);  //initializing serialing monitor
}

void loop() {

  int Value = analogRead(analog_IN); //reading value of ldr sensor (0-1023) 
  Serial.print("Analog read: ");
  Serial.println(Value);  
  if(Value<=300){
    digitalWrite(LED,HIGH);
    }
   else{
   digitalWrite(LED,LOW);
   }
  delay(200);
}
