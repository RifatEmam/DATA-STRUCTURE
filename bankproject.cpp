#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank{
    char name[100],add[200],y;
    int balance;

public :
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
    };

void bank::open_account()
{
    cout<< "Enter your full name ::   ";
    cin.ignore();
    cin.getline(name,100);
    cout<< "\nEnter your address :: ";

    cin.getline(add,200);
    cout<< "\nwhat type of account you want to saving (s) or current(c) ::   ";
    cin>>y;
    cout<< "\nEnter amount for deposit ::   ";
    cin>>balance;
    cout<< "\nYour account is created \n";



}
    void bank::deposit_money()
    {   int a;

        cout<<" Enter how much money you deposit  ::    ";
        cin>>a;
        balance+=a;
       cout<<" Your total amount deposit ::      "<<balance;
    }

void bank::display_account()
{
    cout<< "\nYour full name ::     "<< name<<endl;
    cout<< "\nYour  address ::  "<< add<<endl;
    cout<< "\nType of account you want   ::   "<< y<<endl;
    cout<< "\nCurrent balance in your account ::   "<< balance<<endl;



}
void bank::withdraw_money()
{
    float amount;
    cout<< "\n Withdraw :: ";
    cout<< "Enter amount to withdraw ::  ";
    cin>>amount;
    balance-=amount;
    cout<< " Now total amount  left  ::    "<<balance;

}



int main(){
    int r,x;

    bank ob;
do{
cout<<"1) \033[1;31mOPEN ACCOUNT\033[0m\n";
cout<<"2) \033[1;32mDEPOSIT MONEY\033[0m\n";
cout<<"3) \033[1;33mWITHDRAW MONEY\033[0m\n";
cout<<"4) \033[1;34mDISPLAY ACCOUNT\033[0m\n";
cout<<"5) \033[1;36mEXIT\033[0m\n";
cout<< " \033[1;35mSELECT THE OPTION \033[0m\n";
cin>>r;
switch(r)
{
case 1:
    cout<<"1)OPEN ACCOUNT \n";
    ob.open_account();
    break;
    case 2:
        cout << "2)DEPOSIT MONEY \n";
    ob.deposit_money();
    break;
    case 3:
    cout<<"3)WITHDRAW MONEY ::   \n";
    ob.withdraw_money();
    break;
    case 4:
        cout<<"4)DISPLAY ACCOUNT\n";
    ob.display_account();
    break;
    case 5:
        if(r==5){
            return 1;
        }
    default :
        cout<< " \033[1;34mThis is not exit try again    \033[0m\n";
}
    cout<< "\n \033[1;32mDo you want to select next option ?then press  ::  \033[0mY\n";

    cout<< "\n \033[1;33mIf you want to exit then press :: \033[0mN\n";
    x=getch();
    if(x=='n' || x=='N'){
        return 0;

    }






}while(x=='y' || x=='Y');



getch();
return 0;


}

