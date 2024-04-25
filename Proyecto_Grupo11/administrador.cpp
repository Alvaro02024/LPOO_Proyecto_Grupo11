#include "administrador.h"

using namespace Proyecto_Grupo11_model::administrador;

administrador::administrador() {

}

administrador::administrador(int user, String^ contraseña, String^ contacto, String^ historial_admin) {
	this->codigo = codigo;
	this->contraseña = contraseña;
	this->contacto = contacto;
	this->historial_admin = historial_admin;
}

int administrador::getuser() {
	return this->user;
};
void administrador::setuser(int user) {
	this->user = user;
}
String^ administrador::getcontraseña() {
	return this->contraseña;
}
void administrador::setcontraseña(String^ contraseña) {
	this->contraseña = contraseña;
}
String^ administrador::contacto() {
	return this->contacto;
}
void setcontacto(String^ contacto) {
	this->contacto = contacto;
}
String^ gethistorial_admin() {
	return this->historial_admin;
}
void sethistorial_admin(String^ historial_admin) {
	this->historial_admin = historial_admin;
}