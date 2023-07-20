#include <stdio.h>

int main() {
    
    int pizzaQty = 0, burgerQty = 0, dosaQty = 0, idliQty = 0;
    float pizzaPrice = 180.0, burgerPrice = 100.0, dosaPrice = 120.0, idliPrice = 50.0;
    float totalCost=0.0;
    char choice;

    do {
        
        printf("Food Items Available:\n");
        printf("1. Pizza - $%.2f\n", pizzaPrice);
        printf("2. Burger -$%.2f\n", burgerPrice);
        printf("3. Dosa - $%.2f\n", dosaPrice);
        printf("4. Idli - $%.2f\n", idliPrice);

        
        int option;
        printf("Enter the number of the item you want to order: ");
        scanf("%d", &option);
        if(option==1)
        {
        	printf("you have selected pizza\n");
		}
		else if(option==2)
		{
			printf("you have selected burger\n");
		}
		else if(option==3)
		{
			printf("you have selected dosa\n");
		}
		else if(option==4)
		{
			printf("you have selected idli\n ");
		}
		else
		{
			printf("invalid option!!!\n");
		}
        
        
        int quantity;
        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        
        switch (option) {
            case 1:
                pizzaQty += quantity;
                totalCost += pizzaPrice * quantity;
                printf("amount: $%.2f\n", totalCost);
                printf("Total amount is: $%.2f\n", totalCost);
                break;
            case 2:
                burgerQty += quantity;
                totalCost += burgerPrice * quantity;
                printf("amount:%d -$%.2f\n", burgerQty, burgerPrice * burgerQty);
                printf("Total amount is: $%.2f\n", totalCost);
                break;
            case 3:
                dosaQty += quantity;
                totalCost += dosaPrice * quantity;
                printf("amount:%d - $%.2f\n", dosaQty, dosaPrice * dosaQty);
                printf("Total amount is: $%.2f\n", totalCost);
                break;
            case 4:
                idliQty += quantity;
                totalCost += idliPrice * quantity;
                printf("amount:%d - $%.2f\n", idliQty, idliPrice * idliQty);
                printf("Total amount is: $%.2f\n", totalCost);
                break;
            default:
                printf("Invalid option!\n");
                break;
        }

        
        printf("Do you want to select more items? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Print the final bill
    printf("\n----- Final Bill -----\n");
    printf("Pizza:%d - $%.2f\n", pizzaQty, pizzaPrice * pizzaQty);
    printf("Burger:%d -$%.2f\n", burgerQty, burgerPrice * burgerQty);
    printf("Dosa:%d - $%.2f\n", dosaQty, dosaPrice * dosaQty);
    printf("Idli:%d - $%.2f\n", idliQty, idliPrice * idliQty);
    printf("----------------------\n");
    printf("Total bill is: $%.2f\n", totalCost);

    return 0;
}

