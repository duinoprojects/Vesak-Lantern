 int delay_time=1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  blink_ligt(5); 
  blink_ligt(6); 
  blink_ligt(7); 
  blink_ligt(8); 
  blink_ligt(9);  
}

void blink_ligt(int light_pin){
  digitalWrite(light_pin, HIGH);         // turn the LED on (HIGH is the voltage level)
  delay(delay_time);                     // wait for a second
  digitalWrite(light_pin, LOW);          // turn the LED off by making the voltage LOW
  delay(delay_time);                     // wait for a second 
}
