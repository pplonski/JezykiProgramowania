#include "figura.h"
#include "kolo.h"
#include "kwadrat.h"

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  Figura *f1 = new Figura(1.0);
  Figura *k1 = new Kolo(1.0);
  Figura *s1 = new Kwadrat(1.0);

  cout << "---------------------------" << endl;
  vector<Figura *> zbior;
  zbior.push_back(f1);
  zbior.push_back(k1);
  zbior.push_back(s1);

  float total_pole = 0;
  for(unsigned int i = 0; i < zbior.size(); ++i) {
    zbior[i]->dzwiek();
    total_pole += zbior[i]->getPole();
  }

  cout << "Calkowite pole figur " << total_pole << endl;
  //f1->dzwiek();
  //s1->dzwiek();
  //k1->dzwiek();
  cout << "---------------------------" << endl;

  // operatory
  Figura f2(10);
  Figura f3(5);

  Figura f4 = f2;
  Figura f5 = f2 + f3;

  cout << "f2" << f2 << endl;
  cout << "f3" << f3 << endl;
  cout << "f4" << f4 << endl;
  cout << "f5" << f5 << endl;

  if(f3 < f2) {
    cout << "f2 > f3" << endl;
  } else {
    cout << "f2 < f3" << endl;
  }

  delete f1;
  delete k1;
  delete s1;

  return 0;
}
