#include "../lib/std_lib_facilities.h"


int main()
  {
    double d { 2.5 };
    int i { 2 };
    double d2 = d/i;
    int i2 = d/i;
    //int i3 { d/i };
    d2 = d/i;
    i2 = d/i;
    cout << d2 << ' ' <<  i2 << '\n';

    double dc { 2 };
    double df = 9.0/5*dc+32;
    cout << df << '\n';   

    //keep_window_open();
    return 0;

  }
