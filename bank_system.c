// bank_system.c

#include "customer.h"
#include "account.h"
#include "transaction.h"

int main() {
    // Create customers
    struct Customer customer1 = {1, "Alice"};
    struct Customer customer2 = {2, "Bob"};

    // Create accounts
    struct Account account1 = {101, 1, 1000};
    struct Account account2 = {102, 2, 500};

    // Display initial balances
    printf("Initial Balances:\n");
    displayAccount(account1);
    displayAccount(account2);

    // Perform a transaction
    struct Transaction transaction = {account1, account2, 300};
    executeTransaction(&transaction);

    // Display updated balances
    printf("\nUpdated Balances:\n");
    displayAccount(account1);
    displayAccount(account2);

    return 0;
}
