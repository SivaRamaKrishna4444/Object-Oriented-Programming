#include<iostream>
using namespace std;

class temple_run{
    private:
        int score;
    public:
        void left(void);
        void right(void);
        void get_score(void);

        temple_run(){
            this->score = 0;
            cout<<"Game Started with Score: "<<score<<endl;
        }
        // friend function
        friend void bonus(temple_run *p);
};

void temple_run :: left(void){
    this->score++;
}

void temple_run :: right(void){
    this->score++;
}

void temple_run :: get_score(void){
    cout<<"Your Score is: "<<this->score<<endl;
}

void bonus(temple_run *p){
    // p.score = p.score + 5;
    p->score = p->score + 5;
}

int main(){
    temple_run p1;
    p1.left();
    p1.right();
    p1.get_score();

    bonus(&p1);
    p1.get_score();

    return 0;
}