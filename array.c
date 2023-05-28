#include <stdio.h>

#define MAX_ACCOUNTS 100

struct BankAccount {
    int accountNumber;
    float balance;
};

struct BankAccount accounts[MAX_ACCOUNTS];
int numAccounts = 0;

void createAccount() {
    if (numAccounts >= MAX_ACCOUNTS) {
        printf("Maximum number of accounts reached.\n");
        return;
    }

    printf("Enter the account number: ");
    scanf("%d", &accounts[numAccounts].accountNumber);

    printf("Enter the initial balance: ");
    scanf("%f", &accounts[numAccounts].balance);

    numAccounts++;
    printf("Account created successfully.\n");
}

void deposit() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;
            printf("Amount deposited successfully.\n");
            return;
        }
    }

    printf("Account not found.\n");
}

void withdraw() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}

void checkBalance() {
    int accountNumber;
    int i;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n-- Bank System Menu --\n");
        printf("1. Create an account\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Check account balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

