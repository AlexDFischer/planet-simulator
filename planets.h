#include "planets.c"

struct object
{
	long mass; //TODO make this a bignum
	int dimension; //length of the following 2 arrays
	long *position; //in m/s
	long *velocity; //in m/s
};

struct system
{
	int g; //universal gravitational constant
	int numPlanets;
	struct object *planets;
	long deltaT; //number of seconds in one tick
};

struct object *makeObject(int dimension);
struct object *makeObjectWithLoc(int dimension, long *initialLocation);
struct object *makeObjectWithV(int dimension, long *initialV);
struct object *makeObject(int dimension, int numPlanets, long *initialLocation, initialV);
struct object *makeObjects(int dimension, int numPlanets);
struct object *makeObjectsWithLoc(int dimension, int numPlanets, long *initialLocation);
struct object *makeObjectsWithV(int dimension, int numPlanets, long *initialV);
struct object *makeObjects(int dimension, int numPlanets, long *initialLocation, initialV);
