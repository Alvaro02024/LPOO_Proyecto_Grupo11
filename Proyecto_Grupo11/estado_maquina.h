#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_Grupo11_model {
	public ref class estado_maquina {
	private:
		int codigo;
		int num_usos;
		String^ historial;
		String^ estado;
		List<tipo_accion^>^ listatipo_accion;

	public:
		estado_maquina();
		estado_maquina(int codigo, int num_usos, String^ historial, String^ estado, List<tipo_accion^>^ listatipo_accion);
	}
}

