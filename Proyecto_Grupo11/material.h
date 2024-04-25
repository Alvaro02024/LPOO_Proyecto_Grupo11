#pragma once

using namespace System;

public ref class material {
	private:
		int codigo;
		String^ nombre_material;
		int dimensiones_max;
		String^ dureza;
		int rev_husillo;

	public:
		material();
		material(int codigo, String^nombre_material, int dimensiones_max, String^dureza);
};
