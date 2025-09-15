#include<iostream>
#include<string>
using namespace std;
#include"head.h"

books :: books (string nm , int i){
    this->name = nm;
    this->id = i;
}

void books :: get_details(void){
    cout<<"Name of Book: "<<this->name<<endl<<"ID: "<<this->id<<endl;
}