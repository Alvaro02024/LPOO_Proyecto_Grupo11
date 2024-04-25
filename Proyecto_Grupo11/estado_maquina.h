#pragma once

using namespace System;

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
};
