#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include "CelestialBody.h"

double getDistance(const CelestialBody &a, const CelestialBody &b);
double getAttractionForce(const CelestialBody &a, const CelestialBody &b);

#endif // SOLARSYSTEM_H
