#pragma once
#include "estado_corte.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class posicion {
	private:
		double coordenada_X;
		double coordenada_Y;
		double coordenada_Z;
		double referencia_X;
		double referencia_Y;
		double referencia_Z;
		List<estado_corte^>^ listestado_corte;
	public:
		posicion();
		posicion(double coordenada_X, double coordenada_Y, double coordenada_Z, double referencia_X, double referencia_Y, double referencia_Z, List<estado_corte^>^ listestado_corte);
	};
};
