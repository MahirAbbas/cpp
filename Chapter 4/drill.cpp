#include "../std_lib_facilities.h"

int main(){

  double y;
  double x;
  while(true){
    cout << "y:";
    cin >> y;
    cout << "x:";
    cin >> x;
//  
//  cout << "y: " << y << " x:" << x << "\n";
    if (x == y) {
      cout << "The numbers are equal\n";
    } 
    else {
    cout << "The smallest value is: " << min(x,y) <<"\n";
    cout << "The largest value is: " << max(x,y) <<"\n";
    }
    if (abs(x-y)<(1.0/100)) {
      cout << "The numbers are almost equal\n";
    }
//    cout << (1/100); 
  }
  // the rest of the drills / excercises are easy so i skipped them

}
