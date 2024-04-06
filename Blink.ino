
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

//creating a function to blink dot in morse code
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

}

//creating a function to blink dash in morse code
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(800);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second


}

void loop()
{
  //morse code for the name "shehan" 
//S: "..."
//H: "...."
//E: "."
//H: "...."
//A: ".-"
//N: "-."

// letter "S"
dot();
dot();
dot();
delay(2000);

// letter "H"
dot();
dot();
dot();
dot();
delay(2000);

// letter "E"
dot();
delay(2000);

// letter "H"
dot();
dot();
dot();
dot();
delay(2000);

// letter "A"
dot();
dash();
delay (2000);

// letter "N"
dash();
dot();
delay(2000);


}
