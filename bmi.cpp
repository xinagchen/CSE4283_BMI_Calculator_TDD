#include "bmi.h"
#include <cmath>

double calculateBMI(int feet, int inches, double weightLbs) {
    int totalInches = (feet * 12) + inches;
    if (totalInches <= 0 || weightLbs <= 0) return 0.0; 
    
    // Standard BMI formula
    double bmi = (weightLbs / (totalInches * totalInches)) * 703.0;
    
    // Round to 1 decimal place
    return std::round(bmi * 10.0) / 10.0;
}

// ORIGINAL CORRECT CODE 

std::string getBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        return "Normal weight";
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        return "Overweight";
    } else { 
        return "Obese";
    }
}


/*
// INDUCED BUG: shifted lower boundary of Normal weight by 0.1
std::string getBMICategory(double bmi) {
    if (bmi < 18.6) { // Shifted from 18.5 to 18.6
        return "Underweight";
    } else if (bmi >= 18.6 && bmi <= 24.9) { // Shifted from 18.5 to 18.6
        return "Normal weight";
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        return "Overweight";
    } else { 
        return "Obese";
    }
}
    */