#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "The larger number is: " << max(a, b) << endl;

	return 0;
}