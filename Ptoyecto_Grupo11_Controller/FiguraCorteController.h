#pragma once
using namespace System::Collections::Generic;
using namespace Proyecto_SistemaCNC_model;
using namespace System;

namespace Proyecto_SitemaCNC_Controller {
	

	public ref class FiguraCorteController {
		public:
			FiguraCorteController();
			List<figura_corte^>^ buscarID_figuraCorte(String^ ID_FiguraCorte);
	};
}