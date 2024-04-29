#pragma once
#include "tipo_corte.h"
#include "posicion.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class movimiento {
	private:
		int velocidad;
		int tiempo;
		double icoordenadaX;
		double icoordenadaY;
		double icoordenadaZ;
		double fcoordenadaX;
		double fcoordenadaY;
		double fcoordenadaZ;
		tipo_corte^ objtipocorte;
		List<posicion^>^ listposicion;
		
	public:
		movimiento();
		movimiento(int velocidad, int tiempo, double icoordenadaX, double icoordenadaY, double icoordenadaZ, double fcoordenadaX, double fcoordenadaY, double fcoordenadaZ, tipo_corte^ objtipocorte, List<posicion^>^ listposicion);


		int movimiento::getVelocidad();
		void movimiento::setVelocidad(int velocidad);
		int movimiento::getTiempo();
		void movimiento::setTiempo(int tiempo);
		double movimiento::getInicioCoordenadaX();
		void movimiento::setInicioCoordenadaX(double icoordenadaX);
		double movimiento::getInicioCoordenadaY();
		void movimiento::setInicioCoordenadaY(double icoordenadaY);
		double movimiento::getInicioCoordenadaZ();
		void movimiento::setInicioCoordenadaZ(double icoordenadaZ);
		double movimiento::getFinCoordenadaX();
		void movimiento::setFinCoordenadaX(double fcoordenadaX);
		double movimiento::getFinCoordenadaY();
		void movimiento::setFinCoordenadaY(double fcoordenadaY);
		double movimiento::getFinCoordenadaZ();
		void movimiento::setFinCoordenadaZ(double fcoordenadaZ);
		tipo_corte^ movimiento::getObjTipoCorte();
		void movimiento::setObjTipoCorte(tipo_corte^ objtipocorte);
		List<posicion^>^ movimiento::getListPosicion();
		void movimiento::setListPosicion(List<posicion^>^ listposicion);
	};
};