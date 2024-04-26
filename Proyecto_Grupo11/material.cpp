#include "material.h"

using namespace Proyecto_Grupo11_model::material;

material::material() {

}

material::material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza) {
	this->codigo = codigo;
	this->nombre_material = nombre_material;
	this->dimensiones_max = dimensiones_max;
	this->dureza = dureza;

	int getcodigo() {
		return this->codigo;
	}
	void setcodigo(int codigo) {
		this->codigo = codigo;
	}
	String^ getnombre_material() {
		return this->nombre_material;
	}
	void setnombre_material(String^ nombre_material) {
		this->nombre_material= nombre_material;
	}
	int getdimensiones_max() {
		return this->dimensiones_max;
	}
	void setdimensiones_max(int dimensiones_max) {
		this->dimensiones_max = dimensiones_max;
	}
	String^ getdureza() {
		return this->dureza;
	}
	void setdureza(String^ dureza) {
		this->dureza = dureza;
	}

	
}