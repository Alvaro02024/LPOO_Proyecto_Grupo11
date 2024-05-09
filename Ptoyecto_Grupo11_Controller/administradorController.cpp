#include "administradorController.h"

using namespace Proyecto_SistemaCNC_Controller;
using namespace System::IO;

administradorController::administradorController() {

}

int administradorController::confirmar_administradorController(String^ user, String^cont) {
	int confirmar;
	confirmar = 0;
	array<String^>^ linea = File::ReadAllLines("cuenta_admin.txt");
	String^ separador = ";";
	for each (String ^ administrador in linea) {
		array<String^>^ datos = administrador->Split(separador->ToCharArray());
		int user = Convert::ToInt32(datos[0]);
		String^ contraseña = datos[1];
		String^ contacto = datos[2];
		int usos = Convert::ToInt32(datos[3]);

		if ((user == Convert::ToInt32(user)) && (cont == contraseña)) {
			confirmar = 1;
		}
	}
	return(confirmar);
}