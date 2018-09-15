#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMinHelper(int n, int *arr) {
/*	if(n <= 1) {
		return 0;
	}*/

	//arr[0] = 0; //Trivial case.
	arr[0] = 0;
	arr[1] = 0;
        arr[2] = 1;
	arr[3] = 1;	
	for(int i = 4; i <= n; i++) {
	arr[i] = 1 + arr[i-1];
	if(i % 2 == 0) {
		arr[i] = min(arr[i], 1 + arr[i/2]); //1 + isliye kiya qki ek calculation hamne bhi toh ki h.
	}
	if(i % 3 == 0) {
		arr[i] = min(arr[i], 1 + arr[i/3]);
	}
	//return arr[n];
	}
	return arr[n];
}

int getMin(int n) {
	//if(n <= 1)
	//	return 0;
	int *arr = new int[n+1];
	//Initialise the array with -1
	for(int i = 0; i <= n; i++) {
		arr[i] = -1;
	}
	return getMinHelper(n, arr);
}

int main() {
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	int ans =  getMin(n);
	cout << "The minimum value for this is " << ans << endl;
	return 0;
}
