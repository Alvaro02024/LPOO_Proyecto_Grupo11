#pragma once

using namespace Style;

public ref class tipo_accion {
	private:
		int codigo;
		String^ seleccion;
		administrador^ objadministrador;
	public:
		tipo_accion();
		tipo_accion(int codigo, String^ seleccion, administrador^ objadministrador);
};
