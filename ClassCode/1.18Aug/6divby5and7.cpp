#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter a Number: ";
    cin>>a;
    
    if((a%5==0) && (a%7==0)){
        cout<<a<<" is divisble by 5 and 7 both"<<endl;
    }
    else if(a%7 == 0){
        cout<<a<<" is divisble only by 7"<<endl; 
    }
    else if (a%5 == 0){
        cout<<a<<" is div only by  5"<<endl;
    }
    else{
        cout<<a<<" is neither div by 5 or 7"<<endl;
    }

    return 0;
}