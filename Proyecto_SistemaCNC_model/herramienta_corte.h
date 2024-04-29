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

		int getCodigo();
		void setCodigo(int codigo);
		String^ getGeometria();
		void setGeometria(String^ geometria);
		String^ getMaterial();
		void setMaterial(String^ material);
		int getLongitud_nominal();
		void setLongitud_nominal(int longitud_nominal);
		int getVelocidad_corte();
		void setVelocidad_corte(int velocidad_corte);
		int getAvance();
		void setAvance(int avance);
		tipo_corte^ getObjtipo_corte();
		void setObjtipo_corte(tipo_corte^ objtipo_corte);
	};
};