#include "std_lib_facilities.h"
//#include <cmath>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;

//inline void keep_window_open() 
  //{ 
    //char ch; 
    //cin>>ch; 
  //}

int main()
  {
    string previous = " ";
    
    string current;
    while (cin>>current) {
      if (previous == current) 
        
        cout << "Повторяющееся слово: " << current << '\n';
      previous = current;
     
    }
    //keep_window_open();
    return 0;

  }


