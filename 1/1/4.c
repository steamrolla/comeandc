#include <stdio.h>

main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("%10s %7s\n", "Celsius", "Fahrenheit");

  celsius = lower;
  while(celsius <= upper){
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%10.0f %7.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
