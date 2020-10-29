void Clutch(void) {
  //Clutch Slave
  int CSreleased = 340;
  int CSpulled = 292;
  int ClutchS = analogRead(A2);
  ClutchS = map(ClutchS, CSreleased, CSpulled, 0, 511);
  
  //Clutch Master
  int CMreleased = 556;
  int CMpulled = 605;
  int ClutchM = analogRead(A1);
  ClutchM = map(ClutchM, CMreleased, CMpulled, 0, 511);

  //Clutch All
  int ClutchAll = (ClutchM + ClutchS);
  Joystick.setZAxis(ClutchAll);
  //Serial.println(ClutchAll);

}
