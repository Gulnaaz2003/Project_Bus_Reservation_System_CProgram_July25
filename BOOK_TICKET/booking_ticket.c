#include <stdio.h>

int busesAvailable = 3;
int busChoice;
int seats;
int max_seats = 40;

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
    int busesAvailable = 3;
    int busChoice;
    int seats;
    int max_seats = 40;

    printf("=== Book Ticket ===\n");
    printf("Available Buses:\n");
    printf("1. Bus A\n");
    printf("2. Bus B\n");
    printf("3. Bus C\n");

    printf("How many buses do you want to book (1 to 3)? ");
    scanf("%d", &busChoice);

    if (busChoice < 1 || busChoice > busesAvailable) 
    {
        printf("Invalid number of buses selected.\n");
        return;
    }

    for (int i = 1; i <= busChoice; i++) 
    {
        printf("Enter number of seats for Bus %d (Max %d): ", i, max_seats);
        scanf("%d", &seats);

        if(seats <= 0 || seats > max_seats)
        {
            printf("Invlalid number of seats. Maximum allowed is %d.\n", max_seats);
            i--;
        }

        printf("Bus %d booked with %d seats.\n", i, seats);
    }

    printf("Booking complete.");
}