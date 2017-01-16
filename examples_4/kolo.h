#pragma once
#include "figura.h"

class Kolo: public Figura {
public:
  Kolo(float promien);
  virtual ~Kolo();
  virtual void dzwiek();
private:
  float m_promien;

};
