#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter 5 numbers:\n");

    printf("Input your first value:" );
    scanf("%d", &num1);

    printf("Input your second value:" );
    scanf("%d", &num2);

    printf("Input your third value:" );
    scanf("%d", &num3);

    printf("Input your forth value:" );
    scanf("%d", &num4);

    printf("Input your fifth value:" );
    scanf("%d", &num5);
    
    if (num1>=num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
        printf("%d is the largest number.", num1);

    else if (num2>=num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
        printf("%d is the largest number.", num2);

    else if (num3>=num1 && num3 >= num2 && num3 >= num4 && num1 >= num5)
        printf("%d is the largest number.", num3);

    else if (num4>=num1 && num4 >= num2 && num4 >= num3 && num4 >= num5)
        printf("%d is the largest number.", num4);
        
    else
        printf("%d is the largest number.", num5);
    return 0;
}