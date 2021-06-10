int soilSen = A0;  
int moist ;  
int pump = 8;       
int trigger = 10;   

void setup() {
  Serial.begin(9600);
  pinMode(soilSen, INPUT);    
  pinMode(pump, OUTPUT);    
 
  delay(1000);  
  }

void loop() {

  moist = analogRead(soilSen);     
  moist = map(moist,450,0,0,100);  
 
  Serial.print(moist);   
 
  delay(1000);  
  if (moist < trigger)  
    {
    digitalWrite(pump, HIGH);
 
    delay(3000);  
    digitalWrite(pump, LOW);
 
    delay(2000);  
    }
    else
    {
    digitalWrite(pump, LOW);
 
    delay(2000); 
    }
}
    
