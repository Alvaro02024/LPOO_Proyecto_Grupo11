#pragma once

using namespace System;

namespace Proyecto_Grupo11_model {
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
		tipo_corte^ tipo_corte;
	public:
		movimiento();
		movimiento(int velocidad, int tiempo, double icoordenadaX, double icoordenadaY, double icoordenadaZ, double fcoordenadaX, double fcoordenadaY, double fcoordenadaZ, tipo_corte^ tipo_corte);

	};
}


