#include <iostream>
#include <string>

int main() {
  int a;

  std::cout << "Give me number i" << std::endl;

  std::cin >> a;

  std::string str_a = std::to_string(a);

  std::string reversedString = "";

  for (int i = str_a.length(); i >= 0; --i) {
    reversedString += str_a[i];
  }

  std::cout << "Reversed string is " << reversedString << std::endl;
}
