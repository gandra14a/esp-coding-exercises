#include <stdio.h>


int main(void)
{
  int weight;
  int height;
  double bmi;

  printf("Bitte geben Sie Ihr Gewicht in kg ein:\n");
  scanf("%d", &weight);
  printf("Bitte geben Sie Ihre Körpergröße in cm ein:\n");
  scanf("%d", &height);
  bmi = weight/((height/100.0)*(height/100.0));
  printf("BMI: %.1lf\n", bmi);

  char *cat = NULL;


  if (bmi < 16.0)
    cat = "Starkes Untergewicht";
  else if (bmi >= 16.0 && bmi < 17.0)
    cat = "Mäßiges Untergewicht";
  else if (bmi >= 17.0 && bmi < 18.5)
    cat = "Leichtes Untergewicht";
  else if (bmi >= 18.5 && bmi < 25.0)
    cat = "Normalgewicht";
  else if (bmi >= 25.0 && bmi < 30.0)
    cat = "Präadipositas";
  else if (bmi >= 30.0 && bmi < 35.0)
    cat = "Adipositas Grad I";
  else if (bmi >= 35.0 && bmi < 40.0)
    cat = "Adipositas Grad II";
  else if (bmi >= 40.0)
    cat = "Adipositas Grad III";

  printf("Kategorie: %s\n", cat);

  return 0;
}