#include "Arduino.h"

extern "C" void app_main()
{
  initArduino();
  // Your main code here
  setup(); // You can call setup() and then loop()

#if true  // change to false if you want to loop the demo
    loop();
#else
  for(;;) {
    loop();
  }
#endif
}

