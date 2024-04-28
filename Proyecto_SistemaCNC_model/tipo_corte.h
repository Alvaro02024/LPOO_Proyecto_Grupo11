#pragma once
#include "material.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class tipo_corte : material {
	private:
		int codigo;
		String^ tipo;
		double posicion_husillo;
		int offset;
		
	public:
		tipo_corte();
		tipo_corte(int codigo, String^ tipo, int offset, double posicion_husillo);
	};
};