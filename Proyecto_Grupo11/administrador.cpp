#include "administrador.h"

using namespace Proyecto_Grupo11_model::administrador;

administrador::administrador() {

}

administrador::administrador(int user, String^ contrase�a, String^ contacto, String^ historial_admin) {
	this->codigo = codigo;
	this->contrase�a = contrase�a;
	this->contacto = contacto;
	this->historial_admin = historial_admin;
}

int administrador::getuser() {
	return this->user;
};
void administrador::setuser(int user) {
	this->user = user;
}
String^ administrador::getcontrase�a() {
	return this->contrase�a;
}
void administrador::setcontrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
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