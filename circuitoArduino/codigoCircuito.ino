int ENA = 10;
int IN1 = 9;
int IN2 = 8;

void setup() {
 pinMode (ENA, OUTPUT);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
  
}
void loop() {
  // Adelante();

  digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 100);
}

void Adelante (){
 //Dirección motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, HIGH);
 //analogWrite (ENA, 100); //Velocidad motor A
 delay(1000);
}