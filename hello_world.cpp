#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  string str;
  cout << "Your name:";
  getline(cin, str);
  cout<< "Hello world "<< str <<endl;

  return 1;
}
