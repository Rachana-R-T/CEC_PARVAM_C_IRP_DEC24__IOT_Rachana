int main()
{
    int n, rem, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while(n>0)
    {
        rem= n % 10;
        sum = sum * 10 +rem;
        n = n / 10;
    }
    printf("%d",sum);

    return 0;
}