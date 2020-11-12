#include <stdio.h>

int sum(int number[]  , int n ){
  int sum = 0;
  int i;
for (i = 0; i < n; i++) {
  printf("%d\n ",number[i]);
 sum += number[i]; 
}
printf("the sum is");
  printf("%d" , sum);

  return 0;
}

int main() {
  int number[20];
  int i , j , a  ;
  int n =0;
 printf("enter 20 numbers");
  for (int i = 0; i < 20; i++) {
        int  check = 1;
        scanf("%d",&a);
        for(j = 0; j < i; j++)
        {
            if(number[j] == a)
                check = 0;
        }
  
        if (check==1) { 
          number[n] = a;
            n++;
           } 
    }
    printf("numbers is \n ");
    sum(number,n);



 return 0;
}