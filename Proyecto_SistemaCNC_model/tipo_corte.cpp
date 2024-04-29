#include "tipo_corte.h"

using namespace Proyecto_SistemaCNC_model;

tipo_corte::tipo_corte() {

}

tipo_corte::tipo_corte(int codigo, String^ tipo, int offset, double posicion_husillo) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->offset = offset;
	this->posicion_husillo = posicion_husillo;
}

int tipo_corte::getCodigo() {
	return this->codigo;
}

void tipo_corte::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ tipo_corte::getTipo() {
	return this->tipo;
}

void tipo_corte::setTipo(String^ tipo) {
	this->tipo = tipo;
}

double tipo_corte::getPosicionHusillo() {
	return this->posicion_husillo;
}

void tipo_corte::setPosicionHusillo(double posicion_husillo) {
	this->posicion_husillo = posicion_husillo;
}

int tipo_corte::getOffset() {
	return this->offset;
}

void tipo_corte::setOffset(int offset) {
	this->offset = offset;
}