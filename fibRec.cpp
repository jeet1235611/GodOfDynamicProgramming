#include <iostream>
using namespace std;

int fib(int n) {

//Base case.
	if(n == 0)
		return 0;
	

	if(n == 1)
		return 1;
	

//Recursive Case.	
	//int first = fib(n-1);
	//int second = fib(n-2);
	//cout << first + second << endl;

	//cout << fib(n-1) + fib(n-2) << endl;

	//cout << fib(n) << endl;
	
	int smallOutput = fib(n-1) + fib(n-2);

	return smallOutput;
}

int main() {
	int n;
	cout << "Enter the nth fibonacci number to be found out " << endl;
	cin >> n;

	cout << fib(n);
}
