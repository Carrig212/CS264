//William Anderson 15494372

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	for (int i = 1; i <= 5000; i++) {
		bool prime = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				prime = false;
			}
		}

		if (prime) cout << i << " ";
	} 
}
