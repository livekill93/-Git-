/*
* banking system ver 0.1
*/
#include<iostream>
#include<cstring>

using namespace std;

const int NAME_LEN=20;

void ShowMenu(); // Menu output
void MakeAccount(); //Function of make bamk account
void DepositMoney(); //Deposit Money
void WithdrawMoney(); //wiothdraw money
void ShowAllAccInfor(); //showing all informaition

enum{ MAKE=1,DEPOSIT, WITHDRAW,INQUIRE,EXIT};

typedef struct 
{
    int accID;
    int balance;
    char cusName[NAME_LEN];  //customer name
}Account;

Account accArr[100];
int accNum=0;

int main(){
    int choice;

    while(1){
        ShowMenu();
        cout<<"select: ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowAllAccInfor();
                break;
            case EXIT:
                return 0;
            default:
                cout<<"illegal selection.."<<endl;
        }
    }
    return 0;
}

void ShowMenu(){
    cout<<"-----Menu-----"<<endl;
    cout<<"1. Make Account"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"5.output all account informaition"<<endl;
    cout<<"6. Program EXIT"<<endl;   
}

void MakeAccount(){
    int id;
    char name[NAME_LEN];
    int balance;
    cout<<"[New Account]"<<endl;
    cout<<"Account ID: "<<endl;
    cout<<"Name: "<<endl;
    cout<<"Deposit Money: "<<endl;
    cout<<endl;
    accArr[accNum].accID=id;
    accArr[accNum].balance=balance;
    strcpy(accArr[accNum].cusName, name);
    accNum++;
}

void DepositMoney(){
    int money;
    int id;
    cout<<"[Deposit]"<<endl;
    cout<<"Accont ID: "<<endl;
    cout<<"Deposit Money:"<<endl;

    for(int i=0;i<accNum;i++){
        if(accArr[i].accID==id){
            accArr[i].balance+=money;
            cout<<"Deposit over"<<endl<<endl;
            return;
        }
    }
    cout<<"Unidentified ID."<<endl<<endl;    
}

void WithdrawMoney(){
    int money;
    int id;
    cout<<"[Deposit]"<<endl;
    cout<<"Accont ID: "<<endl;
    cout<<"Deposit Money:"<<endl;

    for(int i=0;i<accNum;i++){
        if(accArr[i].accID==id){
            cout<<"not enough Money"<<endl<<endl;
            return;
        }
        accArr[i].balance-=money;
        cout<<"Withdraw Over"<<endl<<endl;
        return;
    }
    cout<<"Unidentified ID."<<endl<<endl;  
}

void ShowAllAccInfor(){
    for(int i=0;i<accNum;i++){
        cout<<"Accont ID: "<<endl;
        cout<<"Name: "<<endl;
        cout<<"Left Money:"<<endl;
    }
}
