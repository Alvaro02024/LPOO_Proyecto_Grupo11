#pragma once


using namespace System;

namespace Proyecto_Grupo11_model {

	public ref class administrador {
	private:
		int user;
		String^ contraseña;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contraseña, String^ contacto, String^ historial_admin);

		int getuser();
		void setuser(int user);
		String^ getcontraseña();
		void setcontraseña(String^ contraseña);
		String^ contacto();
		void setcontacto(String^ contacto);
		String^ gethistorial_admin();
		void sethistorial_admin(String^ historial_admin);

	}
}
 
