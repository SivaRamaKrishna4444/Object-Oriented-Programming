#include<iostream>
using namespace std;

class complex{
    private:
        float x;
        float y;
    public:
        complex(float a,float b){
            this->x = a;
            this->y = b;
            cout<<"New Complex Number has been created with adress: "<<this<<"Complex: "<<this->x<<" + "<<y<<"i"<<endl;
        }
      //return type
        complex operator*(const complex& second_obj){
            complex c3(0,0);
            c3.x = (this->x * second_obj.x) - (this->y * second_obj.y);        
            c3.y = (this->x * second_obj.y) + (this->y * second_obj.x);
            return c3;
        }

        void get_details(void){
            cout<<"Complex:  "<<this->x<<" + "<<this->y<<"i"<<endl; 
        }

        ~complex(){
            cout<<"Complex number has destroyed"<<endl;
        }

};

int main(){
    complex c1(3,4),c2(4,5),c4(0,0);

    c4 = c1*c2; //c1.operator(c2) ///c4 is receiving the c3 value
    
    c4.get_details();

    return 0;
}