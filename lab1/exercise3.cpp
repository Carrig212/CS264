#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	cout << "Enter a five digit number " << endl;

	string x;
	cin >> x;

	for (int i = 0; i < x.length(); i++) {
		cout << x[i] << " ";
	}

	cout << endl;
}
