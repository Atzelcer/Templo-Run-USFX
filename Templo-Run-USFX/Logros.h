#pragma once
class Logros
{
private:
	char NombreLogro;
	int CantidadSuperada, dicultad, recompasas;
public:
	void IdentificadordeLogro(char NombreLogro);
	void LogroDesbloqueado(int dificultad, int cantidadSuperada);
	void ObtenerInformacion(char NombreLogro, int CantidadSuperada, int dificultad, int recompesas);
};

