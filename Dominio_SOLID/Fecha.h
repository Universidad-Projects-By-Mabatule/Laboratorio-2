#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha(int dia,int mes, int anio) {
		this->dia = dia;
		this->mes = mes;
		this->anio = anio;
	}
	int diferenciaEntreFechas(Fecha* b) {
		int res,_dia, _mes, _anio;
		_dia = dia - b->dia;
		_mes = mes - b->mes;
		_anio = anio - b->anio;
		res = _dia + _mes * 30 + _anio * 365;
		return res;
	}
	int getDia() { return dia; }
	int getMes() { return mes; }
	int getAnio() { return anio; }
	void getDia(int dia)   {  this->dia=dia; }
	void getMes(int mes)   { this->mes = mes; }
	void getAnio(int anio) { this->anio=anio; }
};

