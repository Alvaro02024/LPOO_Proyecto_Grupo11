#pragma once

using namespace System;

public ref class administrador {
	private:
		int user;
		String^ contraseņa;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contraseņa, String^ historial_admin);
};
