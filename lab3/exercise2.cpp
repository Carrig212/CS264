#include <iostream>
#include <cstring>

using namespace std;

int main() {

	double *ar = new double[10];
	int n, i = 0;

	cout << "Input a sequence of doubles. To quit, input -1" << endl;

	while (true) {
		cin >> n;

		if (n == -1) {
			break;
		}

		int size = sizeof(ar)/sizeof(ar[0]);

		if (i < size) {
			ar[i] = n;
			i++;
		} else {
			double temp[size + 10];
			memcpy(temp, ar, size);
			ar = temp;
		}
	}

	if (i != 0) {
		for (int j = sizeof(ar)/sizeof(ar[0]) - 1; j >= 0; j--) {
			cout << ar[j] << " ";
		}

		cout << endl;
	}

	return 0;
}
