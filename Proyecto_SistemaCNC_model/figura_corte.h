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
		List<linea_corte^>^ listlinea_corte;

	public:
		figura_corte();
		figura_corte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ diseño, List<linea_corte^>^ listlinea_corte);

		int figura_corte::getID();
		void figura_corte::setID(int ID);
		String^ figura_corte::getAutor();
		void figura_corte::setAutor(String^ autor);
		String^ figura_corte::getMaterial();
		void figura_corte::setMaterial(String^ material);
		String^ figura_corte::getFechaCreacion();
		void figura_corte::setFechaCreacion(String^ fecha_creacion);
		String^ figura_corte::getDiseño();
		void figura_corte::setDiseño(String^ diseño);
		List<linea_corte^>^ figura_corte::getListLineaCorte();
		void figura_corte::setListLineaCorte(List<linea_corte^>^ listlinea_corte);
	};
};