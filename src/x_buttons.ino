void startButtons() {
  button1.attachClick(button1Clicked);
  button1.setDebounceTicks(50);
  button1.attachLongPressStart(button1Held);
  button1.setPressTicks(250);

  button2.attachClick(button1Clicked);
  button2.setDebounceTicks(50);
  button2.attachLongPressStart(button1Held);
  button2.setPressTicks(250);
}

void button1Clicked() {
  if (mode < totalModes - 1) {
    mode++;
  } else {
    mode = 0;
  }
}

void button1Held() {
  mode = totalModes;
}

void button2Clicked() {
  Serial << "Button One Clicked" << endl;
}

void button2Held() {
  Serial << "Button One Held" << endl;
}