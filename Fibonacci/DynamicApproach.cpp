#include <bits/stdc++.h>
using namespace std;

int findFibonacci(int num){
	int f[num+2];
	f[0] = 0;
	f[1] = 1;

	for(int i{2}; i<=num; i++){
		f[i] = f[i-1] + f[i-2];
	}
	return f[num];
}

int main(){
	int num;
	cout << "Enter number : ";
	cin >> num;

	int result = findFibonacci(num);
	cout << "Fibonacci of " << num << " is : " << result << endl;
}