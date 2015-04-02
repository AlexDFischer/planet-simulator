#include <stdio.h>
#include <stdlib.h>

#include "planets.h"

gravitySystem *makeSystem(int);
void simulate(gravitySystem *);

int main(int argc, char **argv)
{
	gravitySystem *system = makeSystem(2);

	object *asteroid = system->objects + 0;
	object *iss = system->objects + 1;
	
	asteroid  ->mass = 1000.0*1000.0*1000.0*1000.0*1000.0; /* a small asteroid */
	asteroid  ->loc[0] = 0;
	asteroid  ->loc[1] = 0;
	asteroid  ->velocity[0] = 0;
	iss       ->velocity[1] = 0;
	iss       ->mass = 419600; /* this is the ISS, hopefully orbiting this asteroid */
	iss       ->loc[0] = 0;
	iss       ->loc[1] = 5*1000.0*1000.0;
	iss       ->velocity[0] = 0;
}


