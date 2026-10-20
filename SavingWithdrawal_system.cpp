/*
NAME: Aron Kipkoech Langat
REG No: CT101/G/26629/25
GROUP B: BSc Computer Science
*/
#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    double withdrawalAmount = 0;

    cout << "Enter the initial account balance: " << endl;
    cin >> balance;

    while (balance > 0) {
        cout << "\nCurrent Balance: Ksh " << balance << endl;
        cout << "Enter the amount you want to withdraw: " << endl;
        cin >> withdrawalAmount;

        if (withdrawalAmount <= 0) {
            cout << "Please enter a valid withdrawal amount." << endl;
            continue;
        }

        if (withdrawalAmount > balance) {
            cout << "Transaction failed: Insufficient funds." << endl;
            break;
        }

        balance -= withdrawalAmount;

        cout << "Withdrawal successful. Remaining balance is: Ksh "
             << balance << endl;

        if (balance == 0) {
            cout << "Your account balance has reached zero." << endl;
            break;
        }
    }

    return 0;
}
