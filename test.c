#include <stdio.h>

struct object
{
  long mass; //TODO make this a bignum
  long position[]; //in m/s
  long velocity[]; //in m/s
}

struct system
{
  struct object planets[];
}

