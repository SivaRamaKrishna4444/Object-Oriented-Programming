#include<iostream>
#include<string>
using namespace std;

class  bank_account{
    private:
        string name;   //data members
        float bal;
    public:
        // void set_values(string nm,float b){
        //     this->name = nm;
        //     this->bal = b;
        // }
        
        void get_values(void){    //methods or member functions
            cout<<"Name: "<<this->name;
            cout<<"  Balance: "<<this->bal<<endl;
        }
        
        void deposit(float dep){
            this->bal = this->bal+dep;
        }
        void withdraw(float with){
            if(this->bal < with){
                cout<<"Can't WithDraw for "<<this->name<<endl<<"Avl Bal: "<<this->bal<<endl;
            }
            else if(this->bal >= with){
                this->bal = this->bal - with;
            }
        }

        bank_account(string nm,float b){
            this->name = nm;
            this->bal = b;
        }
};

int main(){
    bank_account b1("Siva Kamma",1107);
    bank_account b2("Rama",1207);

    // b1.set_values("Siva",100.45);
    // b2.set_values("Rama",10000.90);

    b1.get_values();
    b2.get_values();

    b1.deposit(34);
    b2.deposit(400);

    b1.get_values();
    b2.get_values();

    b1.withdraw(1034);
    b2.withdraw(300);

    b1.get_values();
    b2.get_values();


    return 0;
}






// total ammount both of them have()
//  Destructor