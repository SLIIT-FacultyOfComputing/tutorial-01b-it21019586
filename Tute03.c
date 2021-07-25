/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;
  float num,tot;
  printf("How many numbers are entered?");
  scanf("%d",&n);
  for(int x=1;x<=n;x++)
  {
    printf("Enter the numbers:");
    scanf("%f",&num);
    tot=tot+num;
  }
  printf("Total is %.1f",tot);
  
  return 0;
}

