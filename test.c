#include <stdio.h>
#include <stdlib.h>

#include "planets.h"
#define DIMENSION 2
typedef OBJECT_TYPE(DIMENSION) planet;


int main(int argc, char **argv)
{
	int size = sizeof (planet);
	printf("%d", size);
	
}


