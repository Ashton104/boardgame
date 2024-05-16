
//Liniar magnetic hall sensor
  int buzzer = 8; // LED on arduino
  int digitalPin = 10; // linear Hall magnetic sensor digital interface
  int analogPin = A0; // linear Hall magnetic sensor analog interface
  int digitalVal ; // digital readings
  int analogVal; // analog readings

//LED
  long randNumber;
  const int btn = 7;
  const int red = 6;
  const int orn = 5;
  const int yel = 4;
  const int grn = 3;
  const int blu = 2;


void setup() {
 //Liniar magnetic hall sensor
  pinMode (buzzer, OUTPUT); 
  pinMode (digitalPin, INPUT); 
  //pinMode(analogPin, INPUT); 
  Serial.begin(9600);
 
 //LED
  pinMode(red, OUTPUT);
  pinMode(orn, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(grn, OUTPUT);
  pinMode(blu, OUTPUT);
  pinMode(btn, INPUT);
  //random number setup
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
 //Liniar magnetic hall sensor
 digitalVal = digitalRead(digitalPin) ; 
  if (digitalVal == HIGH) // When magnetic field is present, Arduino LED is on
  {
    tone(buzzer, 1000);
  }
  else
  {
    noTone(buzzer);
  }
  
  // Read the analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal); // print analog value

  delay(100);
    
 //LED
  if(digitalRead(btn) == HIGH){ 
    //random number
   randNumber = random(1, 6);
   Serial.println(randNumber);
   delay(200);
  }
  
  //random number to colour
  if(randNumber == 5){
   digitalWrite(red, HIGH);
  }

  if(randNumber == 4){
    digitalWrite(orn, HIGH);
  }
  
   if(randNumber == 3){
    digitalWrite(yel, HIGH);
  }
  
  if(randNumber == 2){
   digitalWrite(grn, HIGH);
  }

  if(randNumber == 1){
   digitalWrite(blu, HIGH);
  }

}
