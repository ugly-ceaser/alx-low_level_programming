#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX students.
 *
 * Return: Always 0.
 */
int main(void)
{
  struct dog my_dog;

  my_dog.name = "DotNet";
  my_dog.age = 3.5;
  my_dog.owner = "Ceaser";
  printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
  return (0);
}
