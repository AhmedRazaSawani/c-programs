#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long double factorial(int n) {
    long double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate sine using series
double sine_series(double x, int terms) {
    double result = 0.0;
    for (int i = 0; i < terms; i++) {
        int power = 2 * i + 1;
        double term = pow(x, power) / factorial(power);
        if (i % 2 == 0) {
            result += term;  // Add for even terms
        } else {
            result -= term;  // Subtract for odd terms
        }
    }
    return result;
}

// Function to calculate cosine using series
double cosine_series(double x, int terms) {
    double result = 0.0;
    for (int i = 0; i < terms; i++) {
        int power = 2 * i;
        double term = pow(x, power) / factorial(power);
        if (i % 2 == 0) {
            result += term;  // Add for even terms
        } else {
            result -= term;  // Subtract for odd terms
        }
    }
    return result;
}

int main() {
    double x;
    int terms;

    // Input angle in radians and number of terms
    printf("Enter the angle in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Calculate sine and cosine
    double sine_result = sine_series(x, terms);
    double cosine_result = cosine_series(x, terms);

    // Print results
    printf("Sine(%lf) using %d terms: %lf\n", x, terms, sine_result);
    printf("Cosine(%lf) using %d terms: %lf\n", x, terms, cosine_result);

    return 0;
}
