#pragma once

#pragma once


using namespace System;


namespace Proyecto_SistemaCNC_model {
	public ref class showFiguraCorte {
	private:
		int ID;
		String^ autor;
		String^ material;
		String^ fecha_creacion;
		String^ dise�o;
		

	public:
		showFiguraCorte();
		showFiguraCorte(int ID, String^ autor, String^ material, String^ fecha_creacion, String^ dise�o);

		int showFiguraCorte::getID();
		void showFiguraCorte::setID(int ID);
		String^ showFiguraCorte::getAutor();
		void showFiguraCorte::setAutor(String^ autor);
		String^ showFiguraCorte::getMaterial();
		void showFiguraCorte::setMaterial(String^ material);
		String^ showFiguraCorte::getFechaCreacion();
		void showFiguraCorte::setFechaCreacion(String^ fecha_creacion);
		String^ showFiguraCorte::getDise�o();
		void showFiguraCorte::setDise�o(String^ dise�o);
		
	};
};
