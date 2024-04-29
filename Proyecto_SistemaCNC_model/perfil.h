#pragma once
#include "licencia.h"

using namespace System;

namespace Proyecto_SistemaCNC_model {
	public ref class perfil {

	private:
		int user;
		String^ contrase�a;
		String^ contacto;
		int dias_restantes;
		String^ saved_plantillas;
		String^ historial;
		licencia^ objlicencia;

	public:
		perfil();
		perfil(int user, String^ contrase�a, String^ contacto, int dias_restantes, String^ saved_plantillas, String^ historial, licencia^ objlicencia);

		int getUser();
		void setUser(int user);
		String^ getContrase�a();
		void setContrase�a(String^ contrase�a);
		String^ getContacto();
		void setContacto(String^ contacto);
		int getDiasRestantes();
		void setDiasRestantes(int dias_restantes);
		String^ getSavedPlantillas();
		void setSavedPlantillas(String^ saved_plantillas);
		String^ getHistorial();
		void setHistorial(String^ historial);
		licencia^ getObjLicencia();
		void setObjLicencia(licencia^ objlicencia);
	};
};