#pragma once

using namespace System;

namespace Proyecto_Grupo11_model {
	public ref class material {
	private:
		int codigo;
		String^ nombre_material;
		int dimensiones_max;
		String^ dureza;
		int rev_husillo;

	public:
		material();
		material(int codigo, String^ nombre_material, int dimensiones_max, String^ dureza);
		int getcodigo();
		void setcodigo(int codigo);
		String^ getnombre_material();
		void setnombre_material(String^ nombre_material);
		int getdimensiones_max();
		void setdimensiones_max(int dimensiones_max);
		String^ getdureza();
		void setdureza(String^ dureza);
	};
}

