#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Nave : public Modelo {
public:
	Nave();
	vec3 coordenadas;
	enum Direccion {Izquierda, Derecha};
	float angulo;
	float velocidadAngular = 0.5f;
	float velocidad = 0.001f;
	void rotar(Direccion direccion);
	void avanzar();
	void actualizarMatrizTransformacion();
};