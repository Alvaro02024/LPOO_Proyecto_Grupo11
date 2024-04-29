#include "estado_corte.h"

using namespace Proyecto_SistemaCNC_model;

estado_corte::estado_corte() {

}

estado_corte::estado_corte(String^ estado, int tiempo_inicio, int tiempo_fin, int duracion, String^ proceso) {
	this->estado = estado;
	this->tiempo_inicio = tiempo_inicio;
	this->tiempo_fin = tiempo_fin;
	this->duracion = duracion;
	this->proceso = proceso;
}

String^ estado_corte::getEstado() {
	return this->estado;
}
void estado_corte::setEstado(String^ estado) {
	this->estado = estado;
}
int estado_corte::getTiempo_inicio() {
	return this->tiempo_inicio;
}
void estado_corte::setTiempo_inicio(int tiempo_inico) {
	this->tiempo_inicio = tiempo_inicio;
}
int estado_corte::getTiempo_fin() {
	return this->tiempo_fin;
}
void estado_corte::setTiempo_fin(int tiempo_fin) {
	this->tiempo_fin = tiempo_fin;
}
int estado_corte::getDuracion() {
	return this->duracion;
}
void estado_corte::setDuracion(int duracion) {
	this->duracion = duracion;
}
String^ estado_corte::getProceso() {
	return this->proceso;
}
void estado_corte::setProceso(String^ proceso) {
	this->proceso = proceso;
}
