#pragma once
#include "tipo_corte.h"
#include "posicion.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class movimiento {
	private:
		int velocidad;
		int tiempo;
		double icoordenadaX;
		double icoordenadaY;
		double icoordenadaZ;
		double fcoordenadaX;
		double fcoordenadaY;
		double fcoordenadaZ;
		tipo_corte^ objtipocorte;
		List<posicion^>^ objposicion;
		
	public:
		movimiento();
		movimiento(int velocidad, int tiempo, double icoordenadaX, double icoordenadaY, double icoordenadaZ, double fcoordenadaX, double fcoordenadaY, double fcoordenadaZ, tipo_corte^ objtipocorte);

	};
};