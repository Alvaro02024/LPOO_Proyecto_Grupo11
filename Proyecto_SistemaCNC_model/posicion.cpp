#include "posicion.h"

using namespace Proyecto_SistemaCNC_model;

posicion::posicion() {

}

posicion::posicion(double coordenada_X, double coordenada_Y, double coordenada_Z, double referencia_X, double referencia_Y, double referencia_Z, List<estado_corte^>^ listestado_corte){
	this->coordenada_X = coordenada_X;
	this->coordenada_Y = coordenada_Y;
	this->coordenada_Z = coordenada_Z;
	this->referencia_X = referencia_X;
	this->referencia_Y = referencia_Y;
	this->referencia_Z = referencia_Z;
	this->listestado_corte = listestado_corte;
}

double posicion::getCoordenadaX() {
	return this->coordenada_X;
}

void posicion::setCoordenadaX(double coordenada_X) {
	this->coordenada_X = coordenada_X;
}

double posicion::getCoordenadaY() {
	return this->coordenada_Y;
}

void posicion::setCoordenadaY(double coordenada_Y) {
	this->coordenada_Y = coordenada_Y;
}

double posicion::getCoordenadaZ() {
	return this->coordenada_Z;
}

void posicion::setCoordenadaZ(double coordenada_Z) {
	this->coordenada_Z = coordenada_Z;
}

double posicion::getReferenciaX() {
	return this->referencia_X;
}

void posicion::setReferenciaX(double referencia_X) {
	this->referencia_X = referencia_X;
}

double posicion::getReferenciaY() {
	return this->referencia_Y;
}

void posicion::setReferenciaY(double referencia_Y) {
	this->referencia_Y = referencia_Y;
}

double posicion::getReferenciaZ() {
	return this->referencia_Z;
}

void posicion::setReferenciaZ(double referencia_Z) {
	this->referencia_Z = referencia_Z;
}

List<estado_corte^>^ posicion::getListEstadoCorte() {
	return this->listestado_corte;
}

void posicion::setListEstadoCorte(List<estado_corte^>^ listestado_corte) {
	this->listestado_corte = listestado_corte;
}