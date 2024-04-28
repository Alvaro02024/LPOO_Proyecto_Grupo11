#pragma once
#include "tipo_corte.h"

using namespace System;

namespace Proyecto_SistemaCNC_model {
	public ref class herramienta_corte {
	private:
		int codigo;
		String^ geometria;
		String^ material;
		int longitud_nominal;
		int velocidad_corte;
		int avance;
		tipo_corte^ objtipo_corte;
	public:
		herramienta_corte();
		herramienta_corte(int codigo, String^ geometria, String^ material, int longitud_nominal, int velocidad_corte, int avance, tipo_corte^ objtipo_corte);

	};
};