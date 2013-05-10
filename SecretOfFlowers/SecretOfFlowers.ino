#define LED 13     //pin for the LED

#define FLOWER1 3   //input for  SWITCH
#define FLOWER2 4   //input for  SWITCH
#define FLOWER3 5   //input for  SWITCH
#define FLOWER4 6   //input for  SWITCH
#define FLOWER5 7  //input for  SWITCH


const int xPin = 9; // X output of the accelerometer
const int yPin = 10; // Y output of the accelerometer

void setup()
{
  Serial.begin(9600); // initialize serial communications

  pinMode(LED, OUTPUT);   //tell arduino LED is an output
  pinMode(FLOWER1, INPUT);   //SWITCH is input
  pinMode(FLOWER2, INPUT);   //SWITCH is input
  pinMode(FLOWER3, INPUT);   //SWITCH is input
  pinMode(FLOWER4, INPUT);   //SWITCH is input
  pinMode(FLOWER5, INPUT);   //SWITCH is input

  pinMode(xPin, INPUT); // initialize the pins connected to the accelerometer as inputs:
  pinMode(yPin, INPUT);

  digitalWrite(LED, LOW); 
}

void loop()
{

  //=====================================accelerationXY
  int pulseX, pulseY;
  // variables to contain the resulting accelerations
  int accelerationX, accelerationY;

  // read pulse from x- and y-axes:
  pulseX = pulseIn(xPin,HIGH);
  pulseY = pulseIn(yPin,HIGH);

  // convert the pulse width into acceleration
  // accelerationX and accelerationY are in milli-g's:
  // earth's grßavity is 300 milli-g's, or 1g.
  accelerationX = ((pulseX / 10) - 500) * 8;
  accelerationY = ((pulseY / 10) - 500) * 8;
  if(abs(accelerationX)<150){
    Serial.println("q");
  }
  else{

    //=====================================SecretOfFlowersSecretOfFlowers
    if(digitalRead(FLOWER1)==HIGH){
      Serial.print("A");
      delay(300);
    }
    //=============================== ======
    else if(digitalRead(FLOWER2)==HIGH){
      Serial.print("B");
      delay(300);
    }  
    //=====================================
   else if(digitalRead(FLOWER3)==HIGH){
//      Serial.print("C");
      delay(300);
    }

    //=====================================
   else if(digitalRead(FLOWER4)==HIGH){
      Serial.print("D");
      delay(300);
    }

    //=====================================
    else if(digitalRead(FLOWER5)==HIGH){
      Serial.print("E");
      delay(300);
    }


    //=====================================
    else{ 
      Serial.println("");

    }

  }

  delay(100);

}



