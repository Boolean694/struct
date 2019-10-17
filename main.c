#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct rollingStock {int topSpeed; char *model;};
const char *models[5] = {"R32", "R44", "M8", "R143", "DE30AC"};
int speeds[5] = {55, 87, 125, 60, 100};

int retRandomVal() {
  srand(time(NULL));
  int ra = rand() % 5;
  struct rollingStock s1;
  s1.topSpeed = speeds[ra];
  s1.model = models[ra];
  printf("s1: {%s, %d mph}\n", s1.model, s1.topSpeed);
  printf("Model: %s\n", s1.model);
  printf("Top Speed: %d mph\n", s1.topSpeed);
  return 0;
}
char *retModel() {
  srand(time(NULL));
  int ra = rand() % 5;
  struct rollingStock s1;
  s1.model = models[ra];
  printf("Model: %s\n", s1.model);
  return s1.model;
}

int retSpeed() {
  srand(time(NULL));
  int ra = rand() % 5;
  struct rollingStock s1;
  s1.topSpeed = speeds[ra];
  printf("Top Speed: %d mph\n", s1.topSpeed);
  return s1.topSpeed;
}

int chgSpeed() {
  int c;
  srand(time(NULL));
  int ra = rand() % 5;
  printf("Change top speed of %s to (enter int): \n", models[ra]);
  scanf("%d", &c);
  speeds[ra] = c;
  printf("New top speed for %s model: %d mph\n", models[ra], speeds[ra]);
  return c;
}

int main() {
  retRandomVal();
  //retModel();
  //retSpeed();
  chgSpeed();
}
