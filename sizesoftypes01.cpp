#include <iostream>
#include <cstdint>
#include <limits>

int main() {
  std::cout << "The largest possible int value is: "
            << std::numeric_limits<int>::max() << '\n';
  std::cout << "The largest possible long long value is: "
            << std::numeric_limits<long>::max() << '\n';
  std::cout << "The largest possible long long value is: "
            << std::numeric_limits<long long>::max() << '\n';
  std::cout << "The largest possible long long value is: "
            << std::numeric_limits<short>::max() << '\n';
  std::cout << "The largest possible int value is: "
            << std::numeric_limits<double>::max() << '\n';
  std::cout << "The largest possible long long value is: "
            << std::numeric_limits<long double>::max() << '\n';
  std::cout << "The largest possible int value is: "
            << std::numeric_limits<float>::max() << '\n';
  return 0;
}