#include <stdio.h>

int main() 
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celcius\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%7.0f %13.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}