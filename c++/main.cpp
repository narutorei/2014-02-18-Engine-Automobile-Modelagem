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
#include <string>

#include "automobile.cpp"

int main()
{

	Automobile car;
	Engine v8;

	std::string marca;
	unsigned ano;
	float potencia;

	/**
	 * Try ... catch é tratamento de exceções
	 */
	try {
		std::cout << "Oficina de motores:\nDigite a marca e o ano de fabricação do veículo:\nDigite a marca:\n";
		std::cin >> marca;
		car.setBrand(marca);

		std::cout << "\nAgora digite o ano de fabricação do veículo:\n";
		std::cin >> ano;
		car.setYear(ano);

		std::cout << "\nFoi realizada a troca do motor deste veículo, insira as informações sobre ele:\n";
		std::cout << "Digite a potência, em CV, do motor instalado:\n";
		std::cin >> potencia;

		v8.setPower(potencia);

		std::cout << "\nDigite agora o ano de fabricação do motor:\n";
		std::cin >> ano;

		v8.setYear(ano);

		car.setEngine(&v8);
	} catch (e) {
		if(e == Automobile::EXCEPTION_INVALID_UNDER_RANGE)
			std::cout << "Valor inválido para ano. Saindo...";
		else
			throw e;

		exit(1);
	}

	std::cout << "O carro revisionado é um " << car.getBrand() << ", de " << car.getYear() << ".\n";
	std::cout << "Agora, o carro tem um motor de " << car.getEngine()->getPower() << " cv, do ano de " << car.getEngine()->getYear() << ".\n";


	return 0;
}