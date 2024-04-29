#pragma once
using namespace System;

namespace Proyecto_SistemaCNC_model {
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

		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ tipo);
		int getNumUsuarios();
		void setNumUsuarios(int num_usuarios);
		String^ getFechaCompra();
		void setFechaCompra(String^ fecha_compra);
		String^ getFechaVencimiento();
		void setFechaVencimiento(String^ fecha_vencimiento);
	};
};