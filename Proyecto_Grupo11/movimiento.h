#pragma once

public ref class movimiento {
	private:
		int velocidad;
		int tiempo;
		double icoordenadaX;
		double icoordenadaY;
		double icoordenadaZ;
		double fcoordenadaX;
		double fcoordenadaY;
		double fcoordenadaZ;
	public:
		movimiento();
		movimiento(int velocidad, int tiempo, double icoordenadaX, double icoordenadaY, double icoordenadaZ, double fcoordenadaX, double fcoordenadaY, double fcoordenadaZ);

};
