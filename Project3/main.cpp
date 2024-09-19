#include <iostream>

int main() {
    float num1, num2, result;
    char znak;
    std::cout << "Napishite pervoe chislo: ";
    std::cin >> num1;

    std::cout << "Napishite Znak (+, -, *, /, %): ";
    std::cin >> znak;

    std::cout << "Napishite vtoroe chislo: ";
    std::cin >> num2;

    if (znak== '+') {
        result = num1 + num2;
        std::cout << "Rezultat: " << result << std::endl;
    }
    else if (znak== '-') {
        result = num1 - num2;
        std::cout << "Rezultat: " << result << std::endl;
    }
    else if (znak == '*') {
        result = num1 * num2;
        std::cout << "Rezultat: " << result << std::endl;
    }
    else if (znak== '/') {
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Rezultat: " << result << std::endl;
        }
        else {
            std::cout << "Oshibka: delenie nevozmohno na 0" << std::endl;
        }
    }
    else if (znak== '%') {
        result = num1 * (num2 / 100.0);
        std::cout << "Rezultat: " << result << std::endl;
    }
    else {
        std::cout << "Oshibka: ne tot znak" << std::endl;
    }

    return 0;
}