#include <stdio.h>

int main() {
    int balance = 1000;
    int choice;
    int amount;

    puts("ATM Transaction Menu\n");
    puts("1. Check Balance");
    puts("2. Withdraw Cash");
    puts("3. Deposit Cash");
    puts("4. Exit");
    puts("Please enter your choice (1-4): ");

    scanf("%d", &choice);

    if (choice == 1) {
        printf("Your account balance is: %d\n", balance);
    }
    else if (choice == 2) {
        puts("Enter withdraw amount: ");
        scanf("%d", &amount);

        if (amount <= balance) {
            balance -= amount;
            printf("Withdraw successful. New balance: %d\n", balance);
        } else {
            puts("Insufficient balance");
        }
    }
    else if (choice == 3) {
        puts("Enter deposit amount: ");
        scanf("%d", &amount);

        balance += amount;
        printf("Now your balance is: %d\n", balance);
    }
    else if (choice == 4) {
        puts("Exiting...");
    }
    else {
        puts("Please enter a valid number (1-4).");
    }

    return 0;
}
