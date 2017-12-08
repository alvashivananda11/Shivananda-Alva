#include <stdio.h>

main()
{
    int number, temp, digit1, digit2;

    printf("Print all Armstrong numbers between 1 and 1000:\n");
    number = 001;
    while (number <= 100)
    {
        digit1 = number - ((number / 10) * 10);
        digit2 = (number / 10) - ((number / 100) * 10);
        temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2);
        if (temp == number)
        {
            printf("\n Armstrong no is:%d", temp);
        }
        number++;
    }
}
