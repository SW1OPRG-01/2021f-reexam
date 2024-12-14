#include <stdio.h>

int main(int argc, char** argv) {
  
  int f_height;
  int m_height;
  char c_gender;

  printf("Indtast moderens hoejde i cm: ");
  scanf("%d", &f_height);
  printf("Indtast faderens hoejde i cm: ");
  scanf("%d", &m_height);
  printf("Hvilket koen er barnet? (D for dreng, P for pige: ");
  scanf(" %c", &c_gender);

  int c_height;
  switch (c_gender)
  {
  case 'D':
   c_height = 24;
    break;
  case 'P':
    c_height = 26;
    break;
  default:
    return -1;
  }

  printf("Dit barns forventede hoejde bliver ca.: %d\n", (12 * f_height + 13 * m_height) / c_height);

  return 0;
}