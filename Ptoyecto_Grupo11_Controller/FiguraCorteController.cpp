#include "FiguraCorteController.h"


using namespace Proyecto_SitemaCNC_Controller;
using namespace System::IO;

FiguraCorteController::FiguraCorteController() {

};

List<figura_corte^>^ FiguraCorteController::buscarID_figuraCorte(String^ ID_FiguraCorte) {
	List<figura_corte^>^ listaFigura_Corte = gcnew List<figura_corte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	array<String^>^ codigoCNC = File::ReadAllLines("codigoCNC.txt");
	String^ separador = ";";
	for each (String ^ figuraCorte in lineas) {
		array<String^>^ datos = figuraCorte->Split(separador->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ autor = datos[1];
		String^ material = datos[2];
		String^ fecha_creacion = datos[3];
		String^ diseño = datos[4];

		if (String::Compare(Convert::ToString(ID), ID_FiguraCorte)>0) {
			figura_corte^ objFigura_Corte = gcnew figura_corte(ID, autor, material, fecha_creacion, diseño, codigoCNC);
			listaFigura_Corte->Add(objFigura_Corte);
		}
	}
	return(listaFigura_Corte);
};