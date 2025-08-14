#include <stdio.h>

void bookTicket();
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

    if (option == 1)
    {
        bookTicket();
    }
}

void bookTicket()
{
    int bus_number;
    int seat_number;

    printf("enter bus number: ");
    scanf("%d", &bus_number);
    printf("enter number of seat: ");
    scanf("%d", &seat_number);
    printf("Booking successful! %d seats booked on bus number %d", seat_number, bus_number);
}