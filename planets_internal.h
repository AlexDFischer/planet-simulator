/**
 * Used by the library.
 */
 
 #include <stdlib.h>
 
#define NUMERICAL_TYPE double
typedef NUMERICAL_TYPE number;

#define DIMENSION 2

typedef struct {number mass; number loc[DIMENSION]; number velocity[DIMENSION];} object;
typedef struct {number G; number tickSeconds; int numPlanets; object *objects;} gravitySystem;
#define STANDARD_GRAVITY 0.0000000000667385
#define STANDARD_INVERSE_GRAVITY 14985763524 /* We use 1/G because dividing by int is better than multiplying by float */