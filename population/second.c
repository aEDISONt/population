#include<cs50.h>
#include<stdio.h>
int main(void)
{
  do
  {
    printf("enter intial population : ");
    int ip = get_int();
  }
  while(ip<9);
  // final population needed
  do
  {
    printf("enter final population : ");
    int fp = get_int();
  }
  int years;

  while(fp>ip);

  //calculation of yrs needed for final population
  while(ip<fp)
  {
   int born = ip/3;
   int dead = ip/4;
   int in_e_yr = born - dead;
  }
}