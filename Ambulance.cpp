#include "Ambulance.h"

Ambulance::Ambulance()
{
	name_ = "救急車";
	printf("%sが走っている\n", name_);
}

Ambulance::~Ambulance()
{
	printf("%sは走り去った\n", name_);
}

void Ambulance::Purr()
{
	printf("%sの音がなっている\n", name_);
}


