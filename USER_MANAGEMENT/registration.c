#include <stdio.h>

void userlogin();
int main()
{
    int option;
    printf("\n***** Bus Reservation System *****\n");
    printf("1. Log in\n");
    printf("2. Exit\n");
    printf("Please enter your Choice: ");
    scanf("%d", &option);

    if (option == 1)
    {
        userlogin();
    }
    else if (option == 2)
    {
        printf("Thank You for Exiting.....");
    }
    else
    {
        printf("Invalid option! Try again.");
    }
    return 0;
}

void userlogin()
{
    char username;
    char password;

    printf("enter Username: ");
    scanf("%s", &username);
    printf("enter password: ");
    scanf("%s", password);
    printf("login successfully. Welcom, %s", username);
}