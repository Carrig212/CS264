//William Anderson 15494372

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int a, b, c;


	cout << "Enter two numbers:" << endl;
	cin >> a >> b;

	c = gcd(a, b);
	cout << "The greatest common divisor of " << a << " and " << b << " is " << c << endl;

	return 0;
}