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
  while(fp>ip);

  //calculation of yrs needed for final population
  while(ip<fp)
  {
    
  }
}