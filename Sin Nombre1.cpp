#include <iostream>

int main() {
    double pi = 0.0;
    double epsilon = 1e-6; // Precisi�n deseada
    double term = 1.0;
    int denominator = 1;
    int sign = 1;

    while (true) {
        pi += sign * term;
        denominator += 2;
        term = 1.0 / denominator;
        sign = -sign;

        // Comprobar si alcanzamos la precisi�n deseada
        if (4 * term < epsilon) {
            break;
        }
    }

    pi *= 4;

    std::cout.precision(7);
    std::cout << "Valor de pi: " << pi << std::endl;

    return 0;
}

