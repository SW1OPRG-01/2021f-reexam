#include "Isvaffel.h"

int main(int argc, char **argv) {
  Isvaffel waffle_1 = Isvaffel();
  waffle_1.print();

  Isvaffel waffle_2 = Isvaffel(3, 2);
  waffle_2.print();

  waffle_2.tilfoejKugle();
  waffle_2.tilfoejKugle();
  waffle_2.tilfoejKugle();
  waffle_2.print();

  waffle_1.tilfoejExtras();
  waffle_1.tilfoejExtras();
  waffle_1.tilfoejExtras();
  waffle_1.tilfoejExtras();
  waffle_1.tilfoejExtras();
  waffle_1.tilfoejExtras();
  waffle_1.print();

  return 0;
}