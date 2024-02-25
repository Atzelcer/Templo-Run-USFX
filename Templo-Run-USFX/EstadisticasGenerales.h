#pragma once
class EstadisticasGenerales
{
private:
	int partidasJugadas, partidaGanadas, partidasPerdidas, porcentajesVictorias;
public:
	void RegistroPartidas(int partidasJugadas, int partidasGanadas);
	void IncrementoPartidas(int partidasJugadas, int partidasGanadas);
	int ObtenerDatos(int partidasJugadas, int partidasGanadas, int porcentajesVictorias);
};

