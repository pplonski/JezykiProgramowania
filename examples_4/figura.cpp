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

// operatory

Figura& Figura::operator=(const Figura &f) {
  if(&f != this)
  {
      this->m_pole = f.m_pole;
  }
  return *this;
}

Figura& Figura::operator+(const Figura &f) {
  Figura *tmp = new Figura(0);
  tmp->m_pole = this->m_pole + f.m_pole;
  return *tmp;
}

ostream& operator<<(ostream &os, const Figura &f) {
  os << " pole=" << f.m_pole;
  return os;
}

bool operator<(const Figura &f1, const Figura f2) {
  return f1.m_pole < f2.m_pole;
}
