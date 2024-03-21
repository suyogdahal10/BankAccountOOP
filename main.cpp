#include <iostream>
using namespace std;

class BankAccount{

private:
    string name;
    double balance;

public:
    BankAccount(string n, double bal){ //constructor
        setName(n);
        setBalance(bal);
    }

    void setName(string s){
        name=s;
    }

    void setBalance(double b){
        if (b<0){
            balance=0;
        }
        else{
            balance=b;
        }
    }

    string getName(){
        return name;
    }
    double getBalance(){
        return balance;
    }

    double withdrawBalance(double amount){

        if (amount>balance){
            cout<<"Error! Withdraw amount cannot be greater than balance."<<endl;
            return balance;
        }
        else{
            balance -=amount;
            return balance;
        }
    }
    double addBalance(double amount){

        balance+=amount;
        return balance;
    }

};

int main() {

    BankAccount person("Suyog",100);

    string personName= person.getName();

    double balance =person.getBalance();

    cout<<"Account Holder: "<<personName<<"  Balance: "<<balance<<endl;

    double withdraw =person.withdrawBalance(101);
    cout<<"Withdrawing balance..."<<endl;
    cout<<"New Balance: "<<withdraw<<endl;

    double add =person.addBalance(250);
    cout<<"Depositng Balance..."<<endl;
    cout<<"New Balance: "<<add;
    return 0;
}

   
