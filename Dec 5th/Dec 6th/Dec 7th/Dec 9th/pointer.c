#include<stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    b=a;
    a=temp;
}
int main(){
    int x=10, y=20;
    printf("Before swaping a=%d, b=%d",x,y);
    swap(x, y);
    printf("After Swaping a=%d, b=%d",x,y);
    return 0;
}