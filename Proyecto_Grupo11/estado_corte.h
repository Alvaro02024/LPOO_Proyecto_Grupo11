#pragma once

using namespace System;

namespace Proyecto_Grupo11_model {
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
		String^ getestado();
		void setestado(String^ estado);
		int gettiempo_inicio();
		void settiempo_inicio(int tiempo_inicio);
		int gettiempo_fin();
		void settiempo_fin(int tiempo_fin);
		int getduracion();
		void setduracion(int duracion);
		String^ getproceso();
		void setproceso(String^ proceso);
	}
}


