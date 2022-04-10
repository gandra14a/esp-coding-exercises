#include <stdio.h>

int main(void)
{
  double first_number = 0;
  double second_number = 0;
  double third_number = 0;

  printf("Insert first number: ");
  scanf("%lf", &first_number);
  printf("Insert second number: ");
  scanf("%lf", &second_number);
  printf("Insert third number: ");
  scanf("%lf", &third_number);

  double mean = (first_number + second_number + third_number) / 3;
  double min;
  double max;

  max = first_number > second_number ? first_number : second_number;
  max = third_number > max ? third_number : max;

  min = first_number < second_number ? first_number : second_number;
  min = third_number < min ? third_number : min;

  printf("Mean: %.2lf\n", mean);
  printf("Min: %.2lf\n", min);
  printf("Max: %.2lf\n", max);

  return 0;
}

