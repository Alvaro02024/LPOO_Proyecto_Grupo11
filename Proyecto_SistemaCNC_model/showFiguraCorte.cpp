#include "showFiguraCorte.h"

using namespace Proyecto_SistemaCNC_model;

showFiguraCorte::showFiguraCorte() {

}

showFiguraCorte::showFiguraCorte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ dise�o) {
	this->ID = ID;
	this->autor = autor;
	this->material = material;
	this->fecha_creacion = fecha_creacion;
	this->dise�o = dise�o;
	
}

int showFiguraCorte::getID() {
	return this->ID;
}

void showFiguraCorte::setID(int ID) {
	this->ID = ID;
}

String^ showFiguraCorte::getAutor() {
	return this->autor;
}

void showFiguraCorte::setAutor(String^ autor) {
	this->autor = autor;
}

String^ showFiguraCorte::getMaterial() {
	return this->material;
}

void showFiguraCorte::setMaterial(String^ material) {
	this->material = material;
}

String^ showFiguraCorte::getFechaCreacion() {
	return this->fecha_creacion;
}

void showFiguraCorte::setFechaCreacion(String^ fecha_creacion) {
	this->fecha_creacion = fecha_creacion;
}

String^ showFiguraCorte::getDise�o() {
	return this->dise�o;
}

void showFiguraCorte::setDise�o(String^ dise�o) {
	this->dise�o = dise�o;
}

