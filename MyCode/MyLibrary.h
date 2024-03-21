#ifndef t1
#define t1

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class MyLib{
  public:
    // Constructor
    MyLib(bool displayMsg);
    
    // Method
    long getRandomNumber();

    void begin(int baudRate = 9600);

  private:
    bool _msg;
    float getPi();
};

#endif