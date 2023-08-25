#include <stdio.h>

int sum_of_digits(int num)
{
    int sum = 0;
    //Write your code here
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    //
    return sum;
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int sum = sum_of_digits(n);
    printf("The sum of the digits is %d\n", sum);
}
