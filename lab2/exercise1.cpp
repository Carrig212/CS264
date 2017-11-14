//William Anderson 15494372

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;


	cout << "Enter two numbers:" << endl;
	cin >> a >> b;

	cout << "Your numbers are a: " << a << " and b: " << b << endl;
	swap(a, b);

	cout << "Your swapped numbers are a: " << a << " and b: " << b << endl;

	return 0;
}
