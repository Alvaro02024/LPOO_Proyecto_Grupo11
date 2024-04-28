#pragma once
#include "tipo_corte.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class material {
	private:
		int codigo;
		String^ nombre_material;
		int dimensiones_max;
		String^ dureza;
		int rev_husillo;
		List<tipo_corte^>^ objtipo_corte;

	public:
		material();
		material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza, int rev_husillo);
		
	};
};