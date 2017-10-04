#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void roll(int &d)
{
	d = (rand() % 6) + 1;
}

int main()
{
	srand(time(NULL));

	int d1, d2, n;
	double freq[] = {0,0,0,0,0,0,0,0,0,0,0};

	cout << "How many times would you like to roll the dice?" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		roll(d1);
		roll(d2);

		int sum = d1 + d2;
		freq[sum - 2]++;
	}


	for (int i = 0; i < 11; i++)
	{
		cout << (i + 2) << " = " << (freq[i] / n) * 100 << "%" << endl;
	}

	return 0;
}