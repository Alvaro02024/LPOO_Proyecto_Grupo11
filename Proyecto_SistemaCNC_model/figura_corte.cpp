#include "figura_corte.h"

using namespace Proyecto_SistemaCNC_model;

figura_corte::figura_corte() {
	
}

figura_corte::figura_corte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ diseño, List<linea_corte^>^ listlinea_corte) {
	this->ID = ID;
	this->autor = autor;
	this->material = material;
	this->fecha_creacion = fecha_creacion;
	this->diseño = diseño;
	this->listlinea_corte = listlinea_corte;
}

int figura_corte::getID() {
	return this->ID;
}

void figura_corte::setID(int ID) {
	this->ID = ID;
}

String^ figura_corte::getAutor() {
	return this->autor;
}

void figura_corte::setAutor(String^ autor) {
	this->autor = autor;
}

String^ figura_corte::getMaterial() {
	return this->material;
}

void figura_corte::setMaterial(String^ material) {
	this->material = material;
}

String^ figura_corte::getFechaCreacion() {
	return this->fecha_creacion;
}

void figura_corte::setFechaCreacion(String^ fecha_creacion) {
	this->fecha_creacion = fecha_creacion;
}

String^ figura_corte::getDiseño() {
	return this->diseño;
}

void figura_corte::setDiseño(String^ diseño) {
	this->diseño = diseño;
}

List<linea_corte^>^ figura_corte::getListLineaCorte() {
	return this->listlinea_corte;
}

void figura_corte::setListLineaCorte(List<linea_corte^>^ listlinea_corte) {
	this->listlinea_corte = listlinea_corte;
}