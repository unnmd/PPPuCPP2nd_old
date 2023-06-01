#include "../lib/std_lib_facilities.h"


int main()
  {
    char C { 'A' };
    cout << "Таблица символов: \n"; 
    for (char c='a'; c<='z'; ++c ){
      cout << C << '\t' << int(C) << '\t' 
      << c << '\t' << int(c) <<  "\n"; 
       ++C;
    }
    cout << '\n';
    for (char c='1';c<='9'; ++c)
      cout << c << '\t' << int(c) <<  '\n'; 
    //keep_window_open();
    return 0;

  }
 
