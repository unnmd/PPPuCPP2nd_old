#include "../lib/std_lib_facilities.h"
#include <iostream>


int main()
  {
    int val1, val2;
    cout << "Введите значение номер 1:\n";
    cin >> val1;

    cout << "Введите значение номер 2:\n";
    cin >> val2;

    if (val1 >> val2)
        cout << "Значение 1 больше значения 2\n";
    else 
        cout << "Значение 2 больше значения 1\n"; 

    cout << val1 << "+" <<  val2 << "=" << val1 + val2 << '\n';
    cout << val1 << "/" <<  val2 << "=" << val1 / val2 << '\n';
    cout << val1 << "*" <<  val2 << "=" << val1 * val2 << '\n';
    cout << val1 << "-" <<  val2 << "=" << val1 - val2 << '\n';
    //keep_window_open();
    return 0;

  }
