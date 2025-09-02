#include<iostream>
#include<string>

using namespace std;

class details{
    public:
    string name;
    int roll_no;
    float marks;
};

int main(){

    details d1;
    d1.name = "Siva";
    d1.marks = 95.5;
    d1.roll_no = 42;

    cout<<" Name: "<<d1.name<<", Marks: "<<d1.marks<<", Roll No: "<<d1.roll_no<<endl;

    return 0;
}