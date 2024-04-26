#pragma once

using namespace System;

namespace Proyecto_Grupo11_model {
	public ref class licencia {
	private:
		int codigo;
		String^ tipo;
		int num_usuarios;
		String^ fecha_compra;
		String^ fecha_vencimiento;

	public:
		licencia();
		licencia(int codigo, String^ tipo, int num_usuarios, String^ fecha_compra, String^ fecha_vencimiento);

		int getcodigo();
		void setcodigo(int codigo);
		String^ gettipo();
		void settipo(String^ tipo);
		int getnum_usuarios();
		void setnum_usuarios(int num_usuarios);
		String^ getfecha_compra();
		void setfecha_compra(String^ fecha_compra);
		String^ getfecha_vencimiento();
		void setfecha_vencimiento(String^ fecha_vencimiento);
	};
}

