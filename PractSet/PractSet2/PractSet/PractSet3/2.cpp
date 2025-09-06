#include<iostream>
using namespace std;

class BankAccount{
    private:
        float balance;
    
    public:
        void setBalance(float bl){
            balance = bl;
        }

        void getBalance(void){
            cout<<"Current Balance: "<<balance;
        }
};

int main(){

    BankAccount b1;
    
    
    return 0;
}