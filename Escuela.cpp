#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include<fstream>
	 
using namespace std;

int main(){
	fstream archivo("Calificaciones.txt");
	float nt1, nt2, nt3, nt4, promedio, final, completivo, extraordinario, CalificacionFinal, numero1;
	string  nombre2, apellido2, asignatura2;
	char nombre[300],apellido[100],asignatura[100],exam[100], numero[100], curso[100];
	char nt11[100], nt22[100], nt33[100], nt44[100];

		cout<<"\t\t\t\t\t\t|___________________________________|"<<endl;
		cout<<"\t\t\t\t\t\t|_______Carol Morgan School_________|"<<endl;
		cout<<"\t\t\t\t\t\t|___________________________________|" <<endl<<endl;
	

cout<<"Nombre: ";
	cin.getline (nombre,100);
	for (int i=0; i<strlen(nombre); i++)
	{
		while (!isalpha(nombre[i])&& !isspace(nombre[i]))
		{
			cout<<"\nError, favor ingrese una letra"<<endl<<endl;
			cout<<"Nombre: ";
		cin.getline(nombre,100);
		}
	}
	
	cout<<"\nApellido: ";
	cin.getline (apellido,100);
		for (int i=0; i<strlen(apellido); i++)
	{
		while (!isalpha(apellido[i])&& !isspace(apellido[i]))
		{
			cout<<"\nError, favor ingrese una letra"<<endl<<endl;
			cout<<"Apellido: ";
			cin.getline(apellido,100);
		}
	}
	cout<<"\nAsignatura: ";
		cin.getline (asignatura,100);
		
		for (int i=0; i<strlen(asignatura); i++)
	{
		while (!isalpha(asignatura[i])&& !isspace(asignatura[i]))
		{
			cout<<"\nError, favor ingrese una letra"<<endl<<endl;
			cout<<"Asignatura: ";
			cin.getline(asignatura,100);
		}
	}
	
	cout<<"\nCurso:";
	cin.getline(curso, 100);
	
	cout<<"\nNumero de Orden:";
	cin.getline(numero, 100);
	
	for (int i=0; i<strlen(numero); i++)
	{
		while (isalpha(numero[i])&& !isspace(numero[i]))
		{
			cout<<"\nError, favor ingrese una numero"<<endl<<endl;
			
			cout<<"Numero de orden: ";
			cin.getline(numero, 100);
		}
	}
	 
	 numero1= atoi(numero);

	cout<<"\nNota 1:";
	cin>>nt11;
	
	nt1 = atoi(nt11);
	
	for (int i=0; i<strlen(nt11); i++)
	{
		while (isalpha(nt11[i])&& !isspace(nt11[i]))
		{
			cout<<"\nError, favor ingrese una numero"<<endl;
			
			cout<<"\nNota 1:";
			cin>>nt11;
		}
	}
	
	cout<<"\nNota 2:";
	cin>>nt22;
	
	nt2 = atoi(nt22);
	
	for (int i=0; i<strlen(nt22); i++)
	{
		while (isalpha(nt22[i])&& !isspace(nt22[i]))
		{
			cout<<"\nError, favor ingrese una numero"<<endl;
			
			cout<<"\nNota 2:";
			cin>>nt22;
		}
	}
		
	cout<<"\nNota 3:";
	cin>>nt33;
	
	nt3 = atoi(nt33);
	
	for (int i=0; i<strlen(nt33); i++)
	{
		while (isalpha(nt33[i])&& !isspace(nt33[i]))
		{
			cout<<"\nError, favor ingrese una numero"<<endl;
			
			cout<<"\nNota 3:";
			cin>>nt33;
		}
	}
	
	cout<<"\nNota 4:";
	cin>>nt44;
	
	nt4 = atoi(nt44);	
	
	for (int i=0; i<strlen(nt44); i++)
	{
		while (isalpha(nt44[i])&& !isspace(nt44[i]))
		{
			cout<<"\nError, favor ingrese una numero"<<endl;
			
			cout<<"\nNota 4:";
			cin>>nt44;
		}
	}	
		
	promedio=(nt1+ nt2 + nt3 + nt4) / 4;
	cout<<"\nPromedio:"<<promedio<<endl;
	
	cout<<"\nNota de Examen final:";
	cin>>exam;
		
		for (int i=0; i<strlen(exam); i++)
	{
		while (!isdigit(exam[i])&& !isspace(exam[i]))
		{
			cout<<"\nError, favor ingrese una letra o un caracter valido"<<endl<<endl;;
			cout<<"\nNota de Examen final: ";
			cin>>exam;
		}
	}
	 
 int exam1=atoi(exam);
	CalificacionFinal = (promedio* 0.7) + (exam1*0.3);
	
	cout<<"\nCalificacion final: "<<CalificacionFinal<<endl;

	  if (CalificacionFinal >= 70 ) {
	  
	  	system("cls");
	  	
	  	cout<<"\t\t\t\t\t\t|___________________________________|"<<endl;
		cout<<"\t\t\t\t\t\t|_______Carol Morgan School_________|"<<endl;
		cout<<"\t\t\t\t\t\t|___________________________________|" <<endl<<endl;
	  
	  	cout<<"\nNombre: "<<nombre<<endl;
		cout<<"\nApellido: "<<apellido<<endl;
		cout<<"\nAsignatura: "<<asignatura<<endl;
		cout<<"\nCurso: "<<curso<<endl;
	    cout<<"\nNumero: "<<numero<<endl;
	    cout<<"\nNota 1: "<<nt1<<" "<<endl;
	    cout<<"\nNota 2: "<<nt2<<" "<<endl;
	    cout<<"\nNota 3: "<<nt3<<" "<<endl;
	    cout<<"\nNota 4: "<<nt4<<" "<<endl;
		cout<<"\nNota final: "<<exam1<<" "<<endl;	  
	  
	  SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	    cout<<"\nAprobado"<<endl<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
	   	
	   archivo.open("Calificaciones.txt", ios::out);
	    archivo<<"Nombre: "<<nombre<<endl;
	       archivo<<"Apellido: "<<apellido<<endl;
	       archivo<<"Materia: "<<asignatura<<endl;
	       archivo<<"Curso: "<<curso<<endl;
	       archivo<<"Numero: "<<numero<<endl;
	       archivo<<"Nota 1: "<<nt1<<endl;
	       archivo<<"Nota 2: "<<nt2<<endl;
	    archivo<<"Nota 3: "<<nt3<<endl;
	    archivo<<"Nota 4 "<<nt4<<endl;
		archivo<<"\nNota Final: "<<exam1<<endl;
	archivo.close();
	  return 0;
      }
      
	  else{
      
      	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
	    cout<<"\nReprobado"<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
      
       cout<<"\nNota de Completivo:";
       cin>>completivo;
	  
	  cout<<"\nCompletivo final:"<<(completivo* 0.5) + (promedio* 0.5)<<endl;
	  
	  }
      
      if (CalificacionFinal >= 70 ) {
	  
		system("cls");
		  
		cout<<"\t\t\t\t\t\t|___________________________________|"<<endl;
		cout<<"\t\t\t\t\t\t|_______Carol Morgan School_________|"<<endl;
		cout<<"\t\t\t\t\t\t|___________________________________|" <<endl<<endl;
		  
		cout<<"\nNombre: "<<nombre<<endl;
		cout<<"\nApellido: "<<apellido<<endl;
		cout<<"\nAsignatura: "<<asignatura<<endl;
		cout<<"\nCurso: "<<curso<<endl;
	    cout<<"\nNumero: "<<numero<<endl;
	    cout<<"\nNota 1: "<<nt1<<" "<<endl;
	    cout<<"\nNota 2: "<<nt2<<" "<<endl;
	    cout<<"\nNota 3: "<<nt3<<" "<<endl;
	    cout<<"\nNota 4: "<<nt4<<" "<<endl;
	  	cout<<"\nNota final: "<<exam1<<" "<<endl;	  
		cout<<"\nCompletivo:"<<completivo<<" "<<endl; 
	  
	 SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	    cout<<"\nAprobado"<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
	   	
	   archivo.open("Calificaciones.txt", ios::out);
	    archivo<<"Nombre: "<<nombre<<endl;
	       archivo<<"Apellido: "<<apellido<<endl;
	       archivo<<"Materia: "<<asignatura<<endl;
	       archivo<<"Curso: "<<curso<<endl;
	       archivo<<"Numero: "<<numero<<endl;
	       archivo<<"Nota 1: "<<nt1<<endl;
	       archivo<<"Nota 2: "<<nt2<<endl;
	    archivo<<"Nota 3: "<<nt3<<endl;
	    archivo<<"Nota 4: "<<nt4<<endl;
		archivo<<"Nota completivo: "<<completivo<<endl;	
		archivo<<"Nota Final: "<<exam1<<endl;
		archivo.close();
	  return 0;
      }
	  
	  
	  else{
	  			
	  		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
	    cout<<"\nReprobado"<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
      
       cout<<"\nNota de Extraordinario: ";
       cin>>extraordinario;
	  
	  cout<<"\nExtraordinario final:"<<(extraordinario* 0.7) + (promedio* 0.3)<<endl;
	  	
	  }
	  
	  if(CalificacionFinal >= 70) {
	  	
	  	cout<<"\nNombre: "<<nombre<<endl;
		cout<<"\nApellido: "<<apellido<<endl;
		cout<<"\nAsignatura: "<<asignatura<<endl;
		cout<<"\nCurso: "<<curso<<endl;
	    cout<<"\nNumero: "<<numero<<endl;
	    cout<<"\nNota 1: "<<nt1<<" "<<endl;
	    cout<<"\nNota 2: "<<nt2<<" "<<endl; 
	    cout<<"\nNota 3: "<<nt3<<" "<<endl;
	    cout<<"\nNota 4: "<<nt4<<" "<<endl;
	    cout<<"\nCompletivo: "<<completivo<<" "<<endl; 
	    cout<<"\nNota Final: "<<exam1<<" "<<endl;
	    
	 SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	    cout<<"\nAprobado"<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
	    
	    archivo.open("Calificaciones.txt", ios::out);
	    archivo<<"Nombre: "<<nombre<<endl;
	       archivo<<"Apellido: "<<apellido<<endl;
	       archivo<<"Materia: "<<asignatura<<endl;
	       archivo<<"Curso: "<<curso<<endl;
	       archivo<<"Numero: "<<numero<<endl;
	       archivo<<"Nota 1: "<<nt1<<endl;
	       archivo<<"Nota 2: "<<nt2<<endl;
	    archivo<<"Nota 3: "<<nt3<<endl;
	    archivo<<"Nota 4 "<<nt4<<endl;
		archivo<<"Extraordinario "<<extraordinario<<endl;	
		archivo<<"Nota Final: "<<exam1<<endl;	
	archivo.close();
	
	    return 0;
	  }
	  
	  if(extraordinario <= 70){
	  	
	  	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
	    cout<<"\nReprobado"<<endl<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
	  	 archivo.open("Calificaciones.txt", ios::out);
	    archivo<<"Nombre: "<<nombre<<endl;
	       archivo<<"Apellido: "<<apellido<<endl;
	       archivo<<"Materia: "<<asignatura<<endl;
	       archivo<<"Curso: "<<curso<<endl;
	       archivo<<"Numero: "<<numero<<endl;
	       archivo<<"Nota 1: "<<nt1<<endl;
	       archivo<<"Nota 2: "<<nt2<<endl;
	    archivo<<"Nota 3: "<<nt3<<endl;
	    archivo<<"Nota 4 "<<nt4<<endl;
	       archivo<<"Nota del Extraordinario "<<extraordinario<<endl;
   archivo<<"Nota de calificacion Final "<<CalificacionFinal<<endl;
	archivo.close();
	
	  }
	  if(extraordinario >= 70){
	  	
	  	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	    cout<<"\nAprobado"<<endl;
	   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);      
	  	
	 archivo.open("Calificaciones.txt", ios::out);
	    archivo<<"Nombre: "<<nombre<<endl;
	       archivo<<"Apellido: "<<apellido<<endl;
	       archivo<<"Materia: "<<asignatura<<endl;
	       archivo<<"Curso: "<<curso<<endl;
	    
	   archivo<<"Numero: "<<numero<<endl;
	       archivo<<"Nota 1: "<<nt1<<endl;
	       archivo<<"Nota 2: "<<nt2<<endl;
	    archivo<<"Nota 3: "<<nt3<<endl;
	    archivo<<"Nota 4 "<<nt4<<endl;
   archivo<<"Nota del Extraordinario: "<<extraordinario<<endl;
   archivo<<"Nota de calificacion Final: "<<CalificacionFinal<<endl;
	archivo.close();
	
	  }
	  
	  

	  }
