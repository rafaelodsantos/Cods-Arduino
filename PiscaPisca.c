byte ledPin[] = {2,3,4,5,6,7,8,9,10,11};
int timer = 50;

void setup()
{
  int i;
  for (i=0; i<=9; i++){
    pinMode (ledPin[i], OUTPUT);
  }
}


void loop(){
  int i, j;
  for (i=0, j=9; i<=9, j>=0; i++, j--){
  	digitalWrite(ledPin[i], HIGH);
  	delay(timer);
    digitalWrite(ledPin[j], HIGH);
  	delay(timer);
  	digitalWrite(ledPin[i], LOW);
  	delay(timer);
    digitalWrite(ledPin[j], LOW);
  	delay(timer);
  }
  
  for (i=9, j=0; i>=0, j<=9; i--, j++){
  	digitalWrite(ledPin[i], HIGH);
  	delay(timer);
    digitalWrite(ledPin[j], HIGH);
  	delay(timer);
  	digitalWrite(ledPin[i], LOW);
  	delay(timer);
    digitalWrite(ledPin[j], LOW);
  	delay(timer);
  }
}
