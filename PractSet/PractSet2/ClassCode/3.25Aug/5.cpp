// Name city state High marks

#include<iostream>
#include<string>

using namespace std;

class details{
    private:
        string name;
        string city;
        string state;
        float marks;
    public:
        void set_value(string nm,string ct,string st,float mr){
            name = nm;
            city = ct;
            state = st;
            marks = mr;
        }
        
        void get_value(void){
            cout<<" Name: "<<name<<", City: "<<city<<", State: "<<state<<" Highest Marks: "<<marks<<endl;
        }
};

int main(){

    details d1;
    string name,city,state;
    float marks;

    cout<<" Enter your Name: ";
    cin>>name;

    cout<<" Enter your City: ";
    cin>>city;

    cout<<" Enter your State: ";
    cin>>state;

    cout<<" Enter your Highest Marks: ";
    cin>>marks;

    d1.set_value(name,city,state,marks);
    // d1.set_value("Siva" , "Kanigiri" , "Andhra" , 92);
    d1.get_value();
    
    return 0;
}