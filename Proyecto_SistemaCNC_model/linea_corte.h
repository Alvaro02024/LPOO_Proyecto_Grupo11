#pragma once
#include "posicion.h"

using namespace System;

namespace Proyecto_SistemaCNC_model {
	public ref class linea_corte {
	private:
		double coordenada_inicial;
		double coordenada_final;
		posicion^ objposicion;
	public:
		linea_corte();
		linea_corte(double coordenada_inicial, double coordenada_final, posicion^ objposicion);
	};
};