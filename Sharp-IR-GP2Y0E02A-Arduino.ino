//!!! Le capteur fonctione en 3.3v !!!
int analogPin = A0;
int switchModePin = 2;
int reading;
float distance; //−0.1441x+68.3213


void setup(){
    Serial.begin(9600);
    pinMode(switchModePin, OUTPUT);
    Serial.println("Initialized");
    Serial.println("Wait...");
    delay(50); //Delai de démarrage du capteur avant de le mettre en mode mesure
    digitalWrite(0, HIGH); //Capteur en mode mesure
}

void  loop(){
    reading = analogRead(analogPin);
    distance = -0.1441 * reading +68.3213;
    Serial.println(distance);
    delay(40); //Limit number of value
}
