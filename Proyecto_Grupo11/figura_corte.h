#pragma once

using namespace System;

public ref class figura_corte {
	private:
		String^ autor;
		String^ material;
		String^ fecha_creacion;
		String^ dise�o;

	public:
		figura_corte();
		figura_corte(String^ autor, String^ material, String^ fecha_creacion, String^ dise�o);
};