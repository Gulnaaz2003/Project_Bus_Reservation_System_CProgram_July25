#include <stdio.h>
#include <string.h>

struct Bus {
    int busNo;
    char source[20];
    char destination[20];
    int totalSeats;
    int availableSeats;
    float fare;
};

struct Bus buses[3]; 

void userMenu();
void showAvailableBuses();
void cancelTicket();

int main()
{
    buses[0].busNo = 101;
    strcpy(buses[0].source, "Delhi");
    strcpy(buses[0].destination, "Bihar");
    buses[0].totalSeats = 50;
    buses[0].availableSeats = 50;
    buses[0].fare = 500.0;

    buses[1].busNo = 102;
    strcpy(buses[1].source, "Patna");
    strcpy(buses[1].destination, "Lucknow");
    buses[1].totalSeats = 40;
    buses[1].availableSeats = 40;
    buses[1].fare = 450.0;

    buses[2].busNo = 103;
    strcpy(buses[2].source, "Mumbai");
    strcpy(buses[2].destination, "Pune");
    buses[2].totalSeats = 30;
    buses[2].availableSeats = 30;
    buses[2].fare = 300.0;

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

void showAvailableBuses()
{
    printf("\n--- Available Buses ---\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Bus Number: %d | %s -> %s | Total Seats: %d | Available Seats: %d | Fare: %.2f\n",
               buses[i].busNo, buses[i].source, buses[i].destination,
               buses[i].totalSeats, buses[i].availableSeats, buses[i].fare);
    }
}

void cancelTicket()
{
    int busNo; 
    int seats; 
    int flag = 0;

    showAvailableBuses();

    printf("Enter Bus Number to cancel seats: ");
    scanf("%d", &busNo);

    for(int i = 0; i < 3; i++)
    {
        if(buses[i].busNo == busNo)
        {
            flag= 1;
            printf("Enter number of seats to cancel: ");
            scanf("%d", &seats);
            if(seats > 0 && buses[i].availableSeats + seats <= buses[i].totalSeats)
            {
                buses[i].availableSeats += seats;
                printf("Cancellation Successful! %d seats canceled on Bus %d\n", seats, busNo);
            }
            else
            {
                printf("Invalid number of seats!\n");
            }
            break;
        }
    }
    if(!flag)
    {
        printf("Bus not found!\n");
    }
}
