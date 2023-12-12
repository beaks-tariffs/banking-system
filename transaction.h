// transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

struct Transaction {
    struct Account sourceAccount;
    struct Account destinationAccount;
    double amount;
};

void executeTransaction(struct Transaction *transaction);

#endif
