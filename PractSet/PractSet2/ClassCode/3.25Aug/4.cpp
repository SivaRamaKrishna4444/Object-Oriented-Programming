#include<iostream>
#include<string>
using namespace std;

class details{
    private:
        // int roll_no;
        float m1,m2,m3,m4,m5,m6;
        string name;

        void greet(){
            cout<<"Good Morning";
        }

    public:
        void set_value(float mr1,float mr2,float mr3,float mr4,float mr5,float mr6, string nm){

        // pri = publ
            m1 = mr1;
            m2 = mr2;
            m3 = mr3;
            m4 = mr4;
            m5 = mr5;
            m6 = mr6;
            name = nm;
            
        }
        void get_value(void){
            float avg;
            avg = (m1+m2+m3+m4+m5+m6)/6;
            // greet();
            cout<<endl<<"Name: "<<name<<", Avg_Marks: "<<avg<<endl;
        }

        void greet2(void){
            greet();
        }
};

int main(){

    details d1;
    d1.set_value( 10,10,10,10,8,7, "Siva" );
    d1.get_value();
    d1.greet2();
    
    return 0;
}