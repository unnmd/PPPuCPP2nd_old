#include "../lib/std_lib_facilities.h"


int main()
  {
    int val1 { 0 }, val2 { 0 };
    while (cin >> val1 >> val2)
      //cout << val1 << '\t' << val2 << '\n';
      if (val1 > val2){
        cout << "Наибольшее значение равно: " << val1 << '\n';
        cout << "Наименьшее значение равно: " << val2 << '\n';
      }
      else if (val2 > val1){
        cout << "Наибольшее значение равно: " << val2 << '\n';
        cout << "Наименьшее значение равно: " << val1 << '\n';
      }
      else
      {
        cout << "Числа равны!" << '\n';
      }

        


    //keep_window_open();
    return 0;

  }