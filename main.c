#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {

  int i;
  int num2, num;
  int num3;

  srand(time(NULL));  

  num = rand() % 8;
  num2 = (rand()  % 10)/2;
  num3 = -1 + rand()% 8;
  printf("\n %d  %d %d ", num, num2, num3);
  //num2 = num2 +1;
  printf("\ndepois %d  %d  %d", num, num2, num3);
  
/*
  
 for (i=0; i<10;i++){

    num2[i]= 1 + rand()%3;
    
    num3[i]= 1 + rand()%8;
    printf("\n %d  %d", num2[i], num3[i]);
  }

*/
  
  return 0;
}