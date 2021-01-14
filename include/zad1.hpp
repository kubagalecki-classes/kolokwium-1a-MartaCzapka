#include "catch.hpp"
#include<iostream>
using namespace std;
class Tagliatelle{
  private:
  double L;
  double W;
  double R;
  static const double C;
  public:
  Tagliatelle(double l, double w, double r):L(l),W(w),R(r){};
  Tagliatelle():L(0.5),W(0.5),R(0.5){};
  double ileMaki(unsigned P) const {
    return P*L*W*(1.-R)*C;
    
  }
};
// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
