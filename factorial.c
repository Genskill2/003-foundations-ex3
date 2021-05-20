#include <assert.h>
#include <stdio.h>
#include <cs50.h>


int factorial(int);

int main(void) {
  assert (factorial(11) == 39916800);
  assert (factorial(5) == 120);
  assert (factorial(0) == 1);
  }

