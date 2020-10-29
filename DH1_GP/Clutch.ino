  //Modify the value if you want to finetune your clutches. 100 means you use only the left clutch.
  int ClutchLeftPercentage = 50;

  //Left clutch
  int ClutchLeftReleased = 340;
  int ClutchLeftPulled = 292;

  //Right clutch
  int ClutchRightReleased = 556;
  int ClutchRightPulled = 605;

  //Do not modify this!!!
  int ClutchRightPercentage = 100-ClutchLeftPercentage;
  int ClutchLeftValue = (1023/100)*ClutchLeftPercentage;
  int ClutchRightValue = (1023/100)*ClutchRightPercentage;  

void Clutch(void) {
  //Left clutch
  int ClutchLeft = analogRead(A0);
  ClutchLeft = map(ClutchLeft, ClutchLeftReleased, ClutchLeftPulled, 0, ClutchLeftValue);
  
  //Right clutch
  int ClutchRight = analogRead(A1);
  ClutchRight = map(ClutchRight, ClutchRightReleased, ClutchRightPulled, 0, ClutchRightValue);

  //Combined clutch
  int ClutchAll = (ClutchLeft + ClutchRight);
  Joystick.setZAxis(ClutchAll);

  //Uncomment below to debug.
  //Serial.println(ClutchAll);

}
