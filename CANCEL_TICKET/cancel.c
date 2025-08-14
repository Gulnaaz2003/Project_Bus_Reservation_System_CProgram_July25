#include <stdio.h>

void cancelTicket();
void userMenu();

int main()
{
    userMenu();
    return 0;
}

void userMenu()
{
    int option;
    printf("\n=== User Menu ===\n");
    printf("1. Book a Ticket\n");
    printf("2. Cancel a Ticket\n");
    printf("3. Check Bus Status\n");
    printf("4. Logout\n");
    printf("Choose your option: ");
    scanf("%d", &option); 

    if (option == 2)
    {
        cancelTicket();
    }
}

void cancelTicket()
{
    int bus_number;
    int seat_number;

    printf("enter bus number: ");
    scanf("%d", &bus_number);
    printf("enter number of seat to cancel: ");
    scanf("%d", &seat_number);
    printf("Cancellation successful! %d seats cancel of bus number %d", seat_number, bus_number);
}
