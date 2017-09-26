#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	cout << "Enter three numbers:" << endl;
	
	int a, b, c;
	cin >> a >> b >> c;

	cout << "Sum = " << (a + b + c) << endl;
	cout << "Average = " << ((a + b + c) / 3) << endl;
	cout << "Product = " << (a * b * c) << endl;
	cout << "Min = " << min(min(a, b), c) << endl;
	cout << "Max = " << max(max(a, b), c) << endl;
}
