//Write a function that takes two initial numbers n1 and n2 and a counter c and returns 
//the c-th "fibonacci" number based on the two initial numbers

#include <iostream>
using namespace std;

class FIBONAC{
	
public:
int fib(int n, int n1, int n2)
{

	int f[n + 2];
	int i;

	f[0] = n1;
	f[1] = n2;

	for(i = 2; i <= n; i++)
	{
		
	f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
	}
};

int main ()
{
	FIBONAC g;
	int n, n1, n2;

    cout << "Enter up to which number: ";
    cin >> n;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

	cout << "The cth Fibonacci number based on your input is: " << g.fib(n, n1, n2);
	return 0;
}
