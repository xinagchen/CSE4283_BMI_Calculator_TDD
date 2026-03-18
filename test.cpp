#include "bmi.h"
#include <iostream>
#include <cassert>

int main() {
    std::cout << "Running unit tests...\n";

    // Testing calculateBMI
    assert(calculateBMI(5, 9, 150.0) == 22.1); 
    assert(calculateBMI(5, 3, 125.0) == 22.1);
    
    // Testing getBMICategory using Boundary Value Analysis
    assert(getBMICategory(18.4) == "Underweight");
    assert(getBMICategory(18.5) == "Normal weight");
    assert(getBMICategory(24.9) == "Normal weight");
    assert(getBMICategory(25.0) == "Overweight");
    assert(getBMICategory(29.9) == "Overweight");
    assert(getBMICategory(30.0) == "Obese");

    std::cout << "All tests passed successfully!\n";
    
    return 0;
}