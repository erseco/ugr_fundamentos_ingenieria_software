#ifndef FESTIVALPREMIO
#define FESTIVALPREMIO

#include <string>

/*  
 *  Fundamentos de Ingenieria del Software
 *  Grado en Ingeniería Informática
 * 
 *  2014 © Copyleft - All Wrongs Reserved
 *
 *  Ernesto Serrano <info@ernesto.es>
 *  
 *  
 * 
 */
namespace decine {

	class FestivalPremio {
	private:
		std::string nombre;

	public:
		FestivalPremio(const std::string &nombre);

		virtual std::string getNombre();
	};

}


#endif	//#ifndef FESTIVALPREMIO
