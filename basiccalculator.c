#include <stdio.h>
int main()
{
  char x;
  int a,b,res;
  //printf("Enter a symbol:\n");
  scanf("%c",&x);
  //printf("enter value of a:\n");
  scanf("%d",&a);
  //printf("enter value of b:\n");
  scanf("%d",&b);
  if(x=='+')
  
  {
    res=a+b;
  printf("sum of two number is: %d\n",res);
  }
  else if(x=='-')
  {
  res=a-b;
  printf("difference of two numbers is: %d\n",res);
  }
  else if(x=='*')
  {
  res=a*b;
  printf("multiplication of two numbers is: %d\n",res);
  }
  else if(x=='/')
  {
  res=a/b;
  printf("division of two numbers is: %d\n",res);
  }
  else
  {
  res=a%b;
  printf("module of two numbers is: %d\n",res);
  }
  return 0;
}
