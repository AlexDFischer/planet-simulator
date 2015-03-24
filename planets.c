#include <math.h>

#include "planets.h"

/**
 * Returns a system struct with the requested number of planets, and sets the
 * value of g in the system to its real world value. The space for the system
 * and the planets is allocated and will need to be freed. */
system *makeSystem(int numPlanets)
{
	int bytesNeeded = sizeof(system) + numPlanets * sizeof(planet);
	system *system = (system *)malloc(bytesNeeded);
	system->inverseG = STANDARD_INVERSE_GRAVITY
}

void simulate(system *system)
{
	long long force[DIMENSION];
	for (int i = 0; i < DIMENSION; i++)
	{
		force[i] = 0;
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

			
			long long distanceSquared = 0;
			
			/* calculate force before dividing by r^2 and calculate r^2 */
			for (int k = 0; k < DIMENSION; k++)
			{
				distanceSquared += (system->objects[i].location[k]-system->objects[j].location[k])
								 * (system->objects[i].location[k]-system->objects[j].location[k]);
				force[k] +=  * system->objects[i].mass * system->objects[j].mass / system->inverseG;
			}
			
			/* Now divide the force at each component by r^2 */
			for (int k = 0; k < DIMENSION; k++)
			{
				force[k] /= distanceSquared;
			}
			
		}
	}
}