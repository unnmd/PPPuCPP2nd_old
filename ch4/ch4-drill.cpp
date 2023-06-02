#include "../lib/std_lib_facilities.h"
#include <iostream>

int main()
  {
    constexpr double cm = 0.01;
    constexpr double m = 1;
    constexpr double in = 2.54;
    constexpr double ft = 12;
    constexpr double coeff = 0.3048;
    double num { 0 };
    double num_conv { 0 };
    double smallest { 0 };
    double biggest { 0  };
    double sum { 0 };
    string unit { " " };
    bool is_valid = true;
    cout << "Введите длини и еденицу измерения (m, in, ft или cm): ";

    while (cin >> num >> unit) 
    {       
      if(unit=="cm"){
        num_conv = num*cm;
        sum += num_conv;
      }
      else if(unit=="m"){
        num_conv = num*m;
        sum += num_conv;
      }
      else if(unit=="in"){
        num_conv = num*cm*in;
        sum += num_conv;
      }
      else if(unit=="ft"){
        num_conv = (num*(cm*in))*ft;
        sum += num_conv;
      }
      else {
        is_valid = false;
      }
  
      if(is_valid){
        cout << "ok" << '\n';
        cout << sum << " сумма введеных чисел\n";
      }
      else {
        cout << "not ok" << '\n';
        break;
      }

      cout << num_conv << " Метра \n";
        
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
