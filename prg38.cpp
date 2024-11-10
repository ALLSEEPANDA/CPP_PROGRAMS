#include <iostream>
#include <iomanip>

using namespace std;

class CAccount {
private:
    int accountNumber;   
    float accountBalance;  

public:
    CAccount(int accNum, float accBal) : accountNumber(accNum), accountBalance(accBal) {}

    CAccount() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial account balance: $";
        cin >> accountBalance;
    }

    void inputTransaction() {
        char transactionType;
        float transactionAmount;

        cout << "Enter transaction type (D for deposit, W for withdrawal): ";
        cin >> transactionType;

        cout << "Enter transaction amount: $";
        cin >> transactionAmount;

        if (transactionType == 'D' || transactionType == 'd') {
            accountBalance += transactionAmount; 
            cout << "Deposited: $" << fixed << setprecision(2) << transactionAmount << endl;
        } else if (transactionType == 'W' || transactionType == 'w') {
            if (transactionAmount > accountBalance) {
                cout << "Insufficient funds for withdrawal." << endl;
            } else {
                accountBalance -= transactionAmount; 
                cout << "Withdrew: $" << fixed << setprecision(2) << transactionAmount << endl;
            }
        } else {
            cout << "Invalid transaction type." << endl;
        }
    }

    void printBalance() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << fixed << setprecision(2) << accountBalance << endl;
    }
};

int main() {
    CAccount myAccount;

    myAccount.inputTransaction();
    myAccount.printBalance();

    return 0;
}