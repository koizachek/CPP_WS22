#include <iostream>
using namespace std;

template <typename T>
T fibonacci(T n1, T n2, size_t c) {
    if (c == 0) return n1;
    if (c == 1) return n2;
    T current = n1 + n2;
    
    for (size_t i = 2; i < c; ++i) {
        current = n1 + n2;
        n1 = n2;
        n2 = current;
        
        }
    return current;
}

int main() {
    int n1, n2;
    size_t c;

    cout << "Enter the first initial number: ";
    cin >> n1;
    cout << "Enter the second initial number: ";
    cin >> n2;
    cout << "Enter the counter: ";
    cin >> c;
    cout << "The " << c << "-th fibonacci number is: " << fibonacci(n1, n2, c) << endl;
    return 0;
}