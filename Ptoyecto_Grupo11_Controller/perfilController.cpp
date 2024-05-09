#include"perfilController.h"
#include"licenciaController.h"

using namespace Proyecto_SistemaCNC_Controller;
using namespace System::IO;

perfilController::perfilController() {

}

int perfilController::confirmar_user(String^ p_user, String^ p_cont) {
	int confirmar;
	confirmar = 0;
	//licencia^ lice;
	array<String^>^ linea = File::ReadAllLines("user_cuentas.txt");
	String^ separador = ";";
	for each (String ^ perfiles in linea) {
		array<String^>^ datos = perfiles->Split(separador->ToCharArray());

		int user = Convert::ToInt32(datos[0]);
		String^ contraseña = datos[1];
		String^ contacto = datos[3];
		int dias_restantes = Convert::ToInt32(datos[2]);
		String^ saved_plantillas = datos[4];
		String^ historial = datos[5];
		//licencia^ objlicencia = lice;

		if ((Convert::ToInt32(p_user) == Convert::ToInt32(user)) && (p_cont == contraseña) && (dias_restantes>0)) {
			confirmar = 1;
		}
	}
	return(confirmar);
}
