#pragma once

namespace Proyecto_SistemaCNC_Controller{

	using namespace Proyecto_SistemaCNC_model;
	using namespace System;

	public ref class administradorController {
	public:
		administradorController();
		int confirmar_administradorController(String^ user, String^ cont);
	};
}