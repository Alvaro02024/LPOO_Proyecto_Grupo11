#include "estado_corte.h"

using namespace Proyecto_Grupo11_model::estado_corte;

estado_corte::estado_corte() {

}

estado_corte::estado_corte(String^ estado, int tiempo_inicio, int tiempo_fin, int duracion, String^ proceso) {
		this->estado = estado;
		this->tiempo_inicio = tiempo_inicio;
		this->tiempo_fin = tiempo_fin;
		this->duracion = duracion;
		this->proceso = proceso;

		String^ getestado() {
			return this->estado;
		}
		void setestado(String^ estado) {
			this->estado = estado;
		}
		int gettiempo_inicio() {
			return this->tiempo_inicio;
		}
		void settiempo_inicio(int tiempo_inicio) {
			this->tiempo_inicio = tiempo_inicio;
		}
		int gettiempo_fin() {
			return this->tiempo_fin;
		}
		void settiempo_fin(int tiempo_fin) {
			this->tiempo_fin = tiempo_fin;
		}
		int getduracion() {
			return this->duracion;
		}
		void setduracion(int duracion) {
			this duracion->duracion;
		}
		String^ getproceso() {
			return this->proceso;
		}
		void setproceso(String^ proceso) {
			this->proceso = proceso;
		}
}