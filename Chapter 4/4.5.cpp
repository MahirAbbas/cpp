#include<iostream>
int square(int x) 
{
 int y = x; 
 for (int i = 1; i < x; ++i){
   y+=x;
 }
 return y;
}


int main()
{
  std::cout <<  square(5) << "\n";
}

