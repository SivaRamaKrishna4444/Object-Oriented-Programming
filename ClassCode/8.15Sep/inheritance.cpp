#include<iostream>
#include<string>
using namespace std;

// inheritance

// Base class
class University{
    private:
        string name;
        int id;
    public:
        University(string name,int id){
            this->name = name;
            this->id = id;
            cout<<"New Member has deen created with "<<"Name: "<<this->name<<"  ID: "<<this->id<<endl;
        }
        void get_details(void){
            cout<<"Name: "<<this->name<<" and ID: "<<this->id<<endl;
        }
};

// class name_of_derived_class : access_specifier base_class
class Students : public University{
    private:
        string school;
    public:
        Students(string name,int id,string school) : University(name,id){
            this->school = school;
        }
        void get_studentdetails(void){
            get_details();
            cout<<"School: "<<this->school<<endl;
        }
};

int main(){
    // University m1("Siva",42),m2("Rama",24),m3("Krishna",02);
    Students s1("Siva",1,"CDS"),s2("Rama",2,"SCDS");
    s1.get_studentdetails();
    s2.get_studentdetails();

    return 0;
}