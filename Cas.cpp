//
// Created by rosta on 18.12.2020.
//

#include "Cas.h"

Cas::Cas() {
    nastavitSystemovyCas();
}

Cas::Cas(int hodin, int minut, int sekund) {
    if(hodin < 0 || hodin > 23 || minut < 0 || minut > 59 || sekund < 0 || sekund > 59) {
        std::cout << "Neplatné hodnoty, nastavuju systémový čas..." << std::endl;

        nastavitSystemovyCas();
    } else {
        h = hodin;
        m = minut;
        s = sekund;
    }
}

Cas::~Cas() {

}

void Cas::vypsatCas() {
    std::cout << h << ":" << m << ":" << s;
}

void Cas::vypsatPocetSekundOdPulnoci() {
    std::cout << ziskatSekundyOdPulnoci();
}

void Cas::nastavitCas(int hodin, int minut, int sekund) {
    if(hodin < 0 || hodin > 23 || minut < 0 || minut > 59 || sekund < 0 || sekund > 59) {
        std::cout << "Neplatné hodnoty, nastavuju systémový čas..." << std::endl;

        nastavitSystemovyCas();
    } else {
        h = hodin;
        m = minut;
        s = sekund;
    }
}

void Cas::nastavitCasZSekund(int s) {
    //NASTAVIT ČAS Z SEKUND
}




std::vector<int> Cas::ziskatSystemovyCas() {
    auto casRaw = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    tm *cas = localtime(&casRaw);

    std::vector<int> systemovyCas;
    systemovyCas.push_back(cas->tm_hour);
    systemovyCas.push_back(cas->tm_min);
    systemovyCas.push_back(cas->tm_sec);

    return systemovyCas;
}

void Cas::nastavitSystemovyCas() {
    std::vector<int> systemovyCas = ziskatSystemovyCas();

    h = systemovyCas[0];
    m = systemovyCas[1];
    s = systemovyCas[2];
}

int Cas::ziskatSekundyOdPulnoci() {
    return 86400;
}