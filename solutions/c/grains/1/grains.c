#include "grains.h"
uint64_t square(uint8_t x){
  if(x<=0){
  return 0;
  };
  return pow(2,x-1);
}
uint64_t total(){
  uint8_t n = 64;
  uint64_t sum = 0;
  for (uint8_t i=1;i<=n;i++){
    sum += square(i);
  }
  return sum;
}

