#include "Isvaffel.h"
#include <iostream>

Isvaffel::Isvaffel(): antalKugler_(1), antalExtras_(0) { }

Isvaffel::Isvaffel(int antalKugler, int antalExtras) {
  if(antalKugler > 5) {
    antalKugler_ = 1;
  } else {
    antalKugler_ = antalKugler;
  }
  
  if(antalExtras > 5) {
    antalExtras_ = 1;
  } else {
    antalExtras_ = antalExtras;
  }
}

bool Isvaffel::tilfoejKugle() {
  if(antalKugler_ < 5) {
    antalKugler_++;
    return true;
  }
  return false;
}

bool Isvaffel::tilfoejExtras() {
  if(antalExtras_ < 5) {
    antalExtras_++;
    return true;
  }
  return false;
}

double Isvaffel::beregnPris() const {
  return 10 + (antalKugler_ * 10) + (antalExtras_ * 5);
}

void Isvaffel::print() const {
  std::cout << "Isvaffel med " << antalKugler_ << " kugle"
            << (antalKugler_ > 1 ? "r" : "") << " og " << antalExtras_ << " extra ting, " 
            << "pris: " << beregnPris() << " kr." << std::endl;

}