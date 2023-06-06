#include <stdio.h>

int main() {
    // define the expenditure data
    int expenditure[3][12] = {
        {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000},
        {1100, 2200, 3300, 4400, 5500, 6600, 7700, 8800, 9900, 11000, 12100, 13200},
        {1200, 2400, 3600, 4800, 6000, 7200, 8400, 9600, 10800, 12000, 13200, 14400}
    };

    // define the range of years to calculate the average expenditure over
    int start_year = 2020;
    int end_year = 2022;

    // calculate the total expenditure for each month and year
    int total_expenditure[12] = {0};
    int yearly_total_expenditure[end_year - start_year + 1];
    for(int i = 0; i < 3; i++) {
        yearly_total_expenditure[i] = 0;
        for(int j = 0; j < 12; j++) {
            total_expenditure[j] += expenditure[i][j];
            yearly_total_expenditure[i] += expenditure[i][j];
        }
    }

    // calculate the average expenditure for each month and year
    int num_years = end_year - start_year + 1;
    float avg_expenditure_per_month[12] = {0};
    float avg_expenditure_per_year[num_years];
    for(int i = 0; i < 12; i++) {
        avg_expenditure_per_month[i] = total_expenditure[i] / 3.0;
    }
    for(int i = 0; i < num_years; i++) {
        avg_expenditure_per_year[i] = yearly_total_expenditure[i] / 12.0;
    }

    // display the table of expenditure
    printf("Table of Expenditure\n");
    printf("Year\tMonth\tExpenditure\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            printf("%d\t%d\t%d\n", start_year + i, j+1, expenditure[i][j]);
        }
        printf("\n");
    }

    // display the average expenditure per month and year
    printf("Average Expenditure\n");
    printf("Year\tAverage Expenditure\n");
    for(int i =0; i < num_years; i++) {
        printf("%d\t%.2f\n", start_year + i, avg_expenditure_per_year[i]);
    }
    printf("Month\tAverage Expenditure\n");
    for(int i = 0; i < 12; i++) {
        printf("%d\t%.2f\n", i+1, avg_expenditure_per_month[i]);
    }

    // calculate and display the sum and average of all expenditures
    int total_sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            total_sum += expenditure[i][j];
        }
    }
    float total_avg = total_sum / (3.0 * 12);
    printf("Total Expenditure\n");
    printf("Sum: %d\n", total_sum);
    printf("Average: %.2f\n", total_avg);

    return 0;
}