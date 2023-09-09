#include<cs50.h>
#include<stdio.h>
int main(void)
{
  int ip,fp;
  do
  {
     ip = get_int("enter intial population : ");
  }
  while(ip<9);
  // final population needed
  do
  {
    fp = get_int("enter final population : ");
  }


  while(fp>ip);

  int inp;
  int years;
  //calculation of yrs needed for final population
  while(ip<fp)
  {
   int born = ip/3;
   int dead = ip/4;
   inp = born - dead;
   ip += inp;
   years++;

  }
  printf("years : %i \n" ,years);
}