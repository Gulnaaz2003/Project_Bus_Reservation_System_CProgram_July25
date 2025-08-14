#include <stdio.h>

struct user {
    char username[20];
    char password[20];
};

struct user users[50];
int userCount = 0;
int currentUser = 0;

void dashboard();
void userMenu();

int main()
{
    userMenu();
    return 0;
}

void dashboard()
{
    int choice;
    printf("\n----- Dashboard -----\n");
    printf("Welcome, %s!\n", users[currentUser].username);
    printf("1. View Profile\n");
    printf("2. User Menu\n");
    printf("3. Logout\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        printf("Logged out successfully.\n");
        currentUser = 0;
    }
    else
    {
        printf("Invalid option! Try again.\n");
    }
}


void userMenu()
{
    int option;
    printf("\n=== User Menu ===\n");
    printf("1. Book a Ticket\n");
    printf("2. Cancel a Ticket\n");
    printf("3. Check Bus Status\n");
    printf("4. Logout (Back to Dashboard)\n");
    printf("Choose your option: ");
    scanf("%d", &option);

    if (option == 4)
    {
        printf("Returning to Dashboard...\n");
        return; 
    }
    else
    {
        printf("Invalid Option! Try again.\n");
    }
}
