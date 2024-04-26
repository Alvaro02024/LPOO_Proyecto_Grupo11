#include "licencia.h"

using namespace Proyecto_Grupo11_model::licencia;

licencia::licencia() {

}

licencia::licencia(int codigo, String^ tipo, int num_usuarios, String^ fecha_compra, String^ fecha_vencimiento) {
	this->codigo = codigo;
	this->num_usuarios = num_usuarios;
	this->fecha_compra = fecha_compra;
	this->fecha_vencimiento = fecha_vencimiento;
	
	int getcodigo() {
		return this->codigo;
	}
	void setcodigo(int codigo) {
		this->codigo = codigo;
	}
	String^ gettipo() {
		return this->tipo;
	}
	void settipo(String^ tipo) {
		this->tipo = tipo;
	}
	int getnum_usuarios() {
		return this->num_usuarios;
	}
	void setnum_usuarios(int num_usuarios) {
		this->num_usuarios = num_usuarios;
	}
	String^ getfecha_compra() {
		return this->fecha_compra;
	}
	void setfecha_compra(String^ fecha_compra) {
		this->fecha_compra = fecha_compra;
	}
	String^ getfecha_vencimiento() {
		return this->fecha_vencimiento;
	}
	void setfecha_vencimiento(String^ fecha_vencimiento) {
		this->fecha_vencimiento=fecha_vencimiento
	}
}