#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number){
    unsigned int sum_of_squaress = 0;
    unsigned int square=0;


    for(unsigned int i = 0;i<number+1;i++){
        square = i*i;
        sum_of_squaress += square;
    }
    
    return sum_of_squaress;
}


unsigned int square_of_sum(unsigned int number){
  unsigned int square_of_summ =0;
  for(unsigned int i=1; i<=number; i++){
    square_of_summ += i;
  }
  return (square_of_summ * square_of_summ);
}



