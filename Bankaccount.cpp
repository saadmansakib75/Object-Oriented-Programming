
/*A C++ program to implement a class called BankAccount that has private member variables for account number and balance.
Include member functions to deposit and withdraw money from the account.*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private :
       int account_number ;
       double balance ;

    public :
       BankAccount(int acc_num , double init_bal){
           account_number = acc_num ;
           balance = init_bal ;
       }

       void deposit(double ammount){
            if(ammount > 0)
            balance += ammount ;

            else
            cout << "Ammount invalid , please try again" << endl;

       }

       void withdraw(double ammount){
            if(ammount > 0)
            balance -= ammount ;

            else if (ammount > balance)
            cout << "Insufficiant balance" << endl ;

            else
            cout << "Invalid ammount, please try again" << endl ;

       }

       void chekBalance (){
        cout<< "Your balance is " << balance << endl ;
        cout << "Thank you" << endl ;
       }
};

int main(){

    int acc_num ;
    double init_bal ;

    cout << "Enter your account number : " ;
    cin >> acc_num ;
    cout << endl ;

    cout << "Enter your balance : " ;
    cin >> init_bal ;
    cout << endl ;

    BankAccount a1(acc_num , init_bal) ;

    while(true){
        cout << "Menu" << endl ;
        cout << "1.Deposit" << endl ;
        cout << "2.Withdraw" << endl ;
        cout << "3.Check alance" << endl ;
        cout << "4.Exit" << endl ;
    

    int choice ;
    cout << "Seclect menu : " ;
    cin >> choice ;
    double ammount ;

       switch(choice) {
            case 1:
                cout << "Enter deposite amount: ";
                cin >> ammount;
                a1.deposit(ammount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> ammount;
                a1.withdraw(ammount);
                break;
            case 3:
                a1.chekBalance();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    }
}
//Object Oriented Programing
