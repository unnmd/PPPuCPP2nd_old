#include "../lib/std_lib_facilities.h"

int main()
  {

    double num { 0 };
    double smallest { 0 };
    double biggest { 0  };

    while (cin >> num) 
    {
      cout << num;
      if(num < smallest)
      {
        smallest = num;
        cout << " (Наименьшее среди введены)\n";
      }
      if (num > biggest) 
      {
        biggest = num;
        cout << " (Наибольшее среди введеных)\n";
      }
      //cout << " Число равно: " << num << "\n";
  }
    //keep_window_open();
    return 0;

  }
