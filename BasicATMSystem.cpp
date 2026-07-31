#include<iostream>
using namespace std;\
int main()
{
    int balance = 150;
    int withdraw, deposit, option;
do 
{
    cout << "==============================\n";
    cout << "          ATM MACHINE         \n";
    cout << "==============================\n";
    cout << "1. Check Balance\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Deposit Money\n";
    cout << "4. Exit\n";
    cout << "==============================\n";

    cout << "Enter Your Option: ";
    cin >> option;


    switch (option)
    {
        case 1:
            cout << "Your Balance is: " << balance << endl;
            break;

        case 2:
            cout << "Enter Amount to Withdraw: ";
            cin >> withdraw;
            if (withdraw > balance)
                cout << "Insufficient Balance!" << endl;
            else
            {
                balance -= withdraw;
                cout << "Withdrawal Successful! New Balance: " << balance << endl;
            }
            break;

        case 3:
            cout << "Enter Amount to Deposit: ";
            cin >> deposit;
            balance += deposit;
            cout << "Deposit Successful! New Balance: " << balance << endl;
            break;

        case 4:
            cout << "Thank You for Using the ATM Machine!" << endl;
            break;

        default:
            cout << "Invalid Option! Please Try Again." << endl;
    }
} while (option != 4);
return 0;
}
