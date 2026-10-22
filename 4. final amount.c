
#include <stdio.h>
int main() {
    float amount, discount = 0, delivery = 0, finalAmount;
    int membership;
    printf("Enter order amount: ");
    scanf("%f", &amount);
    printf("Enter membership (1 for Premium, 2 for Regular): ");
    scanf("%d", &membership);
     if (amount >= 500) {
        delivery = 0;
        if (membership == 1)
            discount = 0.10 * amount;
        else
            discount = 0;
    } 
    else {
        delivery = 50;
        discount = 0;
        }
       finalAmount = amount - discount + delivery;
    printf("final amount to pay = Rs. %f\n", finalAmount);
}
