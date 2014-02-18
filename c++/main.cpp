/**
 * Exercício de modelagem Motor/Automóvel
 *
 * Uma oficina que instala motores deseja manter informações sobre o
 * motor e o veículo. Deve-se possibilitar manter informações sobre
 * a potência e o ano de fabricação do motor. Sobre o veículo, deve-se
 * manter ano de fabricação e marca. Ainda deve-se associar o motor
 * ao veículo em que ele foi instalado
 */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "automobile.cpp"

int main()
{

	Automobile car;
	Engine v8;

	string marca;
	unsigned ano;
	float potencia;

	cout << "Oficina de motores:\nDigite a marca e o ano de fabricação do veículo:\nDigite a marca:\n";
	cin >> marca;
	car.setBrand(marca);

	cout << "\nAgora digite o ano de fabricação do veículo:\n";
	cin >> ano;
	car.setYear(ano);

	cout << "\nFoi realizada a troca do motor deste veículo, insira as informações sobre ele:\n";
	cout << "Digite a potência, em CV, do motor instalado:\n";
	cin >> potencia;

	v8.setPower(potencia);

	cout << "\nDigite agora o ano de fabricação do motor:\n";
	cin >> ano;

	v8.setYear(ano);

	car.setEngine(&v8);

	cout << "O carro revisionado é um " << car.getBrand() << ", de " << car.getYear() << ".\n";
	cout << "Agora, o carro tem um motor de " << car.getEngine()->getPower() << " cv, do ano de " << car.getEngine()->getYear() << '.';

	return 0;
}