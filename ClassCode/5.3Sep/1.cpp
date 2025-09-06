#include<iostream>
#include<string>
using namespace std;

class state_bank{
    private:
        string name;
        int ac_no;
        float bal;
    public:
    static float total_balance; //declaration of static variable
        state_bank(string n , int a , float b){
            this->name = n;
            this->ac_no = a;
            this->bal = b;
            this->total_balance = total_balance + b;
        }

        void get_details(void){
            cout<<"Name: "<<this->name<<" Account Number: "<<this->ac_no<<" Balance: "<<this->bal<<endl;
            cout<<"Total Balance: "<<total_balance<<endl;
        }
};

float state_bank :: total_balance = 0; //class variable

int main(){
    state_bank a1("Siva",1,3000.0);
    a1.get_details();
    
    cout<<"Total Balance: "<<state_bank :: total_balance<<endl;
    state_bank a2("Rama",1111,4000.0);

    // a1.get_details();
    a2.get_details();

    return 0;
}