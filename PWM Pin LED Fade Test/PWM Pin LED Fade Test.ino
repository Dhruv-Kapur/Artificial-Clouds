//Initializing LED Pin
int led_pin1 = 9;
int led_pin2 = 10;
int led_pin3 = 11;
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
}
void loop() {
  //Fading the LED1
  for(int i=0; i<255; i++){
    analogWrite(led_pin1, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin1, i);
    delay(5);
  }

  //Fading the LED2
  for(int i=0; i<255; i++){
    analogWrite(led_pin2, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin2, i);
    delay(5);
  }

  //Fading the LED3
  for(int i=0; i<255; i++){
    analogWrite(led_pin3, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin3, i);
    delay(5);
  }
}