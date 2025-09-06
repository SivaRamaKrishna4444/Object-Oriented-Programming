#include<iostream>
using namespace std;

class point{
    private:
        float x;
        float y;
    public:
        void set_values(float a1,float b1);   //outside the class 
        void get_values(void);

        //constructor or special method
        
        // point (){   // default constructor
        //     cout<<"Hello World ! "<<endl;
        //     this->x = 10;
        //     this->y = 12;
        // }

        point ( float n1,float n2){
            this->x = n1;
            this->y = n2;
        }
        point (float n3){
            this->x =  n3;
            this->y = 0;
        }

};

//return_type name_of_class :: function
void point :: set_values(float a1,float b1){
    this->x = a1;
    this->y = b1;
}

void point :: get_values(void){
    cout<<" x : "<<this->x<< " y : "<<this->y<<endl;
    
}

int main(){
    point p1(3.4,5.6);
    point p2(3.0);
    point p3;

    // p1.set_values(3,4);
    p1.get_values();

    // p2.set_values(5,6);
    p2.get_values();

    return 0;
}


//Magnitude of Vector
//Quadrants ++,+-,--,-+