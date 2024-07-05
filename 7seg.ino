int ledPin = 9;      // LED connected to digital pin 9

int threePin = 3;
int fivePin = 5;
int sixPin = 6;
int ninePin = 9;
int tenPin = 10;
int elevenPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  pinMode(threePin, OUTPUT);
  pinMode(fivePin, OUTPUT);
  pinMode(sixPin, OUTPUT);
  pinMode(ninePin, OUTPUT);
  pinMode(tenPin, OUTPUT);
  pinMode(elevenPin, OUTPUT);
  pinMode(A0, OUTPUT);
}

void loop() {

  // analogWrite values from go 0 to 255
  
  for(int i=10; i>-1; i--){
    delay(1000);
    if(i == 0){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 100);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, LOW);
    }else if(i == 1){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 0);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 0);
      analogWrite(elevenPin, 0);
      digitalWrite(A0, LOW);
    }else if(i == 2){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 0);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 100);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 0);
      digitalWrite(A0, HIGH);
    }else if(i == 3){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 0);
      digitalWrite(A0, HIGH);
    }else if(i == 4){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 0);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 0);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, HIGH);
    }else if(i == 5){
      analogWrite(threePin, 0);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, HIGH);
    }else if(i == 6){
      analogWrite(threePin, 0);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 100);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, HIGH);
    }else if(i == 7){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 0);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 0);
      digitalWrite(A0, LOW);
    }else if(i == 8){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 100);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, HIGH);
    }else if(i == 9){
      analogWrite(threePin, 100);
      analogWrite(fivePin, 100);
      analogWrite(sixPin, 100);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 100);
      analogWrite(elevenPin, 100);
      digitalWrite(A0, HIGH);
    }else{
      analogWrite(threePin, 0);
      analogWrite(fivePin, 0);
      analogWrite(sixPin, 0);
      analogWrite(ninePin, 0);
      analogWrite(tenPin, 0);
      analogWrite(elevenPin, 0);
      digitalWrite(A0, LOW);
    }
  }
}
