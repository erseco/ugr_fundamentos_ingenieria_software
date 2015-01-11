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

public class UsuarioVIP {
    private String nombre;
    private String correo;
    
    UsuarioVIP(String nombre, String correo){
        this.nombre = nombre;
        this.correo = correo;
    }
    
    String getNombre() {
        return this.nombre;
    }
}
