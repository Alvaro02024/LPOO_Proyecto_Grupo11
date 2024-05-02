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
		List<tipo_corte^>^ listtipo_corte; //list

	public:
		material();
		material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza, int rev_husillo, List<tipo_corte^>^ listtipo_corte);
		
		int material::getCodigo();
		void material::setCodigo(int codigo);
		String^ material::getNombreMaterial();
		void material::setNombreMaterial(String^ nombre_material);
		int material::getDimensionesMax();
		void material::setDimensionesMax(int dimensiones_max);
		String^ material::getDureza();
		void material::setDureza(String^ dureza);
		int material::getRevHusillo();
		void material::setRevHusillo(int rev_husillo);
		List<tipo_corte^>^ material::getObjtipo_corte();
		void material::setObjtipo_corte(List<tipo_corte^>^ listtipo_corte);
	};
};