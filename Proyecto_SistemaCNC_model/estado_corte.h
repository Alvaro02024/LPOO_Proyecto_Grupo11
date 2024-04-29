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

		String^ getEstado();
		void setEstado(String^ estado);
		int getTiempo_inicio();
		void setTiempo_inicio(int tiempo_inico);
		int getTiempo_fin();
		void setTiempo_fin(int tiempo_fin);
		int getDuracion();
		void setDuracion(int duracion);
		String^ getProceso();
		void setProceso(String^ proceso);
			
	};
};