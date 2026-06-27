#include <stdio.h>

int main() {
    int emp_id;
    char emp_name[50];
    float basic_pay, da, hra, pf, gross_pay, net_pay;

    printf("--- Salary Calculation System ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);
    
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp_name);
    
    printf("Enter Basic Salary: Rs ");
    scanf("%f", &basic_pay);

    // Standard percentage calculations
    da = (50.0 / 100.0) * basic_pay; 
    hra = (20.0 / 100.0) * basic_pay;
    pf = (12.0 / 100.0) * basic_pay;  

    // Final equations
    gross_pay = basic_pay + da + hra;
    net_pay = gross_pay - pf;

    // Printing the stylized Salary Slip
    printf("\n==================================\n");
    printf("          SALARY SLIP             \n");
    printf("==================================\n");
    printf("Employee ID   : %d\n", emp_id);
    printf("Name          : %s\n", emp_name);
    printf("----------------------------------\n");
    printf("Basic Pay     : Rs %.2f\n", basic_pay);
    printf("DA (50%%)      : Rs %.2f\n", da);
    printf("HRA (20%%)     : Rs %.2f\n", hra);
    printf("----------------------------------\n");
    printf("Gross Salary  : Rs %.2f\n", gross_pay);
    printf("PF Deduction  : Rs %.2f\n", pf);
    printf("----------------------------------\n");
    printf("NET SALARY    : Rs %.2f\n", net_pay);
    printf("==================================\n");

    return 0;
}