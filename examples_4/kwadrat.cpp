#include "kwadrat.h"

#include <iostream>

using namespace std;

Kwadrat::Kwadrat(float bok) : Figura(bok*bok) {
  this->m_bok = bok;
}

Kwadrat::~Kwadrat() {
  cout << "Destruktor Kwadrat" << endl;
}
void Kwadrat::dzwiek() {
  cout << "Dzwiek kwadrat" << endl;
}
