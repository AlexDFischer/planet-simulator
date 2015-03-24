#include "planets.h"

system *makeSystem(int numPlanets)
{
	int bytesNeeded = sizeof(system) + numPlanets * sizeof(planet);
	return malloc(bytesNeeded);
}

void simulate(system *system)
{
	for (int i = 0; i < system->numPlanets; i++)
	{
		long long force[DIMENSION];
		for (int j = 0; j < system->numPlanets; j++)
		{
			if (i == j)
			{
				continue;
			}
			
		}
	}
}