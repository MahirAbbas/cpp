#include"../std_lib_facilities.h"
void dictionary(){
  
  string disliked ="Broccoli";

  vector<string> words;
  for (string temp; cin>>temp;)
    words.push_back(temp);
  cout << "number of words: " << words.size() << "\n";
  
  sort(words);

  for(int i = 0; i < words.size(); ++i)
    if (i==0 || words[i-1]!=words[i]) 
      if (words[i]!= disliked)
        cout << words[i] <<"\n";
}

int main(){

 // vector<double> temps;
 // for (double temp; cin>>temp;)
 //   temps.push_back(temp);
 //
 dictionary();
}
