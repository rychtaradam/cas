//
// Created by rosta on 18.12.2020.
//

#ifndef CAS_CAS_H
#define CAS_CAS_H

#include <iostream>
#include <string>
#include <vector>
#include <chrono>

class Cas {
public:
    Cas();
    Cas(int h, int m, int s);
    ~Cas();

    void vypsatCas();
    void vypsatPocetSekundOdPulnoci();

    void nastavitCas(int hodin, int minut, int sekund);
    void nastavitCasZSekund(int s);


private:
    int h = NULL;
    int m = NULL;
    int s = NULL;

    std::vector<int> ziskatSystemovyCas();
    void nastavitSystemovyCas();
    int ziskatSekundyOdPulnoci();
};


#endif //CAS_CAS_H
