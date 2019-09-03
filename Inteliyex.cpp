#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
void menu();
void inscribir();
void modificar();
void baja_alumnos();
void visualizar();
void matricula();
void lista_baja();

FILE *ins;
FILE *baja;
FILE *mod;

struct formulario
{
	char nombre[50];
	char direccion[100];
	char telefono_fijo[20];
	char telefono_movil[20];
	char correo[20];
	char carrera[20];
	char edad[20];
	char job[20];
	char matricula[50];
	char situacion[20];
	
	
}datos;

int main()
{
	system("COLOR F5");
	
	int salir;
	int opc;
	
	while(salir == 0)
	{
		opc=-1;
		menu();
		scanf("%d",&opc);
		fflush(stdin);	
		
		if(opc==7)salir =1;
		if(opc==1) inscribir();
		if(opc==2) modificar();
		if(opc==3) baja_alumnos();
		if(opc==4) lista_baja();
		if(opc==5) visualizar();
		if(opc==6) matricula();
		
	}
	
	return 0;
}
void menu()
{
	printf("\t\tLos Heroes del Manana.\n");
	printf("____________________________________________________\n");
	printf("*");printf("Seleccione una opcion: ");				printf("\t\t\t*\n");
    printf("*");printf("1. Inscripcion.");						printf("\t\t\t\t*\n");
    printf("*");printf("2. Modificar Alumnos.");				printf("\t\t\t\t*\n");
	printf("*");printf("3. Baja de alumnos del plantel.");		printf("\t\t*\n");
    printf("*");printf("4. Ver lista de bajas.");				printf("\t\t\t\t*\n");
    printf("*");printf("5. Visualizar todos los datos de los alumnos.");printf("\t*\n");
    printf("*");printf("6. Consultar por numero de matricula.");printf("\t\t*\n");
	printf("*");printf("7. Salir.");							printf("\t\t\t\t\t*\n");
    printf("____________________________________________________\n");
}
void inscribir()
{
	char* inscritos = "Relacion general de alumnos.txt";
	
	ins = fopen(inscritos,"at");
	
	if (inscritos==NULL) exit(1);
	
	printf("\n\nNombre: "); gets(datos.nombre);
    printf("Direccion: "); gets(datos.direccion);
    printf("Telefono fijo: "); gets(datos.telefono_fijo);
    printf("Telefono movil: "); gets(datos.telefono_movil);
    printf("Correo electronico:"); gets(datos.correo);
    printf("Carrera que vas a cursar: "); gets(datos.carrera);
    printf("Edad del alumno: "); gets(datos.edad);
    printf("El alumno trabaja?: "); gets(datos.job);
    printf("Ecribe la matricula del alumno: "); gets(datos.matricula);
    printf("Estado escolar (Activo/Inactivo): "); gets(datos.situacion);
       
    fprintf(ins,"\n\nNombre: ");
            fwrite(datos.nombre,1,strlen(datos.nombre),ins);
        fprintf(ins,"\nDireccion: ");
            fwrite(datos.direccion,1,strlen(datos.direccion),ins);
        fprintf(ins,"\nTelefono fijo: ");
            fwrite(datos.telefono_fijo,1,strlen(datos.telefono_fijo),ins);
        fprintf(ins,"\nTelefono movil: ");
            fwrite(datos.telefono_movil,1,strlen(datos.telefono_movil),ins);
        fprintf(ins,"\nCorreo electronico: ");
            fwrite(datos.correo,1,strlen(datos.correo),ins);
        fprintf(ins,"\nCarrera que vas a cursar:");
            fwrite(datos.carrera,1,strlen(datos.carrera),ins);
        fprintf(ins,"\nEdad del alumno: ");
            fwrite(datos.edad,1,strlen(datos.edad),ins);
        fprintf(ins,"\nEl alumno trabaja?: ");
            fwrite(datos.job,1,strlen(datos.job),ins);
        fprintf(ins,"\nEscribe la matricula del alumno: ");
        	fwrite(datos.matricula,1,strlen(datos.matricula),ins);
        fprintf(ins,"\nEstado escolar (Activo/Inactivo): ");
        	fwrite(datos.situacion,1,strlen(datos.situacion),ins);
        	printf("\n\n");
        	printf("\n\n");
	fclose(ins);
	printf("\n\n");
}
void modificar()
{
 	char* modificados = "Modificdos.txt";
	
	mod = fopen(modificados,"at");
	
	if (modificados==NULL) exit(1);
	
	printf("Ingresa los datos de la persona a modifcar: ");
	
	printf("\n\nNuevo nombre: "); gets(datos.nombre);
    printf("Nueva direccion: "); gets(datos.direccion);
    printf("Nueva telefono fijo: "); gets(datos.telefono_fijo);
    printf("Nueva telefono movil: "); gets(datos.telefono_movil);
    printf("Nueva correo electronico:"); gets(datos.correo);
    printf("Nueva carrera que vas a cursar: "); gets(datos.carrera);
    printf("Nueva edad del alumno: "); gets(datos.edad);
    printf("Nueva el alumno trabaja?: "); gets(datos.job);
    printf("Nueva ecribe la matricula del alumno: "); gets(datos.matricula);
    printf("Nueva estado escolar (Activo/Inactivo): "); gets(datos.situacion);
       
    fprintf(ins,"\n\nNombre: ");
            fwrite(datos.nombre,1,strlen(datos.nombre),mod);
        fprintf(mod,"\nDireccion: ");
            fwrite(datos.direccion,1,strlen(datos.direccion),mod);
        fprintf(mod,"\nTelefono fijo: ");
            fwrite(datos.telefono_fijo,1,strlen(datos.telefono_fijo),mod);
        fprintf(mod,"\nTelefono movil: ");
            fwrite(datos.telefono_movil,1,strlen(datos.telefono_movil),mod);
        fprintf(mod,"\nCorreo electronico: ");
            fwrite(datos.correo,1,strlen(datos.correo),mod);
        fprintf(mod,"\nCarrera que vas a cursar:");
            fwrite(datos.carrera,1,strlen(datos.carrera),mod);
        fprintf(mod,"\nEdad del alumno: ");
            fwrite(datos.edad,1,strlen(datos.edad),mod);
        fprintf(mod,"\nEl alumno trabaja?: ");
            fwrite(datos.job,1,strlen(datos.job),mod);
        fprintf(mod,"\nEscribe la matricula del alumno: ");
        	fwrite(datos.matricula,1,strlen(datos.matricula),mod);
        fprintf(mod,"\nEstado escolar (Activo/Inactivo): ");
        	fwrite(datos.situacion,1,strlen(datos.situacion),mod);
        	printf("\n\n");
        	printf("\n\n");
	fclose(mod);
	printf("\n\n");
	
	
}
void baja_alumnos()
{
	char* inactivo= "Alumnos dados de baja.txt";
	
	baja=fopen(inactivo ,"a");
	
	if(inactivo == NULL) exit(1);
	
	printf("\n\nNombre: "); gets(datos.nombre);
    printf("Direccion: "); gets(datos.direccion);
    printf("Telefono fijo: "); gets(datos.telefono_fijo);
    printf("Telefono movil: "); gets(datos.telefono_movil);
    printf("Correo electronico:"); gets(datos.correo);
    printf("Carrera estaba cursando: "); gets(datos.carrera);
    printf("Edad del alumno: "); gets(datos.edad);
    printf("El alumno trabaja?: "); gets(datos.job);
    printf("Ecribe la matricula del alumno: "); gets(datos.matricula);
    printf("\nEstado escolar (Activo/Inactivo): "); gets(datos.situacion);
       
    fprintf(ins,"\n\nNombre: ");
            fwrite(datos.nombre,1,strlen(datos.nombre),baja);
        fprintf(baja,"\nDireccion: ");
            fwrite(datos.direccion,1,strlen(datos.direccion),baja);
        fprintf(baja,"\nTelefono fijo: ");
            fwrite(datos.telefono_fijo,1,strlen(datos.telefono_fijo),baja);
        fprintf(baja,"\nTelefono movil: ");
            fwrite(datos.telefono_movil,1,strlen(datos.telefono_movil),baja);
        fprintf(baja,"\nCorreo electronico: ");
            fwrite(datos.correo,1,strlen(datos.correo),baja);
        fprintf(baja,"\nCarrera que vas a cursar:");
            fwrite(datos.carrera,1,strlen(datos.carrera),baja);
        fprintf(baja,"\nEdad del alumno: ");
            fwrite(datos.edad,1,strlen(datos.edad),baja);
        fprintf(baja,"\nEl alumno trabaja?: ");
            fwrite(datos.job,1,strlen(datos.job),baja);
        fprintf(baja,"\nEscribe la matricula del alumno: ");
        	fwrite(datos.matricula,1,strlen(datos.matricula),baja);
        fprintf(baja,"\nEstado escolar (Activo/Inactivo): ");
        	fwrite(datos.situacion,1,strlen(datos.situacion),baja);
        	
	fclose(baja);
}
void lista_baja()
{
	int c;
	char inactivos[]= "Alumnos dados de baja.txt";
	baja=fopen(inactivos,"rt");
	if(baja==NULL)
	{
		printf("No hay archivo");
		exit(1);
	}
	while((c=fgetc(baja)) != EOF)
	{
		if(c=='\n')
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
	printf("\n\n\n");
	
	fclose(baja);	
	
	
	
}
void matricula()
{
	char mat[50];
	int cont=1;
	char* inscritos = "Relacion general de alumnos.txt";
	ins = fopen(inscritos,"a+");
	
	if(ins ==NULL)
	{
		printf("Aun no hay ningun achivo para leer.");
		exit(1);
	}
	printf("Digite la matricula que deca buscar: ");
	gets(mat);
	
	while(!feof(ins))
	{
		fread(&datos,sizeof(datos),1,ins);
		if(strcmp(mat,datos.matricula) != NULL)
		{
			printf("\nNombre: %s \nDireccion: %s \nTelefono: %s \nCarrera: %s\n\n",datos.nombre,datos.direccion,datos.telefono_movil,datos.carrera);
			
		}
		
		else
		{
			printf("No existe el estudiante");
			break;
		}
		
	}
	fclose(ins);
}
void visualizar()
{
	int c;
	char inscritos[]= "Relacion general de alumnos.txt";
	ins=fopen(inscritos,"rt");
	if(ins==NULL)
	{
		printf("No hay archivo");
		exit(1);
	}
	while((c=fgetc(ins)) != EOF)
	{
		if(c=='\n')
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
	printf("\n\n\n");
	
	fclose(ins);	
}
