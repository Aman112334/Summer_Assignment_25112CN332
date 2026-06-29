#include <stdio.h>

struct Product {
    int p_code;
    char p_name[50];
    int stock;
    float price;
};

int main() {
    struct Product shop[100];
    int t_items = 0, opt;

    while(1) {
        printf("\n--- Store Inventory Menu ---\n");
        printf("1. Add Product\n");
        printf("2. View All Products\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &opt);

        if(opt == 1) {
            printf("Enter Product Code: ");
            scanf("%d", &shop[t_items].p_code);
            printf("Enter Product Name: ");
            scanf(" %[^\n]s", shop[t_items].p_name);
            printf("Enter Stock Quantity: ");
            scanf("%d", &shop[t_items].stock);
            printf("Enter Price: ");
            scanf("%f", &shop[t_items].price);
            
            t_items++;
            printf("-> Item added to inventory!\n");
        }
        else if(opt == 2) {
            printf("\nCode\tName\t\tStock\tPrice\n");
            printf("----------------------------------------------\n");
            for(int i = 0; i < t_items; i++) {
                printf("%d\t%s\t\t%d\t%.2f\n", 
                       shop[i].p_code, shop[i].p_name, shop[i].stock, shop[i].price);
            }
        }
        else if(opt == 3) {
            printf("Closing system...\n");
            break;
        }
        else {
            printf("Invalid selection.\n");
        }
    }
    return 0;
}