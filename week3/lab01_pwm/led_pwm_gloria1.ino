int LED_pin = 9; // must be one of 3, 5, 6, 9, 10 or 11 for PWM
void setup() {
pinMode(LED_pin, OUTPUT); // Initialize pin for output
}
void loop() {
int dtwait = 1000; // Pause interval, milliseconds
int V1=20, V2=220, V3=120; // 8-bit output values for PWM duty cycle
analogWrite(LED_pin, V1);
delay(dtwait);
analogWrite(LED_pin, V2);
delay(dtwait);
analogWrite(LED_pin, V3);
delay(dtwait);
}