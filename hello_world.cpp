#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
inline void keep_window_open() {char ch; cin>>ch; }

int main() {

  cout << "Enter your name: \n";
  string first_name;
  cin >> first_name;
  cout << "Hello " << first_name << "!\n";
  cout << "Enter the name of the person you want to write to\n";
  string correspondant;
  cin >> correspondant;

  string friend_name;
  cout << "friend_name:";
  cin >> friend_name;

  char friend_sex;
  cout << "sex";
  cin >> friend_sex;

  int friend_age;
  cout << "age";
  cin >> friend_age;

  cout << "Dear " << correspondant << ", \n";
  cout << " How are you? ";
  
  if (friend_sex == 'm') {
    cout << "If you see" << friend_name << "tell him I said hi\n";
  } 
  else {
    cout << "If you see" << friend_name << "tell her I said hi\n";

  }
  return 0;

}
