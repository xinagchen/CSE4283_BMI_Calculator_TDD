#include "bmi.h"
#include <iostream>

int main() {
    int feet, inches;
    double weight;

    std::cout << "--- BMI Calculator ---\n";
    std::cout << "Enter height (feet): ";
    std::cin >> feet;
    std::cout << "Enter height (inches): ";
    std::cin >> inches;
    std::cout << "Enter weight (pounds): ";
    std::cin >> weight;

    double bmi = calculateBMI(feet, inches, weight);
    std::string category = getBMICategory(bmi);

    std::cout << "\nResults:\n";
    std::cout << "BMI Value: " << bmi << "\n";
    std::cout << "Category: " << category << "\n";

    return 0;
}