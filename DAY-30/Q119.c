#include <stdio.h>

struct WorkerData {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct WorkerData w_list[50];
    int n = 0, choice;

    while(1) {
        printf("\n--- Mini Employee Manager ---\n");
        printf("1. Add Staff\n");
        printf("2. Show Highest Paid Employee\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("ID: "); scanf("%d", &w_list[n].id);
            printf("Name: "); scanf(" %[^\n]s", w_list[n].name);
            printf("Salary: "); scanf("%f", &w_list[n].salary);
            n++;
            printf("-> Saved.\n");
        }
        else if(choice == 2) {
            if(n == 0) {
                printf("-> Database is empty.\n");
                continue;
            }
            int max_idx = 0;
            for(int i = 1; i < n; i++) {
                if(w_list[i].salary > w_list[max_idx].salary) {
                    max_idx = i;
                }
            }
            printf("\n--- Highest Earner ---\n");
            printf("Name: %s (ID: %d) with Salary: Rs %.2f\n", 
                   w_list[max_idx].name, w_list[max_idx].id, w_list[max_idx].salary);
        }
        else if(choice == 3) {
            break;
        }
    }
    return 0;
}