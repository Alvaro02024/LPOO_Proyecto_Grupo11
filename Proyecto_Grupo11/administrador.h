#pragma once

using namespace System;

public ref class administrador {
	private:
		int user;
		String^ contrase�a;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contrase�a, String^ historial_admin);
};
