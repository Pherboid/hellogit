#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Written By Ehzial Kirton

int main() {
  vector <char> charVect;
  vector <int> intVect;
  unsigned int i = 0;
  string st1 = "Hi";
  string st2 = "";
  st2 = st1 + " world";

  cout << st2 << endl;
  cout << "String 2 has " << st2.size() << " characters \n";
  cout << "The 5th character of String 2 is " << st2[4] << "\n";

  cout << "Characters of String 1 \n";
  for (char s: st1){
    cout << s << endl;
  }

  if (st1 == "Hi"){
    cout << "Hi is there" << endl;
  }

  charVect.push_back('a');
  charVect.push_back('b');
  charVect.push_back('c');

  while (i <= 100){
    intVect.push_back(i);
    ++i;
  }

  intVect.pop_back();

  for (i = 0; i < charVect.size(); i++){
    cout << charVect[i] << "\n";
    //Should output abc
  }

  for (auto o: intVect){
    cout << o << "\n";
    //Should output 0-99
  }

  return 0;
}
