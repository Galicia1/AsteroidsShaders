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

	float velocidadAngular = 1.5f;
	float velocidad = 0.0f;
	float velocidadMaxima = 0.008f;


	float aceleracion = 0.004f;
	float desaceleracion = 0.002f;

	void rotar(Direccion direccion);
	void avanzar();
	void detenerse();
	void actualizarMatrizTransformacion();
	void teletransportar();

	double tiempoAnterior = 0.0f;
	double tiempoActual = 0.0f;
	double tiempoDiferencial = 0.0f;
};