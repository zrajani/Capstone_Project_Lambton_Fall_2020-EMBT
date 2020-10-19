void setup() {
  pinMode(8,INPUT);   //Set the pin mode
  pinMode(7,OUTPUT);
  Serial.begin(9600); //initialise serial monitor

}

void loop() {
  int temp=digitalRead(8);      //assign value of LDR sensor to a temporary variable
  Serial.println("Intensity="); //print on serial monitor using ""
  Serial.println(temp);         //display output on serial monitor
  delay(200);                   //Stop the program for 200 ms = 0.2 seconds
  if(temp==HIGH)               //HIGH means,light got blocked
  digitalWrite(7,HIGH);        //if light is not present,LED on
  else
  digitalWrite(7,LOW);         //if light is present,LED off
}
