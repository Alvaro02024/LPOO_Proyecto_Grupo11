#pragma once


using namespace System;

namespace Proyecto_Grupo11_model {

	public ref class administrador {
	private:
		int user;
		String^ contrase�a;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contrase�a, String^ contacto, String^ historial_admin);

		int getuser();
		void setuser(int user);
		String^ getcontrase�a();
		void setcontrase�a(String^ contrase�a);
		String^ contacto();
		void setcontacto(String^ contacto);
		String^ gethistorial_admin();
		void sethistorial_admin(String^ historial_admin);

	}
}
 
