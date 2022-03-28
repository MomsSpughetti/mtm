#include <stdio.h>
#include <stdlib.h>


double log2(double num){
    if(num <= 1)
      return num-1;
    return log2(num / 2) + 1;
}

int valid(int s){
    return (s <= 0)? 0 : 1;
}
 int main(){
     printf("Enter size of input:\n");
     int size_of_input;
     scanf("%d",&size_of_input);

     if(!valid(size_of_input)){
         printf("Invalid size");
         return 0;
     }

     int *numbers = (int*)malloc(size_of_input * sizeof(int));
     printf("Enter numbers:\n");
     for (int i = 0; i < size_of_input; i++)
        {
              
          if(scanf("%d", &numbers[i]) != 1)
          {
            printf("Invalid number\n");
            return 0; 
          }
        }
        double log_2;
        int log_2_int;
        int sum = 0;
     for (int i = 0; i < size_of_input; i++)
     {
       if(numbers[i] < 0)
       continue;
        log_2 = log2(numbers[i]);
        log_2_int = (int)log_2;
        if(log_2 == log_2_int ){
            sum += log_2;
            printf("The number %d is a power of 2: %d = 2^%d\n", numbers[i], numbers[i], log_2_int);
        }
     }
      printf("Total exponent sum is %d\n", sum);
     
}