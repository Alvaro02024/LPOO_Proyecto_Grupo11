#pragma once

namespace Proyecto_SistemaCNC_Controller {

	using namespace System::Collections::Generic;
	using namespace Proyecto_SistemaCNC_model;
	using namespace System;


	public ref class showFiguraCorteController {
	public:
		showFiguraCorteController();
		List<showFiguraCorte^>^ buscarID_showFiguraCorte(String^ ID_showFiguraCorte);
		List<showFiguraCorte^>^ buscarAutor_showFiguraCorte(String^ autor);
		List<showFiguraCorte^>^ buscarALL_showFiguraCorte();
		void agregarSHOWfiguracorte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ diseño);
		void escribirSHOWfiguracorte(List<showFiguraCorte^>^ ListaOBJ);
	};
};