#pragma once

using namespace System;

namespace Proyecto_Grupo11_model {
	public ref class perfil {

	private:
		int usuario;
		String^ contrase�a;
		String^ licencia;
		String^ contacto;
		int dias_restantes;
		String^ saved_plantillas;
		String^ historial;
		licencia^ objlicencia;

	public:
		perfil();
		perifl(int usuario, String^ contrase�a, String^ licencia, String^ contacto, int dias_restantes, String^ saved_plantillas, String^ historial, licencia^ objlicencia);

	};
}

