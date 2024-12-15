#ifndef ISVAFFEL_H
#define ISVAFFEL_H

class Isvaffel {
  public:
    Isvaffel();
    Isvaffel(int antalKugler, int antalExtras);
    bool tilfoejKugle();
    bool tilfoejExtras();
    double beregnPris() const;
    void print() const;
  private: 
    int antalKugler_;
    int antalExtras_;
};

#endif