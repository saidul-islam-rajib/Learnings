#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int num){
	if(num <= 1){
		return num;
	}	
	return findFibonacci(num-1) + findFibonacci(num-2);
}

int main(){
	int num;
	cout << "Enter number : ";
	cin >> num;

	int result = findFibonacci(num);
	cout << "Fibonacci of " << num << " is : " << result << endl;
}