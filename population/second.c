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
}