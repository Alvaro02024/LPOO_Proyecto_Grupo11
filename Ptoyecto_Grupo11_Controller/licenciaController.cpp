#include "licenciaController.h"

using namespace Proyecto_SistemaCNC_Controller;
using namespace System::IO;
using namespace System;

licenciaController::licenciaController() {

}

List<licencia^>^ licenciaController::crearlista_licencias() {
	List<licencia^>^ listasLicencia = gcnew List<licencia^>();
	array<String^>^ lineas = File::ReadAllLines("user_licencias.txt");
	String^ separador = ";";
	for each (String ^ licencia in lineas) {
		array<String^>^ datos = licencia->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ tipo = datos[1];
		int num_usuarios = Convert::ToInt32(datos[2]);
		String^ fecha_compra = datos[3];
		String^ fecha_vencimiento = datos[4];
		
	}
	return(listasLicencia);
}

licencia^ licenciaController::asignar_licencia(List<licencia^>^ b,int a) {
	return(b[a]);
}