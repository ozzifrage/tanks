#include <Gamebuino-Meta.h>

void setup() {
  // put your setup code here, to run once:
  gb.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!gb.update());
  gb.display.clear();
  gb.display.print("hello again");
}
