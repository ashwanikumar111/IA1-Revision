#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter the first number");
  scanf("%d", a);
  printf("enter the second number");
  scanf("%d", b);
}
void add (int a, int b, int *sum)
{
  *sum = a + b;
}
void output(int a, int b, int sum)
{
  printf("addition of %d and %d is %d\n", a, b, sum);
}
int main()
{
  int n1, n2, sum;
  input(&n1, &n2);
  add(n1, n2, &sum);
  output(n1, n2, sum);
  return 0;
}