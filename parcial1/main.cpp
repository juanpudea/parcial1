#include <iostream>

using namespace std;

void v_horizontal();
void v_vertical();
void p_horizontal();
void p_vertical();


int main()
{
    int opcion = -1;
    while(opcion!=0)
    {
        cout <<"^^^^^^^^^^^^^ Programa de Defensa ^^^^^^^^^^^^^"<<endl;
        cout <<"Ingrese 1: Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo."<<endl;
        cout <<"Ingrese 2: Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo."<<endl;
        cout <<"Ingrese 3: Dado un disparo ofensivo, generar un disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido."endl;
        cout <<"Ingrese 4: Dado un disparo ofensivo, generar disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;

        switch(opcion)
        {
            case1:
        {
            float v_inicial, angulo;

            cout <<"Introduzca la velocidad inicial ofensiva en km/h"<<endl;
            cin >>v_inicial;
            cout <<"Introduzca el angulo de inclinacion"<<endl;
            cin >>angulo;

        }


        }

    }

}

void v_horizontal():
{

}
