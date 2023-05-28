#include <stdio.h>

struct Person 
{
  int age;
  char name[30];
};

float averageAge(struct Person arr[], int n) {
  int sum = 0; 
  float cnt_age = n;
  for (int i = 0; i < n; i++) {
    sum += arr[i].age;
  }
  return sum / cnt_age;
}

int main() {
  int n = 2;
  struct Person arr[] = {{12, "Ivan"}, {45, "Dima"}};
  printf("%f\n", averageAge(arr, n));
  return 0;
}