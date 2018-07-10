void setup() {
  pinMode(LED_BUILTIN, OUTPUT);       //Intialise the built in LED
}

void loop() {
  
    signal('s');
    signal('o');
    signal('s');
    
    delay(2000);                      //Cosmetic Delay
}

  void signal(char c){
    switch (c){
      case 's':
          for (int i = 0 ; i < 3 ; i++){
            digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
            delay(250);                         // wait for 1/4 a second
            digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
            delay(500);                         // wait for 1/2 second
          }
      break;
      case 'o':
        for (int i = 0 ; i < 3 ; i++){
          digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(250);                        // wait for 1/4 second
          digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
          delay(1500);                       // wait for a 3/2 second
        }
      break;
     }
     delay(1000);                        //Character Pause
  } 
