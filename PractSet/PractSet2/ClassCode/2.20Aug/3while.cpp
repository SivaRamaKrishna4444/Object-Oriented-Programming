#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int num;
    int i=1;
    while(sum<=50){
        cout<<"Enter number "<<i<<": ";
        cin>>num;

        i=i+1;
        sum = sum+num;
    }
    cout<<"Sum is(greater than 50): "<<sum;

    return 0;
}