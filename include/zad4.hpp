#include "zad1.hpp"

#include <vector>
using namespace std;
// tutaj funkcja obliczMake
double obliczMake(const vector<Tagliatelle>& maka){
double M=0;
int n=maka.size();
for (auto n:maka){
  M+=maka.ileMaki(n);
  n--;
}
  if(M>100)
  throw  (1);
  else if(M>50)
  throw (0.5);
else
return M;
}