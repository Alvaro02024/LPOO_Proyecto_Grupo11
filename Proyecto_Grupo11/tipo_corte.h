#pragma once

#include "material.h"
using namespace System;

public ref class tipo_corte: material {
	private:
		int codigo;
		String^ tipo;
		double posicion_husillo;
		int offset;
		tipo_acicon^ objtipo_accion;
	public:
		tipo_corte();
		tipo_corte(int codigo, String^ tipo, int offset, double posicion_husillo);
};
