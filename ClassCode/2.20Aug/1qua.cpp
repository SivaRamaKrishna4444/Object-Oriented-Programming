#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    float root1,root2;

    cout<<"Enter CoEff of x^2: ";
    cin>>a;
    cout<<"Enter CoEff of x: ";
    cin>>b;
    cout<<"Enter constant: ";
    cin>>c;

    int dis = ((b*b)-4*a*c);

    if(dis>0){
        cout<<"Real Roots"<<endl;
        root1 = (-b+sqrt(dis)/(2*a));
        root2 = (-b-sqrt(dis)/(2*a));

        cout<<"Roots are "<<root1<<","<<root2;
    }
    else if(dis == 0){
        cout<<"Same Root"<<endl;
        
        root1 = (-b/(2*a));

        cout<<"Roots are "<<root1<<","<<root1;
    }
    else if(dis<0){
        cout<<"The roots are imaginary"<<endl;

        float dis_imag = -dis;
        float real,imag;
        real = (-b/(2*a));
        imag = (sqrt(dis_imag)/(2*a));

        cout<<"Roots are "<<real<<" + "<<imag<<"i" <<", "<<real<<" - "<<imag<<"i";  
    }
    
    return 0;
}
