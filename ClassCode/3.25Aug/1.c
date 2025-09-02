#include<stdio.h>

struct details{
    char name[50];
    int roll_no;
    float marks;
};

void update_marks(struct details *x){
    int i;
    printf("\nEnter the New Marks: ");
    scanf("%d",&i);

    x->marks = i;
}

int main(){
    struct details s1 = {"Siva Kamma" , 42 , 10};
    printf("Name: %s , Roll No: %d , Marks: %.2f",s1.name,s1.roll_no,s1.marks);

    update_marks(&s1);
    // struct details s2;
    
    printf("Updated Marks: \nName: %s , Roll No: %d , Marks: %.2f",s1.name,s1.roll_no,s1.marks);
    
    s1.marks = 200;
    printf("Name: %s , Roll No: %d , Marks: %.2f",s1.name,s1.roll_no,s1.marks);
    return 0;
}