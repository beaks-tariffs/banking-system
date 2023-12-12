// customer.c

#include <stdio.h>
#include "customer.h"

void displayCustomer(struct Customer customer) {
    printf("Customer ID: %d\n", customer.customerId);
    printf("Name: %s\n", customer.name);
}
