//William Anderson 15494372

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	cout << "Enter account details: " << endl;

	int account = 0, balance, totalCharge, totalCredit, credit;
	
	while (account != -1) {
		cout << "Enter account, balance, charges, credits, and credit limit:" << endl;
		cin >> account;
		if (account == -1) continue;
		
		cin >> balance >> totalCharge >> totalCredit >> credit;

		if ((balance + totalCharge - totalCredit) > credit) {
			cout << "Account Number: " << account << endl;
			cout << "Credit Limit: " << credit << endl;
			cout << "New Balance: " << (balance + totalCharge - totalCredit) << endl;
			cout << "Credit Limit Exceeded.\n**** NEXT CUSTOMER ****\n";
		}

		else {
			cout << "\n**** NEXT CUSTOMER ****\n";
		}
	}
	

}
