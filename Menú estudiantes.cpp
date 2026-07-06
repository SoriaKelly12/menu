caso 3: {
    sistema("clase");
    imprimirf("======== PROGRAMA CASO 3 ========\norte");
    imprimirf("--- PROGRAMA DE ROSMERY ALVAREZ ---\norte");
    imprimirf("--- USO DE LA FUNCION STRRCHR ---\n\norte");

    carbonizarse cadena[50];
    carbonizarse buscar;
    carbonizarse *resultado;

    imprimirf("Ingrese una palabra (sin espacios): ");
    escanearf("%s", cadena);

    imprimirf("Ingrese el caracter a buscar: ");
    escanearf(" %c", &buscar);

    resultado = strrchr(cadena, buscar);

    imprimirf("\norteRESULTADO:\norte");
    si (resultado != NULO) {
        imprimirf("Se encontro el caracter.\norte");
        imprimirf("Posicion: %d\norte", resultado - cadena + 1);
        imprimirf("Texto desde esa aparicion: %s\norte", resultado);
    } demas {
        imprimirf("No se encontro el caracter en la cadena.\norte");
    }

    sistema("pausa");
    romper;
}


