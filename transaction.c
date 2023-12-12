// transaction.c

#include <stdio.h>
#include "transaction.h"

void executeTransaction(struct Transaction *transaction) {
    if (transaction->sourceAccount.balance >= transaction->amount) {
        transaction->sourceAccount.balance -= transaction->amount;
        transaction->destinationAccount.balance += transaction->amount;
        printf("Transaction successful\n");
    } else {
        printf("Transaction failed: Insufficient funds\n");
    }
}
