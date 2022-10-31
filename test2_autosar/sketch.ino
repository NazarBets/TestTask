void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  if (!Serial) Serial.println("serial is not ok");
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A1);
  int a;
  Serial.print("Potentiometer value: ");
  Serial.println(value);
  if (value >0 && value <= 50 ) a=random(100,500);
  if (value >51 && value <= 100 ) a=random(501,1000);
  if (value >101 && value <= 150 ) a=random(1001,1500);
  if (value >151 && value <= 200 ) a=random(1501,2000);
  if (value >201 && value <= 250 ) a=random(2001,2500);
  if (value >251 && value <= 300 ) a=random(2501,3000);
  if (value >301 && value <= 350 ) a=random(3001,3500);
  if (value >351 && value <= 400 ) a=random(3501,4000);
  if (value >401 && value <= 450 ) a=random(4001,4500);
  if (value >451 && value <= 500 ) a=random(4501,5000);
  if (value >501 && value <= 550 ) a=random(5001,5500);
  if (value >551 && value <= 600 ) a=random(5501,6000);
  if (value >601 && value <= 650 ) a=random(6001,6500);
  if (value >651 && value <= 700 ) a=random(6501,7000);
  if (value >701 && value <= 750 ) a=random(7001,7500);
  if (value >751 && value <= 800 ) a=random(7501,8000);
  if (value >801 && value <= 850 ) a=random(8001,8500);
  if (value >851 && value <= 900 ) a=random(8501,9000);
  if (value >901 && value <= 950 ) a=random(9001,9500);
  if (value >951 && value <= 1100 ) a=random(9501,10000);
  Serial.print("Period: ");
  Serial.print(a);
  Serial.println(" ms");
  digitalWrite(6, HIGH);
  delay(a);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(a);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(a);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(a);
  digitalWrite(3, LOW);
  
}
