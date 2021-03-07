#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string str;
  std::cout << "Your name:";
<<<<<<< HEAD
<<<<<<< HEAD
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
=======
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>
>>>>>>> changed comments
=======
<<<<<<< ours
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>
=======
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
>>>>>>> theirs
=======
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
>>>>>>> patch2
>>>>>>> 3903f826fca08b198218c218f962769cf465d2cc

  return 1;
}
