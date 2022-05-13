#include <Gamebuino-Meta.h>

void setup() {
  // put your setup code here, to run once:
  gb.begin();
}

void loop() {
  
  while(!gb.update());
  gb.display.clear();
  
  // draw environment
  gb.display.setColor(DARKBLUE);
  gb.display.fill();
  gb.display.setColor(GREEN);
  gb.display.fillRect(0,gb.display.height() - 10, gb.display.width(), gb.display.height());
  
}
