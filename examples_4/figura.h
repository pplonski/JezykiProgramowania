#pragma once
#include <iostream>
using namespace std;

class Figura {
public:
  Figura(float pole);
  virtual ~Figura();
  void setPole(float pole);
  float getPole();

  virtual void dzwiek();

  // operatory
  Figura& operator=(const Figura &f);
  Figura& operator+(const Figura &f);

  friend ostream& operator<<(ostream &os, const Figura &f);
  friend bool operator<(const Figura &f1, const Figura f2);

protected:
  float m_pole;

};
