// C++ program to implement
// Bank Managaement System
#define max 20
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
 
class Bank {
    string name, address;
    char acc_type;
    float balance;
    int accountNo;
 
public:
    void open_account();
    void deposit_money(int acc_no);
    void withdraw_money(int acc_no);
    void display_account(int acc_no);
};
 Bank store[20];
 int num;
void Bank::open_account()
{
   
    if (num < 20) {
        int i = num;
        num++;
        
    cout << "Enter your full name: "<< endl;
    cin>>store[i].name;
    cout << "Enter your address: "<< endl;
    cin>>store[i].address;
    cout << "What type of account you want" << " to open saving- (S) or Current - (C): "<< endl;
    cin>> store[i].acc_type ;
    cout << "Enter How much money you want to deposit: "<< endl;
    cin>>store[i].balance ;
    cout << "Account Created Successfully ... You Account Number is "<< i<<endl;
    i++;
    }
    else
    {
        cout<<"Memory full";
    }
}
 
// Function to deposit the account
void Bank::deposit_money(int acc_no)
{
    int Amount;
    cout << "Enter how much money"
         << " you want to deposit: "<< endl;
    cin>>Amount ;
    store[acc_no].balance += Amount;
    cout << "\n Available Balance: "
         << store[acc_no].balance;
}
 
// Function to display the account
void Bank::display_account(int acc_no)
{
   
    cout << "Name: " << store[acc_no].name << endl
         << "Address: " << store[acc_no].address << endl
         << "Type: " << store[acc_no].acc_type << endl
         << "Balance: " << store[acc_no].balance << endl
         << endl;
}
 
// Function to withdraw the account
void Bank::withdraw_money(int acc_no)
{
    float amount;
   
    cout << "Enter how much money "
         << "you want to withdraw: "<< endl;
    cin>>amount ;
    store[acc_no].balance -= amount;
    cout << "\n Available balance: "
         << store[acc_no].balance;
}
 
// Driver code
int main()
{
    int choice;
 
    // Creating Customer Object of Bank Class
    Bank customer;
    do{
         cout << "\n1) Open account \n\n";
    // Calling open_account() function
    // through customer object.
    cout << "\n2) Deposit account \n\n";
    // Calling deposit_money() function
    // through customer object.
     cout << "\n3) Withdraw money \n\n";
    // Calling withdraw_money() function
    // through customer object.
    cout << "\n4) Display Account \n\n";
    // Calling display_account() function
    // through customer object.
    cout << "\n5) Exit Application \n\n";
    // Exit
  
        cin>>choice;
        switch(choice){
            
            case(1):
            
        customer.open_account();
        cout << "\n------------------------"
             << "-------------------------\n";
             break;
             
             case(2):
             cout<<"Enter account Number";
            int acc2;
            cin>>acc2;
        customer.deposit_money(acc2);
        cout << "\n------------------------"
             << "-------------------------\n";
             break;
 
            case(3):
            cout<<"Enter account Number";
            int acc3;
            cin>>acc3;
        customer.withdraw_money(acc3);
        cout << "\n------------------------"
             << "-------------------------\n";
             break;
             
             
             case(4):
             cout<<"Enter account Number";
            int acc4;
            cin>>acc4;
        customer.display_account(acc4);
        cout << "\n------------------------"
             << "-------------------------\n";
             break;
             
             case(5):
             cout<<"Exiting Application";
             break;
             
             default :cout<<"\a";
 
    }
    
    }while(choice!=5);
    
    return 0;
}
