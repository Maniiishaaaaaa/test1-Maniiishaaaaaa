#include<stdio.h>
int input()
{
  int a;
  printf("enter three numbers\n");
  scanf("%d", &a);
  return a;
}
int calc(int m,int n,int o)
{
  int large;
  if(m>n)
  {
    if(m>o)
    large=m;
    else
    large=0;
    }
    else
    {
      if(n>o)
      large=n;
      else
      large=o;
    }
    return large;
}
int output(int p)
{
  printf("largest number is %d",p);
}
int main()
{
  int a,b,c,s;
  a=input();
  b=input();
  c=input();
  s=calc(a,b,c);
  output(s);
  return 0;
}