#include<iostream>
int main()
{
  constexpr double cm_per_inch = 2.54;
  double length = 1;
  char unit = ' ';
  std::cout << "Please enter length followed by unit \n";
  std::cin >> length >> unit;
  
  switch(unit)
  {
    case('i'):
      std::cout << "in ==" << cm_per_inch*length <<"cm\n";
      break;
    case('c'):
      std::cout << "cm =" << length/cm_per_inch << "in \n";
      break;
  }
}
