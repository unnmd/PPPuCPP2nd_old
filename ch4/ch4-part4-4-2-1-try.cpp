#include "../lib/std_lib_facilities.h"


int main()
  {
    char c { 'a' };
    cout << "Таблица символов: \n"; 
    while (c<='z') {
      cout << c << '\t' << int(c) <<  '\n'; 
      ++c;
    }


    //keep_window_open();
    return 0;

  }
 
