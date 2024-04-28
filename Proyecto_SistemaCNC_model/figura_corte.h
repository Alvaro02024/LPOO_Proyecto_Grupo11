#pragma once
#include "linea_corte.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class figura_corte {
	private:
		int ID;
		String^ autor;
		String^ material;
		String^ fecha_creacion;
		String^ diseño;
		List<linea_corte^>^ Listlinea_corte;

	public:
		figura_corte();
		figura_corte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ diseño, List<linea_corte^>^ Listlinea_corte);
	};
};