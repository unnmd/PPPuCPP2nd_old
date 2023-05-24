#include "../lib/std_lib_facilities.h"
#include <iostream>


int main()
  {
    vector<double> temps;
    for (double temp; cin>>temp;)
      temps.push_back(temp);

    //Вычисление средней температуры:
    double sum { 0 };
    for (int x : temps ) sum += x;
    cout << "Средняя температура: "
      << sum/temps.size() << "\n";

    //Вычисление медианы температуры
    sort(temps);
    cout << "Медиана температуры: " << temps[temps.size()/2] <<  '\n';
    
    //keep_window_open();
    return 0;

  }
 
