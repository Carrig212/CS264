//William Anderson 15494372

#include <iostream>

using namespace std;

int main(){

	cout << "Enter two numbers:" << endl;
	
	int a, b;
	cin >> a >> b;

	if (a % b == 0) {
		cout << a << " is a multiple of " << b << endl;
	}

	else {
		cout << a << " is not a multiple of " << b << endl;
	}
}
