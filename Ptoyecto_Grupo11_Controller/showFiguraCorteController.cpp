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

		if (ID == Convert::ToInt32(ID_showFiguraCorte)) {
			showFiguraCorte^ objshowFigura_Corte = gcnew showFiguraCorte(ID, autor, material, fecha_creacion, diseño);
			listashowFigura_Corte->Add(objshowFigura_Corte);
		}
	}
	return(listashowFigura_Corte);
};

List<showFiguraCorte^>^ showFiguraCorteController::buscarALL_showFiguraCorte() {
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
		}
	return(listashowFigura_Corte);
}

void showFiguraCorteController::agregarSHOWfiguracorte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ diseño) {
	List<showFiguraCorte^>^ listaFIGURACORTE = buscarALL_showFiguraCorte();
	showFiguraCorte^ objShowFiguraCorte = gcnew showFiguraCorte(ID, autor, material, fecha_creacion, diseño);
	listaFIGURACORTE->Add(objShowFiguraCorte);
	escribirSHOWfiguracorte(listaFIGURACORTE);
}

void showFiguraCorteController::escribirSHOWfiguracorte(List<showFiguraCorte^>^ ListaOBJ) {
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaOBJ->Count);
	for (int i = 0; i < ListaOBJ->Count; i++) {
		showFiguraCorte^ objFC = ListaOBJ[i];
		lineasArchivo[i] = Convert::ToString(objFC->getID()) + ";" + objFC->getAutor() + ";" + objFC->getMaterial() + ";" + objFC->getFechaCreacion() + ";" + objFC->getDiseño();
	}
	File::WriteAllLines("Figuras_Predeterminadas.txt", lineasArchivo);
}