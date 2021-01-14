#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template<typename T>
void sortujTagliatelle(T begin,T end){
  return sort(begin,end,[](const Tagliatelle& a,const Tagliatelle&  b){return a.ileMaki(1)>b.ileMaki(1);});
}