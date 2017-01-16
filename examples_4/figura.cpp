#include "figura.h"

#include <iostream>

using namespace std;

Figura::Figura(float pole) {
  cout << "Konstruktor Figura" << endl;
  this->m_pole = pole;
}
Figura::~Figura() {
  cout << "Destruktor Figura" << endl;
}

void Figura::setPole(float pole) {
  this->m_pole = pole;
}

float Figura::getPole() {
  return this->m_pole;
}

void Figura::dzwiek() {
  cout << "Figura bez dzwieku" << endl;
}
