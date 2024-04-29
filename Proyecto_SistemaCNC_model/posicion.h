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

		double posicion::getCoordenadaX();
		void posicion::setCoordenadaX(double coordenada_X);
		double posicion::getCoordenadaY();
		void posicion::setCoordenadaY(double coordenada_Y);
		double posicion::getCoordenadaZ();
		void posicion::setCoordenadaZ(double coordenada_Z);
		double posicion::getReferenciaX();
		void posicion::setReferenciaX(double referencia_X);
		double posicion::getReferenciaY();
		void posicion::setReferenciaY(double referencia_Y);
		double posicion::getReferenciaZ();
		void posicion::setReferenciaZ(double referencia_Z);
		List<estado_corte^>^ posicion::getListEstadoCorte();
		void posicion::setListEstadoCorte(List<estado_corte^>^ listestado_corte);
	};
};
