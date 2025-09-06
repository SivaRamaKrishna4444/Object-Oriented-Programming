#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cout<<"ENter an Integer: ";
    cin>>a;

    // for (int i=2;i*i<=a;i++){
    for (int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            cout<<"Number is not prime"<<endl;
            return 0;
        }
    }
    cout<<"Number is Prime"<<endl;
    return 0;
}