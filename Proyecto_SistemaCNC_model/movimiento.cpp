#include "movimiento.h"

using namespace Proyecto_SistemaCNC_model;

movimiento::movimiento() {

}

movimiento::movimiento(int velocidad, int tiempo, double icoordenadaX, double icoordenadaY, double icoordenadaZ, double fcoordenadaX, double fcoordenadaY, double fcoordenadaZ, tipo_corte^ objtipocorte, List<posicion^>^ listposicion) {
	this->velocidad = velocidad;
	this->tiempo = tiempo;
	this->icoordenadaX = icoordenadaX;
	this->icoordenadaY = icoordenadaY;
	this->icoordenadaZ = icoordenadaZ;
	this->fcoordenadaX = fcoordenadaX;
	this->fcoordenadaY = fcoordenadaY;
	this->fcoordenadaZ = fcoordenadaZ;
	this->objtipocorte = objtipocorte;
	this->listposicion = listposicion;
}

int movimiento::getVelocidad() {
	return this->velocidad;
}

void movimiento::setVelocidad(int velocidad) {
	this->velocidad = velocidad;
}

int movimiento::getTiempo() {
	return this->tiempo;
}

void movimiento::setTiempo(int tiempo) {
	this->tiempo = tiempo;
}

double movimiento::getInicioCoordenadaX() {
	return this->icoordenadaX;
}

void movimiento::setInicioCoordenadaX(double icoordenadaX) {
	this->icoordenadaX = icoordenadaX;
}

double movimiento::getInicioCoordenadaY() {
	return this->icoordenadaY;
}

void movimiento::setInicioCoordenadaY(double icoordenadaY) {
	this->icoordenadaY = icoordenadaY;
}

double movimiento::getInicioCoordenadaZ() {
	return this->icoordenadaZ;
}

void movimiento::setInicioCoordenadaZ(double icoordenadaZ) {
	this->icoordenadaZ = icoordenadaZ;
}

double movimiento::getFinCoordenadaX() {
	return this->fcoordenadaX;
}

void movimiento::setFinCoordenadaX(double fcoordenadaX) {
	this->fcoordenadaX = fcoordenadaX;
}

double movimiento::getFinCoordenadaY() {
	return this->fcoordenadaY;
}

void movimiento::setFinCoordenadaY(double fcoordenadaY) {
	this->fcoordenadaY = fcoordenadaY;
}

double movimiento::getFinCoordenadaZ() {
	return this->fcoordenadaZ;
}

void movimiento::setFinCoordenadaZ(double fcoordenadaZ) {
	this->fcoordenadaZ = fcoordenadaZ;
}

tipo_corte^ movimiento::getObjTipoCorte() {
	return this->objtipocorte;
}

void movimiento::setObjTipoCorte(tipo_corte^ objtipocorte) {
	this->objtipocorte = objtipocorte;
}

List<posicion^>^ movimiento::getListPosicion() {
	return this->listposicion;
}

void movimiento::setListPosicion(List<posicion^>^ listposicion) {
	this->listposicion = listposicion;
}