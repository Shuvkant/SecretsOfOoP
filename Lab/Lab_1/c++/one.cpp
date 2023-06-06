#include <iostream>

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
    std::cout << "Table of Expenditure" << std::endl;
    std::cout << "Year\tMonth\tExpenditure" << std::endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            std::cout << start_year + i << "\t" << j+1 << "\t" << expenditure[i][j] << std::endl;
        }
        std::cout << std::endl;
    }

    // display the average expenditure per month and year
    std::cout << "Average Expenditure" << std::endl;
    std::cout << "Year\tAverage Expenditure" << std::endl;
    for(int i = 0; i < num_years; i++) {
        std::cout << start_year + i << "\t" << avg_expenditure_per_year[i] << std::endl;
    }
    std::cout << "Month\tAverage Expenditure" << std::endl;
    for(int i = 0; i < 12; i++) {
        std::cout << i+1 << "\t" << avg_expenditure_per_month[i] << std::endl;
    }

    // calculate and display the sum and average of all expenditures
    int total_sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            total_sum += expenditure[i][j];
        }
    }
    float total_avg = total_sum / (3.0 * 12);
    std::cout << "Total Expenditure" << std::endl;
    std::cout << "Sum: " << total_sum << std::endl;
    std::cout << "Average: " << total_avg << std::endl;

    return 0;
}
