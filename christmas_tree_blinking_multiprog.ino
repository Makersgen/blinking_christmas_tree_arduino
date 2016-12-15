void setup() {
  // put your setup code here, to run once:

  pinMode(31, OUTPUT);
  digitalWrite(31, HIGH);
  
  for(int i=32; i<38; i++)
   {
    pinMode(i, OUTPUT);
   }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(31, LOW);

for (int a=1; a<4; a++)
  {
  for(int i=32; i<38; i++)
   {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
   }
  }

for (int b=1; b<4; b++)
  {
  for(int i=38; i>31; i--)
   {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
   }
  }

 
   
}
