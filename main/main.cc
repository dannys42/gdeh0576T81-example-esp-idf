#include "Arduino.h"

extern "C" void app_main()
{
  initArduino();
  // Your main code here
  setup(); // You can call setup() and then loop()
  for(;;) {
    loop();
  }
}

