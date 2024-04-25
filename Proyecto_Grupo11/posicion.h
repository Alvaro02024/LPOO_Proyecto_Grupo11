#pragma once

public ref class posicion {
	private:
		double coordenada_X;
		double coordenada_Y;
		double coordenada_Z;
		double referencia_X;
		double referencia_Y;
		double referencia_Z;
		List<estado_corte^>^ listestado_corte;
	public:
		´posicion();
		posicion(double coordenada_X, double coordenada_Y, double coordenada_Z, double referencia_X, double referencia_Y, double referencia_Z, List<estado_corte^>^ listestado_corte;);
};
