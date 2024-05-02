#include "material.h"

using namespace Proyecto_SistemaCNC_model;

material::material() {

}

material::material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza, int rev_husillo, List<tipo_corte^>^ listtipo_corte) {
	this->codigo = codigo;
	this->nombre_material = nombre_material;
	this->dimensiones_max = dimensiones_max;
	this->dureza = dureza;
	this->rev_husillo = rev_husillo;
	this->listtipo_corte = listtipo_corte;
}

int material::getCodigo() {
	return this->codigo;
}

void material::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ material::getNombreMaterial() {
	return this->nombre_material;
}

void material::setNombreMaterial(String^ nombre_material) {
	this->nombre_material = nombre_material;
}

int material::getDimensionesMax() {
	return this->dimensiones_max;
}

void material::setDimensionesMax(int dimensiones_max) {
	this->dimensiones_max = dimensiones_max;
}

String^ material::getDureza() {
	return this->dureza;
}

void material::setDureza(String^ dureza) {
	this->dureza = dureza;
}

int material::getRevHusillo() {
	return this->rev_husillo;
}

void material::setRevHusillo(int rev_husillo) {
	this->rev_husillo = rev_husillo;
}

List<tipo_corte^>^ material::getObjtipo_corte() {
	return this->listtipo_corte;
}

void material::setObjtipo_corte(List<tipo_corte^>^ listtipo_corte) {
	this->listtipo_corte = listtipo_corte;
}
