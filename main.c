/*************************************
* v1.0
* 2023-08-28
***************************************/
#include <stdioh.>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
    int number1, number2, result;
    char operator;

    printf("수식을 입력해주세요: ");
    scanf("%d %c %d", &number1, &operator, &number2);

    switch(operator)
    {
        case '+':
            result = add(number1, number2);
            break;
        case '-':
            result = sub(number1, number2);
            break;
        case '*':
            result = multi(number1, number2);
            break;
        case '/':
            result = div(number1, number2);
            break;
    }

    printf("결과는(ex 1 + 2= 3) %d.\n", result);
    return 0;
}

int add(int number1, int number2)
{
    return number1 + number2s;
}

int sub(int number1, int number2)
{
    return number1 - number2;
}

int multi(int number1, int number2)
{
    return number1 * number2;
}

int div(int number1, int number2)
{
    return number1 / number2;
}
