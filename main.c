#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, VIP;

    printf("Insert your age: ");
    scanf( "%d", &age);

    printf("Do you have the VIP ticket? (1 = Yes , 0 = No): ");
    scanf( "%d", &VIP);


    if (VIP != 1 && VIP != 0)
        printf("Please insert a valid answer.\n");
    else if (age >= 18 || VIP == 1)
        printf("Access granted\n");
    else
        printf("Access denied\n");

    system("pause");
    return 0;

}
