#pragma once

class Figura {
public:
  Figura(float pole);
  virtual ~Figura();
  void setPole(float pole);
  float getPole();

  virtual void dzwiek();

protected:
  float m_pole;

};
