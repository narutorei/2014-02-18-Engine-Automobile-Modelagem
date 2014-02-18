#include <iostream>

#define DEFAULT_YEAR 1800
#define ZERO_FLOAT 0.0

/**
 * Classe de motor
 */
class Engine {

	/**
	 * Propriedades e métodos protegidos
	 */
	protected:
		/**
		 * Ano de fabricação
		 */
		unsigned year;

		/**
		 * Potência do motor, em CV
		 */
		float power;

	public:

		/**
		 * Constante para validar exception de range menor do que esperado
		 */
		const static unsigned EXCEPTION_INVALID_UNDER_RANGE = 1;

		Engine() {
			this->setYear(DEFAULT_YEAR);
			this->setPower(ZERO_FLOAT);
		}

		Engine(unsigned y, float p) {
			this->setYear(y);
			this->setPower(p);
		}

		void setYear(unsigned y) {

			if(y < DEFAULT_YEAR)
				throw 1;

			this->year = y;

		}

		unsigned getYear() {
			return this->year;
		}

		void setPower(float p) {
			if(p < ZERO_FLOAT)
				throw 1;

			this->power = p;
		}

		float getPower() {
			return this->power;
		}

		bool isValid() {
			if(this->year < DEFAULT_YEAR || this->power < ZERO_FLOAT)
				return false;
			else
				return true;
		}

}