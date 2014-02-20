#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "engine.cpp"

#define DEFAULT_BRAND "Wow Such Car"

/**
 * Classe do automóvel
 */
class Automobile {

	/**
	 * Atributos protegidos
	 */
	protected:
		/**
		 * O motor instalado no carro
		 */
		Engine *engine;

		/**
		 * O ano de fabricação
		 */
		unsigned year;

		/**
		 * Marca do carro
		 */
		std::string brand;

	/**
	 * Métodos públicos
	 */
	public:

		/**
		 * Construtor simples
		 */
		Automobile() {
			Engine e;
			std::string marca;
			marca = DEFAULT_BRAND;
			this->setEngine(&e);
			this->setYear((unsigned)DEFAULT_YEAR);
			this->setBrand(marca);
		}

		/**
		 * Construtor setando os atributos
		 */
		Automobile(Engine *eng, unsigned y, std::string brn) {
			this->setEngine(eng);
			this->setYear(y);
			this->setBrand(brn);
		}

		/**
		 * Getters & Setters
		 */

		/**
		 * Setter de marca
		 * @param b String para a marca do automóvel
		 */
		void setBrand(std::string b) {
			if(b.length() < 2)
				throw 1;

			this->brand = b;
		}

		/**
		 * getter da marca
		 * @return retorna a marca do automóvel
		 */
		std::string getBrand() {

			return this->brand;

		}

		/**
		 * Setter do ano do automóvel
		 * @param y ano do automóvel
		 */
		void setYear(unsigned y) {
			if(y < (unsigned) DEFAULT_YEAR)
				throw 1;

			this->year = y;
		}

		/**
		 * Getter do ano do automóvel
		 * @return ano do automóvel
		 */
		unsigned getYear() {

			this->year;

		}

		/**
		 * Setter do motor do automóvel
		 * @param eng Motor do automóvel
		 */
		void setEngine(Engine *eng) {

			if(!eng->isValid())
				throw 2;

			this->engine = eng;

		}

		/**
		 * Getter do moto do automóvel
		 * @return Motor do automóvel
		 */
		Engine *getEngine() {

			return this->engine;

		}

};