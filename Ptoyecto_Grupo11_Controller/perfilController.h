#pragma once


namespace Proyecto_SistemaCNC_Controller {

	using namespace Proyecto_SistemaCNC_model;
	using namespace System;

	public ref class perfilController {
	public:
		perfilController();
		int confirmar_user(String^ user, String^ cont);
	};
};
