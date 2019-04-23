int moisture;
const int sensor = A0;

//Dry [520 - 430]
//Wet [430 - 350]
//Water [350 - 260]

void setup() {
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  moisture = analogRead(sensor);
  Serial.println(moisture);
  
}
