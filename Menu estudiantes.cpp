#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void menu();

void menu() {
    int op;

    do {
        system("cls");

        printf("========== MENU ==========\n");
        printf("1.- Maria Jose Agurto \n");
        printf("2.- Keyla Almache \n");
        printf("3.- Rosmery Alvarez \n");
        printf("4.- Juan Andrade \n");
        printf("5.- Josue Correa \n");
        printf("6.- Juan Guzman \n");
        printf("7.- Emerson Jami \n");
        printf("8.- Angel Lara \n");
        printf("9.- Maria Jose Manzo \n");
        printf("10.- Melvin Merino \n");
        printf("11.- Julixa Muñoz \n");
        printf("12.- Paula Murillo \n");
        printf("13.- Kristen Naranjo \n");
        printf("14.- Britany Quispe \n");
        printf("15.- Critopher Segura \n");
        printf("16.- Jonathan Silva \n");
        printf("17.- Kelly Soria \n");
        printf("18.- Bernabe Timaran\n");
        printf("19.- Melany Vinueza \n");
        printf("20.- Damaris Zapata \n");
        printf("21.- Salir\n");

        printf("\nElija una opcion: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("\nUsted selecciono el Programa 1\n");
                system("pause");
                break;

            case 2:
                printf("\nUsted selecciono el Programa 2\n");
                system("pause");
                break;

            case 3:
                printf("\nUsted selecciono el Programa 3\n");
                system("pause");
                break;

            case 4:
                printf("\nUsted selecciono el Programa 4\n");
                system("pause");
                break;

            case 5:
                printf("\nUsted selecciono el Programa 5\n");
                system("pause");
                break;

            case 6:
                printf("\nUsted selecciono el Programa 6\n");
                system("pause");
                break;

            case 7:
                printf("\nUsted selecciono el Programa 7\n");
                system("pause");
                break;

            case 8:
                printf("\nUsted selecciono el Programa 8\n");
                system("pause");
                break;

            case 9:
                printf("\nUsted selecciono el Programa 9\n");
                system("pause");
                break;

            case 10:
                printf("\nUsted selecciono el Programa 10\n");
                system("pause");
                break;

            case 11:
                printf("\nUsted selecciono el Programa 11\n");
                system("pause");
                break;

            case 12:
                printf("\nUsted selecciono el Programa 12\n");
                system("pause");
                break;

            case 13:
                printf("\nUsted selecciono el Programa 13\n");
                system("pause");
                break;

            case 14:
                printf("\nUsted selecciono el Programa 14\n");
                system("pause");
                break;

            case 15:
                printf("\nUsted selecciono el Programa 15\n");
                system("pause");
                break;

            case 16:
                printf("\nUsted selecciono el Programa 16\n");
                system("pause");
                break;

            case 17:
                printf("\nUsted selecciono el Programa 17\n");
                system("pause");
                break;

            case 18:
                printf("\nUsted selecciono el Programa 18\n");
                system("pause");
                break;

            case 19:
                printf("\nUsted selecciono el Programa 19\n");
                system("pause");
                break;

            case 20:
                printf("\nUsted selecciono el Programa 20\n");
                system("pause");
                break;

            case 21:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
                system("pause");
        }

    } while(op != 21);
}

int main() {
    menu();
    return 0;
}