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
package decine;

class FestivalPremio {
    private String nombre;
    
    FestivalPremio(String nombre){
        this.nombre = nombre;
    }
    
    protected String getNombre() {
        return this.nombre;
    }
}
