// customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

struct Customer {
    int customerId;
    char name[50];
};

void displayCustomer(struct Customer customer);

#endif
