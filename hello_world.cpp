#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << "Enter name:\n";
  std::string name;
  std::cin >> name; // enter user's name
  std::cout << "Hello, world, from " << name << "." << std::endl;
  return 0;
}
