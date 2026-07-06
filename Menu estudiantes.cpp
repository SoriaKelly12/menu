#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // <--- ESTA DEBE ESTAR ARRIBA PARA QUE INCLUYA EL STRCHR
using namespace std;

void menu();
char *strpbrk1(const char *cadena, const char *buscar);
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

            case 5: {
               printf("\nUsted selecciono el Programa 5\n");
               system("cls");
               printf("--- PROGRAMA DE Josue Correa ---\n");
               printf("--- Uso de la funcion strcmp ---\n");

              // 1. Declarar variables
            char cadena1[50];
            char cadena2[50];
            printf("Ingrese la primera palabra (sin espacios): ");
            cin >> cadena1;
            printf("Ingrese la segunda palabra (sin espacios): ");
            cin >> cadena2;
    
               // 2. Comparar con strcmp
            int comparacion = strcmp(cadena1, cadena2);
    
               // 3. Mostrar resultado
            printf("\n RESULTADO \n");
             if(comparacion == 0) {
             printf("Las palabras son IGUALES.\n");
        } 
             else {
             printf("Las palabras son DIFERENTES.\n");
        }
            printf("\n");
            system("pause");
            break;
         }
            case 6:
                printf("\nUsted selecciono el Programa 6\n");
                system("pause");
                break;

            case 7:{
                printf("\nUsted selecciono el Programa 7\n");
                system("cls");
                printf("--- PROGRAMA DE EMERSON JAMI ---\n");
                printf("--- Uso de strncat con punteros ---\n\n");
                
                char dest[100];
                char src[100];
                int n;

                printf("Ingrese la primera palabra (destino): ");
                cin >> dest;
                printf("Ingrese la segunda palabra (origen): ");
                cin >> src;
                printf("Cuantos caracteres desea concatenar?: ");
                cin >> n;

                char *pDest = dest;
                char *pSrc = src;

                while(*pDest != '\0') {
                    pDest++;
                }

                while(n > 0 && *pSrc != '\0') {
                    *pDest = *pSrc;
                    pDest++;
                    pSrc++;
                    n--;
                }

                *pDest = '\0';

                printf("\nRESULTADO\n");
                printf("La cadena final concatenada es: %s\n", dest);

                printf("\n");
                system("pause");
                break;
            }
            case 8: {
				
                printf("\nUsted selecciono el Programa 8\n");
                system("cls");
                printf("--- PROGRAMA DE ANGEL LARA ---\n");
                printf("--- Uso de la cadena Strchr ---\n");
                // 1. Declarar variables simples
                char cadena[50];
                char letra;
                char *resultado; 
                int tieneNumero = 0; // Variable bandera (0 = limpio, 1 = error)

                // 2. Pedir una sola palabra unida
                printf("Ingrese una palabra (sin espacios): ");
                cin >> cadena;

                // 3.  Revisar si ingresan numeros en vez de letras
                for(int i = 0; cadena[i] != '\0'; i++) {
                    if(cadena[i] >= '0' && cadena[i] <= '9') {
                        tieneNumero = 1; // Encontro un numero
                        break;
                    }
                }

                // 4. Si tiene numeros, muestra error y no hace nada mas
                if(tieneNumero == 1) {
                    printf("\n[ERROR] No se permiten numeros. Ingrese solo texto.\n");
                } 
                else {
                    // Si todo marcha bien sin errores, pide la letra y procesara
                    printf("Ingrese la letra a buscar: ");
                    cin >> letra;

                    // Convertir todo a minusculas para evitar fallas de las letras mayusculas
                    letra = tolower(letra);
                    for(int i = 0; cadena[i] != '\0'; i++) {
                        cadena[i] = tolower(cadena[i]);
                    }

                    // Usamos la funcion strchr
                    resultado = strchr(cadena, letra);

                    // Mostramos el resultado
                    printf("\n RESULTADO \n");
                    if (resultado != NULL) {
                        printf("La letra si existe dentro de la frase.\n");
                        printf("Texto desde esa letra en adelante: %s\n", resultado);
                    } else {
                        printf("La letra no se encontro.\n");
                    }
                }

                printf("\n");
                system("pause");
                break;
                }

            case 9:{
                printf("\nUsted selecciono el Programa 9\n");
                system("cls");
                printf("---PROGRAMA DE MARIA JOSE MANZO---\n");
                printf("---USO DE LA FUNCION STRPBRK---\n");

                char cadena[50];
                char buscar[50];
                char *resultado;

                printf("Ingrese una palabra (sin espacios): ");
                cin >> cadena;

                printf("Ingrese los caracteres a buscar: ");
                cin >> buscar;

                resultado = strpbrk1(cadena, buscar);
                printf("\nRESULTADO\n");


                if(resultado !=NULL)
                {
                  printf("Se encontro una coincidencia.\n");
                  printf("Texto desde la coincidencia: %s\n", resultado);
                }
                else
                {
                    printf("No se encontro ninguna coincidencia.\n");
                }

                printf("\n");
                system("pause");
                break;

                }

            case 10:
                printf("\nUsted selecciono el Programa 10\n");
                system("pause");
                break;
            case 11:
                printf("\nUsted selecciono el Programa 11\n");
                system("cls");
				printf("\n---PROGRAMA DE JULIXA MUÑOZ---\n");
				printf("--- Uso de la funcion clear()---\n\n");
				string cadena;
				
				cout << "Ingrese una cadena:";
				cin >> cadena;
				cout <<"\nCadena antes de clear():"<< cadena << endl;
				cadena.clear();
				cout << "cadena despues de clear():" << cadena << endl;
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
                system("cls");
				printf("\n--- PROGRAMA DE BRITANY QUISPE ---\n");
    			printf("--- Uso de la funcion strncmp ---\n\n");
    			char cadena1[50];
    			char cadena2[50];
    			int n;
    			printf("Ingrese la primera palabra: ");
    			scanf("%s", cadena1);
    			printf("Ingrese la segunda palabra: ");
    			scanf("%s", cadena2);
    			printf("¿Cuantos caracteres desea comparar?: ");
    			scanf("%d", &n);
    			if (strncmp(cadena1, cadena2, n) == 0){
    			    printf("\nLas primeras %d letras son iguales.\n", n);
    			} else {
    			    printf("\nLas primeras %d letras son diferentes.\n", n);
    			}
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

            case 18: {

                 printf("\nUsted selecciono el Programa 18\n");
                 system("cls");
                 printf("--- PROGRAMA DE BERNABE TIMARAN ---\n");
                 printf("--- Uso manual de la funcion strcat ---\n\n");

                 char cadena1[100];
                 char cadena2[100];

                 printf("Ingrese la primera palabra: ");
                 scanf("%s", cadena1);

                 printf("Ingrese la segunda palabra: ");
                 scanf("%s", cadena2);

                 int i = 0;
                 int j = 0;

                 while(cadena1[i] != '\0')
                 {
                 i++;
                 }

                 while(cadena2[j] != '\0')
                 {
                 cadena1[i] = cadena2[j];
                 i++;
                 j++;
                 }

                 cadena1[i] = '\0';

                 printf("\nRESULTADO\n");
                 printf("La cadena concatenada es: %s\n", cadena1);

                 printf("\n");
                 system("pause");
                 break;
                 }
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
//protipo de strpbrk  mariajosemanzo
char *strpbrk1(const char *cadena, const char *buscar)
{
     const char *p;
     while(*cadena !='\0')
     {
     p = buscar;
     while(*p !='\0')
     {
         if(*cadena==*p)
         {
            return (char *)cadena;
         }

         p++;

         }

         cadena++;

         }

         return NULL;

     }
// FIN DEL PROTOTIPO//
int main() {
    menu();
    return 0;
}
