#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int my_sqr(int number){
  register unsigned int temp, x;
  if (number < 0)
    number = -number;
  for (temp = 0, x = 1u << (sizeof(unsigned int) * 4 - 1); x; x >>= 1) {
    if ((temp | x) * (temp | x) <= number)
      temp |= x;
  }
  return temp;
}

void squareNumber(int n){
    int arrayNumber[n];
    srand(time(NULL));
    
    for(int i = 0; i < n; ++i){
        arrayNumber[i] = rand() % n;
    }
    
    for(int i = 0; i < n; ++i){
        int a = (int)(my_sqr(arrayNumber[i]));
        if(arrayNumber[i] - a * a == 0){
            printf("%d\n",arrayNumber[i]);
        }
    }
}

int main(int argc, const char * argv[]) {
    int n = 0;
    printf("%s", "enter array size\n");
    scanf("%d", &n);
    squareNumber(n);
    return 0;
}
