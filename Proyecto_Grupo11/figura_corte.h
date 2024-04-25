#pragma once

using namespace System;

public ref class figura_corte {
	private:
		String^ autor;
		String^ material;
		String^ fecha_creacion;
		String^ diseño;
		tipo_accion^ objtipo_accion;
		List<linea_corte^>^ Listlinea_corte

	public:
		figura_corte();
		figura_corte(String^ autor, String^ material, String^ fecha_creacion, String^ diseño, tipo_accion^ objtipo_accion);
};