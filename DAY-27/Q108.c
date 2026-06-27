#include <stdio.h>

int main() {
    char stu_name[50];
    int r_no;
    float sub1, sub2, sub3, sub4, sub5;
    float total_mks, perc;
    char final_grade;

    printf("--- Marksheet Generator ---\n");
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", stu_name);
    printf("Enter Roll Number: ");
    scanf("%d", &r_no);

    printf("\nEnter marks for 5 subjects (out of 100):\n");
    printf("Physics: ");
    scanf("%f", &sub1);
    printf("Chemistry: ");
    scanf("%f", &sub2);
    printf("Maths: ");
    scanf("%f", &sub3);
    printf("English: ");
    scanf("%f", &sub4);
    printf("Computer Science: ");
    scanf("%f", &sub5);

    total_mks = sub1 + sub2 + sub3 + sub4 + sub5;
    perc = (total_mks / 500.0) * 100.0;

    // Grading ladder
    if(perc >= 90) { 
        final_grade = 'A'; 
    }
    else if(perc >= 75) { 
        final_grade = 'B'; 
    }
    else if(perc >= 60) { 
        final_grade = 'C'; 
    }
    else if(perc >= 40) { 
        final_grade = 'D'; 
    }
    else { 
        final_grade = 'F'; 
    }

    // Printing the Final Marksheet
    printf("\n========================================\n");
    printf("           OFFICIAL MARKSHEET           \n");
    printf("========================================\n");
    printf("Name       : %s\n", stu_name);
    printf("Roll No    : %d\n", r_no);
    printf("----------------------------------------\n");
    printf("Physics    : %.2f\n", sub1);
    printf("Chemistry  : %.2f\n", sub2);
    printf("Maths      : %.2f\n", sub3);
    printf("English    : %.2f\n", sub4);
    printf("Comp Sci   : %.2f\n", sub5);
    printf("----------------------------------------\n");
    printf("Total Marks: %.2f / 500.00\n", total_mks);
    printf("Percentage : %.2f %%\n", perc);
    printf("Grade      : %c\n", final_grade);
    printf("========================================\n");

    return 0;
}