#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_Grupo11_model {
	public ref class tipo_accion {
	private:
		int codigo;
		String^ seleccion;
		administrador^ objadministrador;
	public:
		tipo_accion();
		tipo_accion(int codigo, String^ seleccion, administrador^ objadministrador);
	};
}


