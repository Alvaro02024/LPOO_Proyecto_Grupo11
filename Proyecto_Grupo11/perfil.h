#pragma once

using namespace std;

public ref class perfil {

	private:
		int usuario;
		String^ contraseña;
		String^ licencia;
		String^ contacto;
		int dias_restantes;
		String^ saved_plantillas;
		String^ historial;
		licencia^ objlicencia;

	public:
		perfil();
		perifl(int usuario, String^ contraseña, String^ licencia, String^ contacto, int dias_restantes, String^ saved_plantillas, String^ historial);

};