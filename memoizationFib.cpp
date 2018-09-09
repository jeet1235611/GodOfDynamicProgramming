#include <iostream>
using namespace std;

int fib_Memoization_Helper(int n, int *arr) {
	if(n <= 1) {
		return n;
	}
	if(arr[n] != -1) {
		return arr[n];
	}
	int a = fib_Memoization_Helper(n-1, arr);
	int b = fib_Memoization_Helper(n-2, arr);
	
	arr[n] = a + b;
	return arr[n];
}

int fib_Memoization(int n) {
	
	int *arr = new int[n+1];
	for(int i = 0; i <= n; i++) {
		arr[i] = -1;
	}
	return fib_Memoization_Helper(n, arr);
}
int main() {
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;

	int fib = fib_Memoization(n);
	cout << fib << endl;
	return 0;
}
