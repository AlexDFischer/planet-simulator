#define BYTES_PER_OBJECT (sizeof(struct object) + 2 * dimension * sizeof(long))

struct object *makeObject(int dimension)
{	
	return (struct object *) malloc(BYTES_PER_OBJECT);
}

struct object *makeObjectWithLoc(int dimension, long *initialLocation)
{
	struct object object = (struct object) malloc(BYTES_PER_OBJECT);
	for (int j = 0; j < dimension; j++)
	{
		object.location[j] = initialLocation[j];
	}
}

struct object *makeObjectWithV(int dimension, long *initialV)
{
	struct object object = (struct object) malloc(BYTES_PER_OBJECT);
	for (int j = 0; j < dimension; j++)
	{
		object.velocity[j] = initialV[j];
	}
}

struct object *makeObject(int dimension, int numPlanets, long *initialLocation, initialV)
{
	struct object *objects = (struct object *) malloc(numPlanets * BYTES_PER_OBJECT);
	for (int i = 0; i < numPlanets; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			objects[i].location[j] = initialLocation[j];
			objects[i].velocity[j] = initialVelocity[j];
		}
	}
}

struct object *makeObjects(int dimension, int numPlanets)
{
	return (struct object *) malloc (numPlanets * BYTES_PER_OBJECT);
}

struct object *makeObjectsWithLoc(int dimension, int numPlanets, long *initialLocation)
{
	struct object *objects = (struct object *) malloc(numPlanets * BYTES_PER_OBJECT);
	for (int i = 0; i < numPlanets; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			objects[i].location[j] = initialLocation[j];
		}
	}
}

struct object *makeObjectsWithV(int dimension, int numPlanets, long *initialV)
{
	struct object *objects = (struct object *) malloc(numPlanets * BYTES_PER_OBJECT);
	for (int i = 0; i < numPlanets; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			objects[i].velocity[j] = initialV[j];
		}
	}
}

struct object *makeObjects(int dimension, int numPlanets, long *initialLocation, initialV)
{
	struct object *objects = (struct object *) malloc(numPlanets * BYTES_PER_OBJECT);
	for (int i = 0; i < numPlanets; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			objects[i].location[j] = initialLocation[j];
			objects[i].velocity[j] = initialV[j];
		}
	}
}