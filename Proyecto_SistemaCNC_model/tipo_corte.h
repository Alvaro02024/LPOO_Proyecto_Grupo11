#pragma once


using namespace System;


namespace Proyecto_SistemaCNC_model {
	public ref class tipo_corte  {
	private:
		int codigo;
		String^ tipo;
		double posicion_husillo;
		int offset;
		
	public:
		tipo_corte();
		tipo_corte(int codigo, String^ tipo, int offset, double posicion_husillo);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ tipo);
		double getPosicionHusillo();
		void setPosicionHusillo(double posicion_husillo);
		int getOffset();
		void setOffset(int offset); 
	};
};