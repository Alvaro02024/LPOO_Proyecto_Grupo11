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

	};
};