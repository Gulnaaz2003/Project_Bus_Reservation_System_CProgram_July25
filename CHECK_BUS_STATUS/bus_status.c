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

void checkBusStatus();

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

    checkBusStatus();
    return 0;
}

void checkBusStatus()
{
    int busNo, 
    flag = 0;

    printf("Enter Bus Number to check status: ");
    scanf("%d", &busNo);

    for(int i = 0; i < 3; i++)
    {
        if(buses[i].busNo == busNo)
        {
            flag = 1;
            printf("\n--- Bus Status ---\n");
            printf("Bus Number: %d\n", buses[i].busNo);
            printf("Source: %s\n", buses[i].source);
            printf("Destination: %s\n", buses[i].destination);
            printf("Total Seats: %d\n", buses[i].totalSeats);
            printf("Available Seats: %d\n", buses[i].availableSeats);
            printf("Fare: %.2f\n", buses[i].fare);
            break;
        }
    }
    if(!flag)
    {
        printf("Bus not found!\n");
    }
}
