#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	
	if(a < b)
		cout << "First number is smaller" << endl;
	else
		cout << "Second number is smaller" << endl;

	return 0;
}