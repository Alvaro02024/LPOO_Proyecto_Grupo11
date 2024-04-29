#include "estado_maquina.h"

using namespace Proyecto_SistemaCNC_model;

estado_maquina::estado_maquina() {

}

estado_maquina::estado_maquina(int codigo, int num_usos, String^ historial, String^ estado, List<tipo_accion^>^ listtipo_accion) {
	this->codigo = codigo;
	this->num_usos = num_usos;
	this->historial = historial;
	this->estado = estado;
	this->listtipo_accion = listtipo_accion;
}

int estado_maquina::getCodigo() {
	return this->codigo;
}

void estado_maquina::setCodigo(int codigo) {
	this->codigo = codigo;
}

int estado_maquina::getNumUsos() {
	return this->num_usos;
}

void estado_maquina::setNumUsos(int num_usos) {
	this->num_usos = num_usos;
}

String^ estado_maquina::getHistorial() {
	return this->historial;
}

void estado_maquina::setHistorial(String^ historial) {
	this->historial = historial;
}

String^ estado_maquina::getEstado() {
	return this->estado;
}

void estado_maquina::setEstado(String^ estado) {
	this->estado = estado;
}

List<tipo_accion^>^ estado_maquina::getListTipoAccion() {
	return this->listtipo_accion;
}

void estado_maquina::setListTipoAccion(List<tipo_accion^>^ listtipo_accion) {
	this->listtipo_accion = listtipo_accion;
}