#include "herramienta_corte.h"

using namespace Proyecto_SistemaCNC_model;

herramienta_corte::herramienta_corte() {

};

herramienta_corte::herramienta_corte(int codigo, String^ geometria, String^ material, int longitud_nominal, int velocidad_corte, int avance, tipo_corte^ objtipo_corte) {
	this->codigo;
	this->geometria;
	this->material;
	this->longitud_nominal;
	this->velocidad_corte;
	this->avance;
	this->objtipo_corte;
};

int herramienta_corte::getCodigo() {
	return this->codigo;
}
void herramienta_corte::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ herramienta_corte::getGeometria() {
	return this->geometria;
}
void herramienta_corte::setGeometria(String^ geometria) {
	this->geometria=geometria;
}
String^ herramienta_corte::getMaterial() {
	return this->material;
}
void herramienta_corte::setMaterial(String^ material) {
	this->material = material;
}
int herramienta_corte::getLongitud_nominal() {
	return this->longitud_nominal;
}
void herramienta_corte::setLongitud_nominal(int longitud_nominal) {
	this->longitud_nominal = longitud_nominal;
}
int herramienta_corte::getVelocidad_corte() {
	return this->velocidad_corte;
}
void herramienta_corte::setVelocidad_corte(int velocidad_corte) {
	this->velocidad_corte = velocidad_corte;
}
int herramienta_corte::getAvance() {
	return this->avance;
}
void herramienta_corte::setAvance(int avance) {
	this->avance = avance;
}
tipo_corte^ herramienta_corte::getObjtipo_corte() {
	return this->objtipo_corte;
}
void herramienta_corte::setObjtipo_corte(tipo_corte^ objtipo_corte) {
	this->objtipo_corte = objtipo_corte;
}