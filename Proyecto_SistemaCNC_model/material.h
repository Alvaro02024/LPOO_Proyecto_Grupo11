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
		List<tipo_corte^>^ listtipo_corte;

	public:
		material();
		material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza, int rev_husillo, List<tipo_corte^>^ listtipo_corte);
		
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreMaterial();
		void setNombreMaterial(String^ nombre_material);
		int getDimensionesMax();
		void setDimensionesMax(int dimensiones_max);
		String^ getDureza();
		void setDureza(String^ dureza);
		int getRevHusillo();
		void setRevHusillo(int rev_husillo);
		List<tipo_corte^>^ material::getObjtipo_corte();
		List<tipo_corte^>^ setObjtipo_corte();
	};
};