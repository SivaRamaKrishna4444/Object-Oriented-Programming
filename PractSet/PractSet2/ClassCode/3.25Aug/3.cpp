#include<iostream>
#include<string>

using namespace std;

class details{
    private:
        int roll_no;
        float marks;
        string name;
    public:
        void set_value(int rn , float mr, string nm){
            roll_no = rn;
            marks = mr;
            name = nm;
        }
        void get_value(void){
            cout<<" Name: "<<name<<", Marks: "<<marks<<", Roll No: "<<roll_no<<endl;
        }
};

int main(){

    details d1;
    d1.set_value( 42 , 96.5 , "Siva");
    d1.get_value();
    

    // cout<<" Name: "<<d1.name<<", Marks: "<<d1.marks<<", Roll No: "<<d1.roll_no<<endl;

    return 0;
}