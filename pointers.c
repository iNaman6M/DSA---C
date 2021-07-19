#include<stdio.h>

int main(){

    //initialising with values
    // int a = 10;
    // int *p;
    // p = &a;

    // printf("%d\n", a);
    
    // printf("%d\n", *p);

    //with arrays

    int A[5] = {2,4,5,6,7};
    int *p;
    p = A;
    int i;
    for(i=0;i<5;i++){
        printf("%d\n", p[i]);
    }

    return 0;
}