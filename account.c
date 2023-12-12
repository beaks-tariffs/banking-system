// account.c

#include <stdio.h>
#include "account.h"

void displayAccount(struct Account account) {
    printf("Account ID: %d\n", account.accountId);
    printf("Customer ID: %d\n", account.customerId);
    printf("Balance: %.2f\n", account.balance);
}

void deposit(struct Account *account, double amount) {
    account->balance += amount;
}

void withdraw(struct Account *account, double amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    } else {
        printf("Insufficient funds\n");
    }
}
