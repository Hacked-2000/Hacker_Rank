#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a=0,b=0,c=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(((i&j)>a)&&((i&j)<k))
          a=i&j;
          if(((i|j)>b)&&((i|j)<k))
          b=i|j;
          if(((i^j)>c)&&((i^j)<k))
          c=i^j;
      }
  }
  printf("%d\n%d\n%d\n",a,b,c);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
