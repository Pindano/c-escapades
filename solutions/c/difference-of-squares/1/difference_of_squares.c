#include "difference_of_squares.h"
unsigned int sum_of_squaress = 0;
unsigned int square_of_summ = 0;
unsigned int i;


unsigned int sum_of_squares(unsigned int number){
  for(i=0;i<number;number--){
    sum_of_squaress += (number*number);
  } 
  return sum_of_squaress;
}


unsigned int square_of_sum(unsigned int number){
  for(i=0; i<number; number--){
    square_of_summ += number;
  }
  return square_of_summ * square_of_summ;
}


unsigned int difference_of_squares(unsigned int number){
  return square_of_sum(number) - sum_of_squares(number);
}
