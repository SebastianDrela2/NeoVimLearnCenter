#include <iostream>
#include <string>

int main() {
  std::string text;

  std::cout << "Input some text split numbers by coma." << std::endl;

  std::getline(std::cin, text);
  int result = 0;
  int currentNumber = 0;

  for (char c : text) {
    if (c == ',') {
      result += currentNumber;
      currentNumber = 0;
    } else {
      currentNumber = currentNumber * 10 + (c - '0');
    }
  }

  result += currentNumber;

  std::cout << "Sum is " << result << std::endl;
}
