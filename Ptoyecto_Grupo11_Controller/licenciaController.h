#pragma once

namespace Proyecto_SistemaCNC_Controller {

	using namespace System::Collections::Generic;
	using namespace Proyecto_SistemaCNC_model;
	using namespace System;

	public ref class licenciaController {
	public:
		licenciaController();
		List<licencia^>^ crearlista_licencias();
		licencia^ asignar_licencia(List<licencia^>^ a,int ind);
	};
}