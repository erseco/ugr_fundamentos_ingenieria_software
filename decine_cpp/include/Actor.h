#ifndef ACTOR
#define ACTOR

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

	 class Actor {
	private:
		std::string nombre;
		std::string nacionalidad;
		std::string webOficial;

	public:
		Actor(const std::string &nombre, const std::string &nacionalidad, const std::string &web);

		virtual std::string getNombre();
	 };

}


#endif	//#ifndef ACTOR
