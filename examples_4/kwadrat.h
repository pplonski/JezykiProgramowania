#pragma once
#include "figura.h"
class Kwadrat: public Figura {
public:
  Kwadrat(float bok);
  ~Kwadrat();
  virtual void dzwiek();
private:
  float m_bok;

};
