#pragma once

using namespace System;

public ref class herramienta_corte {
	private:
		int codigo;
		String^ geometria;
		String^ material;
		int longitud_nominal;
		int velocidad_corte;
		int avance;
	public:
		herramienta_corte();
		herramienta_corte(int codigo, String^ geometria, String^ material, int longitud_nominal, int velocidad_corte, int avance);

};
