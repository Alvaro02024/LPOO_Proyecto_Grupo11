#pragma once
#include "tipo_accion.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto_SistemaCNC_model {
	public ref class estado_maquina {
	private:
		int codigo;
		int num_usos;
		String^ historial;
		String^ estado;
		List<tipo_accion^>^ listtipo_accion;

	public:
		estado_maquina();
		estado_maquina(int codigo, int num_usos, String^ historial, String^ estado, List<tipo_accion^>^ listtipo_accion);

		int estado_maquina::getCodigo();
		void estado_maquina::setCodigo(int codigo);
		int estado_maquina::getNumUsos();
		void estado_maquina::setNumUsos(int num_usos);
		String^ estado_maquina::getHistorial();
		void estado_maquina::setHistorial(String^ historial);
		String^ estado_maquina::getEstado();
		void estado_maquina::setEstado(String^ estado);
		List<tipo_accion^>^ estado_maquina::getListTipoAccion();
		void estado_maquina::setListTipoAccion(List<tipo_accion^>^ listtipo_accion);
	};
};