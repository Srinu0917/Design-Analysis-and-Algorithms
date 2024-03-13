#include <stdio.h>
int power(int n, int p)
{
    if (p == 0) 
	{
        return 1;
    }
    return n * power(n, p - 1);
}
int isArmstrong(int num, int originalNum, int n) 
{
    if (num == 0) {
        return originalNum == 0;
    }
    int digit = num % 10;
    return power(digit, n) + isArmstrong(num / 10, originalNum, n);
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int digits = 0;
    int temp = num;
    while (temp != 0) 
	{
        digits++;
        temp /= 10;
    }
    if (isArmstrong(num, num, digits)) 
	{
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
