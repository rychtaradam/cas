#include <iostream>

#include "Cas.h"

int main() {
    Cas c1; // Konstruktor bez param.
    Cas c2(00, 00, 01); // Konstruktor s param.
    Cas c3(23, 59, 59); // Konstruktor s param.
    //Cas c4(c1);


    std::cout << "Objekt vytvořený výchozím konstruktorem c1: ";
    c1.vypsatCas();
    std::cout << ", ";
    c1.vypsatPocetSekundOdPulnoci();
    std::cout << "." << std::endl;

    std::cout << "Objekt vytvořený konstruktorem s parametry c2: ";
    c2.vypsatCas();
    std::cout << ", ";
    c2.vypsatPocetSekundOdPulnoci();
    std::cout << "." << std::endl;

    std::cout << "Objekt vytvořený konstruktorem s parametry c3: ";
    c3.vypsatCas();
    std::cout << ", ";
    c3.vypsatPocetSekundOdPulnoci();
    std::cout << "." << std::endl;

    /*std::cout << "Objekt vytvořený kopírovacím konstruktorem c4: ";
    c4.vypsatCas();
    std::cout << ", ";
    c4.vypsatPocetSekundOdPulnoci();
    std::cout << "." << std::endl;*/

    return 0;
}
