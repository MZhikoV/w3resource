//5. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
//Include member functions to deposit and withdraw money from the account.

#include <iostream>
#include <string>
#include <sstream>


using namespace std;

class BankAccount {
    string number;
    double balance;

    public:
    BankAccount(const string & inpNum, const double & inpBallance)
    : number(inpNum), balance(inpBallance) {};

    void deposit(const double & deposit) {
        balance+=deposit;
        cout << "Deposit successful. Current balance: " << balance << endl; // Output success message and current balance
    };

    void withdraw(const double & amount) {
        if(balance>=amount) {
            balance-=amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl; // Output success message and current balance
        }
        else {
            cout << "Insufficient balance. Cannot withdraw." << endl; // Output error message for insufficient balance
        }

    };

    string getNumber() const {
        return this->number;
    };

    double getBalance() const {
        return this->balance;
    };
};



int main() {
    

    // Create a bank account object
  std::string sacno = "SB-123"; // Define the account number
  double Opening_balance, deposit_amt, withdrawal_amt; // Define variables for opening balance, deposit amount, and withdrawal amount
  Opening_balance = 1000; // Assign the opening balance
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl; // Output the account details

  BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  // Deposit money into the account
  deposit_amt = 1500; // Define the deposit amount
  std::cout << "Deposit Amount: " << deposit_amt << std::endl; // Output the deposit amount
  account.deposit(deposit_amt); // Call the deposit method of the account object

  // Withdraw money from the account
  withdrawal_amt = 750; // Define the withdrawal amount
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  // Attempt to withdraw more money than the balance
  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object
    
    system("pause");
    return 0;
}
