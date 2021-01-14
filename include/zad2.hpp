#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>


class Penne:public Makaron{
public:
double ileMaki(unsigned P) const{
  return (double)P;
}
};
// tutaj klasa Penne

// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(string a){
if(a.front()==a.back())
{
  return new Tagliatelle(3.14,0.42,0.1);
}
else
return new Penne;
  }
 