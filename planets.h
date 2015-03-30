#define OBJECT_TYPE(dim) struct {double mass; double loc[dim]; double velocity[dim];}
#define SYSTEM_TYPE(dim) struct {double G; int tickSeconds; int numPlanets; OBJECT_TYPE(dim) *objects;}
#define STANDARD_GRAVITY 0.0000000000667385d
#define STANDARD_INVERSE_GRAVITY 14985763524; /* We use 1/G because dividing by int is better than multiplying by float */

#define DIMENSION 2
typedef OBJECT_TYPE(DIMENSION) object;
typedef SYSTEM_TYPE(DIMENSION) gravitySystem;

gravitySystem *makeSystem(int numPlanets);
void simulate(gravitySystem *system);
