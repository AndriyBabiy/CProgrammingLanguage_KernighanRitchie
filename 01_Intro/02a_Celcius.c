#include <stdio.h>

int main() 
{
  float fahr, celc;
  float lower, higher, step;

  lower = -20;
  higher = 300;
  step = 20;

  printf("Celcius to Fahrenheit\n");

  celc = lower;
  while (celc <= higher) 
  {
    fahr = (celc) * (9.0/5.0) + 32.0;
    printf("%7.0f %13.1f\n", celc, fahr);
    celc += step;
  }
}