void diy() {
  int red;
  int green;
  int blue;

  int lim = 50;
  if (analogRead(redPot) < lim) {
    red = 0;
  } else {
    red = analogRead(redPot);
  }

  if (analogRead(greenPot) < lim) {
    green = 0;
  } else {
    green = analogRead(greenPot);
  }

  if (analogRead(bluePot) < lim) {
    blue = 0;
  } else {
    blue = analogRead(bluePot);
  }

  redPercentage = map(red, 0, potMax, 0, 100);
  greenPercentage = map(green, 0, potMax, 0, 100);
  bluePercentage = map(blue, 0, potMax, 0, 100);

  analogWrite(redPin, map(redPercentage, 0, 100, 0, 255));
  analogWrite(greenPin, map(greenPercentage, 0, 100, 0, 255));
  analogWrite(bluePin, map(bluePercentage, 0, 100, 0, 255));
}

void debug() {
  // middleText("1234567890");
  // middleText(String(analogRead(redPot) + "," + analogRead(greenPot) + analogRead(bluePot)));

  String string = String(analogRead(redPot));
  string.concat(" ");
  string.concat(analogRead(greenPot));
  string.concat(" ");
  string.concat(analogRead(bluePot));
  debugText(string);
}

void off() {
  middleText(F("Off"));

  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}