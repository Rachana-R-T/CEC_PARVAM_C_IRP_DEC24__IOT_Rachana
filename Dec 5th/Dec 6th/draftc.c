#include<stdio.h>
int main(){
int a=100;
if(a==10)
{
    printf("Value of a is 10");
}
else if(a==20)
{
    printf("value of a is 20");
}
else if(a==30)
{
    printf("value of a is 30");
}
else 
{
    printf("None of the values is matching");
}
printf("Exact value of a is:%d",a);
return 0;
}