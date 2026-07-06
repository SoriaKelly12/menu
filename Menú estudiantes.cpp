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
        printf("11.- Julixa MuÃ±oz \n");
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
			printf("\nUsted selecciona el Programa 1\n");
			system("cls");
			
			printf("\n--- PROGRAMA DE MARY AGURTO ---\n");
			printf("--- Uso de la funcion strrchr() ---\n\n");
			
			char textoMary[100];
			char letraMary;
			char *punteroMary;
			
			printf("Ingrese una cadena: ");
			fflush(stdin);
			gets(textoMary);
			
			printf("Ingrese un caracter a buscar: ");
			scanf(" %c", &letraMary);
			
			punteroMary = strrchr(textoMary, letraMary);
			
			if (punteroMary != NULL)
			{
			printf("\nLa ultima aparicion del caracter '%c' se encuentra en:\n", letraMary);
			printf("%s\n", punteroMary);
			printf("Posicion: %d\n", punteroMary - textoMary);
			}
			else
			{
			printf("\nEl caracter '%c' no se encuentra en la cadena.\n", letraMary);
			}
			system("pause");
			break;
			
            case 2:
                printf("\nUsted selecciono el Programa 2\n");
                system("pause");
                break;

            case 3:
				printf("\nUsted selecciono el Programa 3\n");
    			system("cls");
    			printf("---PROGRAMA DE ROUS---\n");
    			printf("---USO DE LA FUNCION STRRCHR---\n");

    			char cadena[50];
    			char buscar;
    			char *resultado;

    			printf("Ingrese una palabra (sin espacios): ");
    			scanf("%s", cadena);

    			printf("Ingrese el caracter a buscar: ");
    			scanf(" %c", &buscar);

    			resultado = strrchr(cadena, buscar);

    			printf("\nRESULTADO\n");

    			if(resultado != NULL)
    			{
        			printf("Se encontro el caracter.\n");
        			printf("Posicion: %d\n", resultado - cadena + 1);
        			printf("Texto desde la ultima aparicion: %s\n", resultado);
    			}
    			else
    			{
        			printf("No se encontro el caracter en la cadena.\n");
    			}

    			printf("\n");
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
            case 6: {
            cout << "\n--- Opcion 6: Juan Guzman (strpbrk manual) ---\n";
            
            // 1. Textos de prueba
            char texto[] = "Juan_Guzman@2026";
            char simbolos[] = "@_#"; 
            
            // 2. Variables para buscar
            bool encontrado = false;
            char simbolo_encontrado;
            int posicion_encontrada;

            // (bucle anidado)
            for (int i = 0; texto[i] != '\0'; i++) {
                for (int j = 0; simbolos[j] != '\0'; j++) {
                    if (texto[i] == simbolos[j]) {
                        encontrado = true;
                        simbolo_encontrado = texto[i];
                        posicion_encontrada = i;
                        break; 
                    }
                }
                if (encontrado) break; 
            }

            if (encontrado) {
                cout << "Se encontro el simbolo '" << simbolo_encontrado 
                     << "' en la posicion " << posicion_encontrada << "\n";
            } else {
                cout << "No se encontro ningun simbolo de la lista.\n";
            }
            
            cout << "\nPresione una tecla para volver al menu...";
            system("pause>nul"); 
            break;
        }
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

            case 10:{
			
			system("cls");
			printf("--- PROGRAMA DE MELVIN MERINO ---\n");
			printf("--- EJEMPLO CON HOLA MUNDO ---\n");
			
			string texto = "Hola Mundo";
			int inicio = 0;
			int longitud = 4;
			
			string resultado = texto.substr(inicio, longitud);
			
			printf("Cadena original: %s\n", texto.c_str());
			printf("Resultado (substr de 0 a 4): %s\n", resultado.c_str());
			system("pause");
			break;
			 }
			 
            case 11:
                printf("\nUsted selecciono el Programa 11\n");
                system("cls");
				printf("\n---PROGRAMA DE JULIXA MUÃ‘OZ---\n");
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
                printf("\n--- PROGRAMA DE PAULA MURILLO ---\n");
                printf("--- Uso de la funcion tolower ---\n");
                
                char cadena1[60];
                char cadena2[60];
                int tieneNumero = 0; 

                // Pedir una sola palabra unida
                printf("Ingrese una palabra en MAYUSCULAS (sin espacios): ");
                cin >> cadena1;

                // Revisar si ingresan numeros en vez de letras
                for(int i = 0; cadena1[i] != '\0'; i++) {
                    if(cadena1[i] >= '0' && cadena1[i] <= '9') {
                        tieneNumero = 1; // Encontro un numero
                        break;
                    }
                }

                // Si tiene numeros, muestra error y no hace nada mas
                if(tieneNumero == 1) {
                    printf("\n[ERROR] No se permiten numeros. Ingrese solo texto.\n");
                } 
                else {
                    int i;
                    for(i = 0; cadena1[i] != '\0'; i++) {
                        cadena2[i] = tolower(cadena1[i]);
                    }
                    // AÃ±adimos el caracter nulo para cerrar correctamente la cadena2
                    cadena2[i] = '\0';

                    // Mostramos el resultado
                    printf("\n RESULTADO \n");
                    printf("Cadena original: %s\n", cadena1);
                    printf("Cadena en minusculas: %s\n", cadena2);
                }

                printf("\n");
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
    			printf("Â¿Cuantos caracteres desea comparar?: ");
    			scanf("%d", &n);
    			if (strncmp(cadena1, cadena2, n) == 0){
    			    printf("\nLas primeras %d letras son iguales.\n", n);
    			} else {
    			    printf("\nLas primeras %d letras son diferentes.\n", n);
    			}
    			system("pause");
                break;
			
			case 15:{
				printf("\nUsted selecciono el Programa 15\n");
				system("cls");
				printf("--- PROGRAMA DE CRISTOPHER SEGURA ---\n");
				printf("--- Uso de la funcion strtok ---\n\n");

				char cadena[100];
				char *token;

				cin.ignore();

				printf("Ingrese una frase: ");
				cin.getline(cadena, 100);

				token = strtok(cadena, " ");

				printf("\nRESULTADO\n");

				while (token != NULL)
					{
						printf("%s\n", token);
						token = strtok(NULL, " ");
						}

				printf("\n");
				system("pause");
				break;
				}

 
            case 16:
                printf("\nUsted selecciono el Programa 16\n");
                system("pause");
                break;

            case 17:{
			printf("\nUsted selecciono el Programa 17\n");
			system("cls");
			printf("---PROGRAMA DE KELLY SORIA---\n");
			printf("---USO DE LA FUNCION MEMSET---\n");
			char nombre[30];
			printf("Ingrese su nombre: ");
			fgets(nombre, sizeof(nombre), stdin);
			printf("Nombre ingresado: %s", nombre);
			// BORRAR el contenido con memset
			 memset(nombre, 0, sizeof(nombre));
			  printf("\nNombre borrado con memset: '%s'\n", nombre);
			  printf("Ingrese otro nombre: ");
			  fgets(nombre, sizeof(nombre), stdin);
			  printf("Nuevo nombre: %s", nombre);
			  system("pause");
			  break;
			  }

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
            case 19:{
                 
                  printf("\nUsted selecciono el Programa 19\n");
                  system("cls");
                  printf("--- PROGRAMA DE Melany Vinueza ---\n");
                  printf("--- Uso de la funcion strtok ---\n");

                  char cadena[100];
                  char *token;

                  printf("Ingrese una frase corta (con espacios): ");
    
                  cin.clear();
                  fflush(stdin); 
    
                  cin.getline(cadena, 100);
    
                  printf("\n--- RESULTADO (Palabras separadas) ---\n");
   
                  token = strtok(cadena, " ");

                  int i = 1;
   
                  while (token != NULL) {
                      printf("Palabra %d: %s\n", i, token);
        
                      token = strtok(NULL, " ");
                      i++;
                  }

                  printf("\n");
                  system("pause");
                  break;
                }

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
