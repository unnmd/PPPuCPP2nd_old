#include "../lib/std_lib_facilities.h"

void square(int v)
  {
    int s { 0 };
    for (int i = 0; i < v; ++i){
    s += v;
    }
    cout << s <<'\n'; 
  }

int main()
  {
    int x { 0 };
    cout << "Введите число: ";
    cin >> x;
    square(x);
  
    //keep_window_open();
    return 0;

  }
 
