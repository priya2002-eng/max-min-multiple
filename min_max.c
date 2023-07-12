#include <stdio.h>
int main(){
  int n1, n2, min, max, start, end;

  printf("Enter any digits and specify min and max: ");
  scanf("%d %d\n %d %d", &n1, &n2, &start, &end);

  min = (start / n1) * n1;
  if(min < start){
    min += n1;
  }

  while(min <= end){
    if(min % n2 == 0){
      printf("%d", min);
      break;
    }
    min += n1;
  }

  max = (end / n1) * n1;
  if(max > end){
    max -= n1;
  }

  while(max >= start){
    if(max % n2 == 0){
      printf("%d", max);
      break;
    }

    max -= n1;
  }

  return 0;
}
