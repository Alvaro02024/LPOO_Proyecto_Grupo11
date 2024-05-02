#include "showFiguraCorteController.h"


using namespace Proyecto_SistemaCNC_Controller;
using namespace System::IO;

showFiguraCorteController::showFiguraCorteController() {

};


List<showFiguraCorte^>^ showFiguraCorteController::buscarID_showFiguraCorte(String^ ID_showFiguraCorte) {
	List<showFiguraCorte^>^ listashowFigura_Corte = gcnew List<showFiguraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separador = ";";
	for each (String ^ figuraCorte in lineas) {
		array<String^>^ datos = figuraCorte->Split(separador->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ autor = datos[1];
		String^ material = datos[2];
		String^ fecha_creacion = datos[3];
		String^ diseño = datos[4];

		if (String::Compare(Convert::ToString(ID), ID_showFiguraCorte)>0) {
			showFiguraCorte^ objshowFigura_Corte = gcnew showFiguraCorte(ID, autor, material, fecha_creacion, diseño);
			listashowFigura_Corte->Add(objshowFigura_Corte);
		}
	}
	return(listashowFigura_Corte);
};