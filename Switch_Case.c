//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main()
{
    char ch;
    int a, b, result;

    printf("Enter an Operator (+, -, *, /,% ): ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);

    switch(ch)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;

    case '%':
        result = a % b;
    }
    printf("Result = %d", result);
    return 0;
}
