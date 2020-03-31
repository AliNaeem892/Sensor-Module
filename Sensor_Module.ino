int sensor_pin = A0; 
int output_value = 0;  
int led = 13;

void setup() {
 Serial.begin(9600);
 pinMode(sensor_pin, INPUT);
 pinMode(led, OUTPUT);
}

void loop() {

 output_value = analogRead(sensor_pin); 
 Serial.println("sensorValue");
 if ( output_value<35) { digitalWrite(led, LOW);}

 if ( output_value>70) { digitalWrite(led, HIGH);}
 
 delay(1000); 
}   
 
