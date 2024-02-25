#pragma once
class TiendaRecompesas
{
private:
	int habilidades, potenciadores, monedas, gemas;
public:
	void CantidadArticulos(int habilidades, int potenciadores, int monedas, int gemas);
	void ComprarHabilidades(int habilidades, int potenciadores, int monedas, int gemas);
	void ComprarPotenciadores(int habilidades, int potenciadores, int monedas, int gemas);
	void ComprarMonedas(int monedas);
	void ComprarGemas(int gemas);
};

