#pragma once
#include "licencia.h"

using namespace System;

namespace Proyecto_SistemaCNC_model {
	public ref class perfil {

	private:
		int user;
		String^ contraseña;
		String^ contacto;
		int dias_restantes;
		String^ saved_plantillas;
		String^ historial;
		licencia^ objlicencia;

	public:
		perfil();
		perfil(int user, String^ contraseña, String^ contacto, int dias_restantes, String^ saved_plantillas, String^ historial, licencia^ objlicencia);

	};
};