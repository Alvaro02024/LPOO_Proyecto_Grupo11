#pragma once
using namespace System;

namespace Proyecto_SistemaCNC_model {
	public ref class estado_corte {
	private:
		String^ estado;
		int tiempo_inicio;
		int tiempo_fin;
		int duracion;
		String^ proceso;

	public:
		estado_corte();
		estado_corte(String^ estado, int tiempo_inicio, int tiempo_fin, int duracion, String^ proceso);
		
	};
};