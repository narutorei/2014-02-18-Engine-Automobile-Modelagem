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

		/**
		 * Construtor padrão
		 */
		Engine() {
			this->setYear(DEFAULT_YEAR);
			this->setPower(ZERO_FLOAT);
		}

		/**
		 * Construtor com inicialização externa de variáveis
		 */
		Engine(unsigned y, float p) {
			this->setYear(y);
			this->setPower(p);
		}

		/**
		 * Getters & Setters
		 */

		/**
		 * Setter do ano do motor
		 * @param y ano
		 */
		void setYear(unsigned y) {

			if(y < (unsigned) DEFAULT_YEAR)
				throw 1;

			this->year = y;

		}

		/**
		 * Getter do ano do motor
		 * @return ano
		 */
		unsigned getYear() {
			return this->year;
		}

		/**
		 * Setter da potência do motor
		 * @param p potência em CV
		 */
		void setPower(float p) {
			if(p < ZERO_FLOAT)
				throw 1;

			this->power = p;
		}

		/**
		 * Getter da potência do motor
		 * @return potência
		 */
		float getPower() {
			return this->power;
		}

		/**
		 * Métodos de negócio
		 */

		/**
		 * Valida se as propriedades são válidas para validar o motor
		 * @return true se for válido, false se não
		 */
		bool isValid() {
			if(this->year < DEFAULT_YEAR || this->power < ZERO_FLOAT)
				return false;
			else
				return true;
		}

};