#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int num){
	int first = 0, second = 1, temp = 0;
	if(num == 0){
		return first;
	}

	for(int i{2}; i<=num; i++){
		temp = first + second;
		first = second;
		second = temp;
	}
	return second;
}

int main(){
	int num;
	cout << "Enter number : ";
	cin >> num;

	int result = findFibonacci(num);
	cout << "Fibonacci of " << num << " is : " << result << endl;
}