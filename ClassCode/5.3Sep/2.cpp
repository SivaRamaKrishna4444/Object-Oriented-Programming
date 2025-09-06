#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float imag;
    public:
    static int count;
        complex(float x,float y){
            this->real = x;
            this->imag = y;
            count = count + 1;
            cout<<"This is "<<count<<" Complex NUmber"<<endl;
        }
        void get_details(void){
            cout<<"Real: "<<this->real<<" Imag: "<<this->imag<<endl;
        }
};
int complex :: count = 0;

int main(){
    complex c1(2,3);
    c1.get_details();

    complex c2(3,4);
    c2.get_details();
    return 0;
}