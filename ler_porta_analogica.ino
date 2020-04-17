const int potenciometro = 0; // pino de entrada do potenciômetro
float valAnalog = 0;
float temp = 0;
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
    valAnalog = analogRead(potenciometro);
    temp = (valAnalog * 500) / 1023;
    Serial.println(temp);
    delay(100);
}
