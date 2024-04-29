#include "perfil.h"

using namespace Proyecto_SistemaCNC_model;

perfil::perfil() {

}

perfil::perfil(int user, String^ contrase�a, String^ contacto, int dias_restantes, String^ saved_plantillas, String^ historial, licencia^ objlicencia) {
	this->user = user;
	this->contrase�a = contrase�a;
	this->contacto = contacto;
	this->dias_restantes = dias_restantes;
	this->saved_plantillas = saved_plantillas;
	this->historial = historial;
	this->objlicencia = objlicencia;
}

int perfil::getUser() {
	return this->user;
}

void perfil::setUser(int user) {
	this->user = user;
}

String^ perfil::getContrase�a() {
	return this->contrase�a;
}

void perfil::setContrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
}

String^ perfil::getContacto() {
	return this->contacto;
}

void perfil::setContacto(String^ contacto) {
	this->contacto = contacto;
}

int perfil::getDiasRestantes() {
	return this->dias_restantes;
}

void perfil::setDiasRestantes(int dias_restantes) {
	this->dias_restantes = dias_restantes;
}

String^ perfil::getSavedPlantillas() {
	return this->saved_plantillas;
}

void perfil::setSavedPlantillas(String^ saved_plantillas) {
	this->saved_plantillas = saved_plantillas;
}

String^ perfil::getHistorial() {
	return this->historial;
}

void perfil::setHistorial(String^ historial) {
	this->historial = historial;
}

licencia^ perfil::getObjLicencia() {
	return this->objlicencia;
}

void perfil::setObjLicencia(licencia^ objlicencia) {
	this->objlicencia = objlicencia;
}