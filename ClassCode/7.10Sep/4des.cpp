#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float imag;
    public:
    // static int count; //declaration
        complex(float r,float i){
            this->real = r;
            this->imag = i;
            // count = count+1;
            cout<<real<<"+"<<imag<<"i"<<" number has been created"<<endl;
        }

        void get_details(){
            cout<<"Number is "<<this->real<<" + "<<this->imag<<"i"<<endl;
        }

        complex operator-(const complex& second_obj){
            complex c3(0,0);
            c3.real = this->real - second_obj.real;
            c3.imag = this->imag - second_obj.imag;
            return c3;
        }
        
        ~complex(){
            cout<<"Complex Number "<<real<<" + "<<imag<<"i"<<" has been destroyed"<<endl;
        }
};
// int complex :: count = 0; //class variable

int main(){
    {
        complex c1(6,5),c2(2,3),c4(0,0);
        c4 = c1-c2;
        c4.get_details();

    }
complex c6(4,9),c7(5,9),c9(0,0);
c9 = c6 - c7;
c9.get_details();

    return 0;
}