#include <stdio.h>
#include <stdlib.h>

#include "planets.h"

int main(int argc, char **argv)
{
	object *asteroid = system->object + 0;
	object *iss = system->object + 1;
	
	gravitySystem *system makeSystem(2);
	asteroid  ->mass = 1000*1000*1000*1000*1000; /* a small asteroid */
	asteroid  ->location[0] = 0;
	asteroid  ->location[1] = 0;
	asteroid  ->velocity[0] = 0;
	iss       ->velocity[1] = 0;
	iss       ->mass = 419600; /* this is the ISS, hopefully orbiting this asteroid */
	iss       ->location[0] = 0;
	iss       ->location[1] = 5*1000*1000;
	iss       ->velocity[0] = 0;
}


