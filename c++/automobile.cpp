#include <iostream>
#include <stdlib.h>
#include <stdio.h>

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
		Automobile() {
			Engine e();
			this->setEngine(e);
			this->setYear(DEFAULT_YEAR);
			this->setBrand(DEFAULT_BRAND);
		}

		Automobile(Engine *eng, unsigned y, std::string brn) {
			this->setEngine(eng);
			this->setYear(y);
			this->setBrand(brn);
		}

		void setBrand(std::string b) {
			if(strlen(b) < 2)
				throw 1;

			this->brand = b;
		}

		std::string getBrand() {

			return this->brand;

		}

		void setYear(unsigned y) {
			if(y < 1800)
				throw 1;

			this->year = y;
		}

		unsigned getYear() {

			this->year;

		}

		void setEngine(Engine eng) {

			if(!eng->isValid())
				throw 2;

			this->engine = eng;

		}

		Engine *getEngine() {

			return this->engine;

		}

};