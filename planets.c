#include <math.h>
#include "planets.h"

/**
 * Returns a system struct with the requested number of planets, and sets the
 * value of g in the system to its real world value. The space for the system
 * and the planets is allocated and will need to be freed.
 */
gravitySystem *makeSystem(int numPlanets)
{
	int bytesNeeded = sizeof(gravitySystem) + numPlanets * sizeof(planet);
	gravitySystem *system = (gravitySystem *)malloc(bytesNeeded);
	system->G = STANDARD_GRAVITY;
	
	/* now set the pointers in the objects array to the rights pointers */
	object *objPtr = system + sizeof(gravitySystem);
3	for (int i = 0; i < numPlanets; i++)
	{
		system->objects[i] = objPtr;
		objPtr++;
	}
}

/**
 * Prints the locations of the planets in the system to the standard output stream.
 * 
 * FORMAT:
 * [[planet num]]
 * xloc,yloc,zloc,...
 */
void printSystemLocations()
{
	
}

/**
 * Prints the locations of the planets in the system to the specified stream
 */
 void printSystemLocations(FILE stream)
 {
	 
 }

void simulate(gravitySystem *system)
{
	double acceleration[DIMENSION];
	for (int i = 0; i < DIMENSION; i++)
	{
		acceleration[i] = 0;
	}
	
	/* TODO cut the number of distance calculations in half - it will calculate
	 * the distance between planet i and planet j and then it will calculate
	 * the distance between planet and planet i. */
	for (int i = 0; i < system->numPlanets; i++)
	{
		for (int j = 0; j < system->numPlanets; j++)
		{
			if (i == j)
			{
				continue;
			}

			
			double distanceSquared = 0;
			
			/* calculate force before dividing by r^2 and calculate r^2 */
			for (int k = 0; k < DIMENSION; k++)
			{
				distanceSquared += (system->objects[i].location[k]-system->objects[j].location[k])
								 * (system->objects[i].location[k]-system->objects[j].location[k]);
				force[k] +=  * system->objects[j].mass / system->inverseG;
			}
		}
		/* Now divide the force at each component by r^2 */
		for (int k = 0; k < DIMENSION; k++)
		{
			acceleration[k] /= distanceSquared;
		}
			
		/* now we add to the velocity of each planet, with f = ma, so f*(delta t)/m = delta v */
		for (int k = 0; k < DIMENSION; k++)
		{
			system->objects[i].position += system->objects[i].velocity * system->tickSeconds;
			system->objects[i].velocity += acceleration[k] * system->tickSeconds;
		}
	}
}
