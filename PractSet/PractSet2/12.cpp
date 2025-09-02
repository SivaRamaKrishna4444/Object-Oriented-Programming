#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if((num%3==0) && (num%5==0)){
        cout<<"FizzBuzz";
    }
    else if(num%3==0){
        cout<<"Fizz";
    }
    else if(num%5==0){
        cout<<"Buzz";
    }
    
    return 0;
}