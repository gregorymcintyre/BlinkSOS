void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //intialise the built in LED
}

void loop() {
  //S
  for (int i = 0 ; i < 3 ; i++){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(250);                        // wait for half a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for a second
  }

 //O
 for (int i = 0 ; i < 3 ; i++){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(250);                        // wait for half a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1500);                       // wait for a second
  }


 //S
 for (int i = 0 ; i < 3 ; i++){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);                        // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
 }
  delay(2000);                      //cosmetic Delay
}
