#include "../lib/std_lib_facilities.h"

int main()
  {
    constexpr double m = 100;
    constexpr double in = 2.54;
    constexpr double ft = 12;
    double num { 0 };
    double smallest { 0 };
    double biggest { 0  };

    cout << "Введите длини и еденицу измерения (m, i, f или cm)"


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
