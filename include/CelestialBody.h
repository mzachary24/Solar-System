#ifndef CELESTIALBODY_H
#define CELESTIALBODY_H

class CelestialBody
{ 
public: // TODO - Change to private and provide accessors - cont. in "SolarSystem.cpp" in function "getAttractionForce()"
  double mass;
  double volume;
  double radius;
  double density;
  double velocity;
  double orbit;
  double gravity;
  double perihelion;
  double aphelion;
  int satellites;
  bool ring;

public:
  CelestialBody(double mass, double volume, double radius, double density, double velocity, double orbit, double gravity, double perihelion, double aphelion, int satellites, bool ring)
  {
    this->mass = mass;
    this->volume = volume;
    this->radius = radius;
    this->density = density;
    this->velocity = velocity;
    this->orbit = orbit;
    this->gravity = gravity;
    this->perihelion = perihelion;
    this->aphelion = aphelion;
    this->satellites = satellites;
    this->ring = ring;
  }
  ~CelestialBody() { };
};

#endif // CELESTIALBODY_H
