#include <stdio.h>
#include <string.h>
float a=0;
int b=0;
float c=0;
float sum=1;
int y=0;

float fc(float a,int b){
  for(int i=0;i<b;i++){
    sum = sum*a;
  }
  return sum;
}

int main(void) {
  printf("Enter Base : ");
  scanf("%f",&a);
  printf("Enter Exponent : ");
  scanf("%f",&c);
   
  y = (int) (c);
  if(c==y){
    b = (int)(c);
    fc(a,b);
    printf("Answer is %f",sum);
  }else{
    printf("Not Process");
  }
}