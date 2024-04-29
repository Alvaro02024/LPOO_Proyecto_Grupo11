#include "linea_corte.h"

using namespace Proyecto_SistemaCNC_model;

linea_corte::linea_corte() {

}

linea_corte::linea_corte(double coordenada_inicial, double coordenada_final, posicion^ objposicion) {
	this->coordenada_inicial = coordenada_inicial;
	this->coordenada_final = coordenada_final;
	this->objposicion = objposicion;
}

double linea_corte::getCoordenadaInicial() {
	return this->coordenada_inicial;
}

void linea_corte::setCoordenadaInicial(double coordenada_inicial) {
	this->coordenada_inicial = coordenada_inicial;
}

double linea_corte::getCoordenadaFinal() {
	return this->coordenada_final;
}

void linea_corte::setCoordenadaFinal(double coordenada_final) {
	this->coordenada_final = coordenada_final;
}

posicion^ linea_corte::getObjPosicion() {
	return this->objposicion;
}

void linea_corte::setObjPosicion(posicion^ objposicion) {
	this->objposicion = objposicion;
}