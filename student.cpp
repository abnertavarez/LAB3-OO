/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Student class - exercise with TODOs
 * Due date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;


class Student{
    private:

    string name;
     int id;

     double gpa;

        public:
        Student() {
            name = "";
            id = 0;
            gpa = 0.0;

        }
        // TODO (Parte C): setName(string n)
        // Solo asigna si n no esta vacio.
        void setName(string n) {
                if (!n.empty())
                    name = n;
            }
         // TODO (Parte C): setGpa(double g)
        // Solo asigna si g esta entre 0.0 y 4.0 (inclusive).
        // Si no es valido, imprime un mensaje de error y no cambia el valor.

        void setGpa (double g) {
            if (g >= 0.0 && g <= 4.0) {
                gpa = g;
            } else {
                cout << " ERROR: GPA MUST BE BETWEEN 0.00 AND 4.00" << endl;
        }
      }
      void setId(int i) {
            id = i;
        }
     // TODO (Parte C): Getters con const: getName(), getId(), getGpa()
     
     string getName()const{return name;}
     int getId()const{return id;}
     double getGpa()const{return gpa;}
 // TODO (Parte C): printInfo() const
        // Imprime name, id, y gpa con formato similar a Book::printInfo()
void printinfo() const {
           cout << "Name:  " << name << "\n"
                 << "ID: " << id << "\n"
                 << "GPA: " << gpa << "\n";
        }
     // TODO (Parte D): Constructor with parameters (name, id, gpa).

     Student(string n, int i, double g) {
            name = n;
            id = i;
            setGpa(g);
        }

        // TODO (Parte C): setName(string n)
        // Solo asigna si n no esta vacio.

        // TODO (Parte C): setGpa(double g)
        // Solo asigna si g esta entre 0.0 y 4.0 (inclusive).
        // Si no es valido, imprime un mensaje de error y no cambia el valor.

        // TODO (Parte C): Getters con const: getName(), getId(), getGpa()

        // TODO (Parte C): printInfo() const
        // Imprime name, id, y gpa con formato similar a Book::printInfo()

        // ===== No los toques todavia - les toca mas adelante =====

        // TODO (Parte D): Constructor with parameters (name, id, gpa).

        // TODO (Parte E): Destructor.
        // Imprime un mensaje indicando que el objeto Student con ese 'name' fue destruido.
    };

int main() {
    // ===== Resuelve estos TODO ahora (Parte C) =====

    Student s1;
    cout << "---initial state ---" << endl;

    s1.setName("Abner");
    s1.printinfo();

    Student s2;
    s2.setId(1008);
    s2.printinfo();

    Student s3;
    s3.setGpa(3.5);
    s3.printinfo();

    // Prueba GPA invalido
    s3.setGpa(5.0);
    s3.printinfo();

    // ===== Parte D =====
    Student s4("Alicia Smith", 1001, 3.7);
    s4.printinfo();

    return 0;
}



 
    // TODO (Parte C): Crea un Student usando el constructor default,
    // asigna valores con los setters, e imprime con printInfo().
    // TODO (Parte C): Prueba setGpa() con un valor invalido (ej. 5.0)
    // y confirma que el mensaje de error aparece y el gpa no cambia.

    // ===== No lo toques todavia - le toca mas adelante =====

    // TODO (Parte D): Crea un segundo Student usando el constructor con
    // parametros, con datos dummy (ej. "Alice Smith", 1001, 3.7).

