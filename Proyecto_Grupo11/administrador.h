#pragma once

using namespace System;

public ref class administrador {
	private:
		int user;
		String^ contraseña;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contraseña, String^ historial_admin);
};
