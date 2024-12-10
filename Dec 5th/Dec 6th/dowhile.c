#include<stdio.h>
int main(){
    int num, sum=0, rem=0;
    do
    {
        /* code */
    } while (/* condition */);
    
    printf("Enter the number to get sum of digits:");
    scanf("%d", &num);

    while(num > 0){
        rem = num%10; // 456%10 = 6
        sum=sum + rem*rem; // sum = sum*10+rem;
        num = num/10;
    }
    printf("sum of Digits=%d",sum);
    return 0;
}

