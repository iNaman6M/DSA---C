#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main(){

    struct Rectangle r1 = {10,5};
    printf("%lu\n", sizeof(r1));
    printf("Area of Rectangle is : %d\n",r1.length * r1.breadth);
}
