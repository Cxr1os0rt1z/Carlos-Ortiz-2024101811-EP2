package com.unida.tarea9_polimorfismo;

/**
 *
 * @author Carlos Ortiz
 */
public class Tarea9_polimorfismo {

    public static void main(String[] args) {
        Empleado[] empleados = new Empleado[3];
        
        empleados[0] = new EmpledoFijo("Carlos Ortiz", 3500000.0);
        empleados[1] = new EmpleadoPorHora("Santi Peña", 120, 25000.0);
        empleados[2] = new EmpleadoPorHora("Villa Rica", 80, 50000.0);
        
        System.out.println("SUELDO DE EMPLEADOS");
        for (Empleado emp : empleados){
            System.out.println("Empleado: " + emp.getNombre() + "\nSueldo: " + emp.calcularSueldo());
        }
    }
}
