// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct Account {
    int accountId;
    int customerId;
    double balance;
};

void displayAccount(struct Account account);
void deposit(struct Account *account, double amount);
void withdraw(struct Account *account, double amount);

#endif
