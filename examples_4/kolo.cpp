#include "kolo.h"

#include <iostream>

using namespace std;

Kolo::Kolo(float promien) : Figura(3.14*promien*promien) {
  this->m_promien = promien;
}

Kolo::~Kolo() {
  cout << "Destruktor Kolo" << endl;
}

void Kolo::dzwiek() {
  cout << "Dzwiek kolo" << endl;
}
