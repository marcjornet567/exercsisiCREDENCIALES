#include <iostream>
#include <cstdlib>
#include <windows.h>  
using namespace std;


int main() {
	string usuario = "";
	string passwrd = "";

	string inputUsuario = " ";
	string inputPasswrd = " ";
	bool Todocorecto = false;


	while (Todocorecto == false)
	{
		cout << "Vamos a crearte una cuenta " << endl;
		cout << endl << "Como te quieres llamar? : " << endl;
		cin >> usuario;
		cout << "Pon una contraseña para mayor seguridad : " << endl;
		cin >> passwrd;


		if (passwrd.length() < 8)
		{
			cout << "ERROR: La contraseña tiene que tener como minimo 8 caracteres" << endl;
			cout << endl;
			Sleep(3000);
			system("cls");
		}
		else
		{
			Todocorecto = true;
			Sleep(1000);
			system("cls");
		}
	}


	while (usuario != inputUsuario || passwrd != inputPasswrd)
	{
		cout << "Introduzca su usuario" << endl;
		cin >> inputUsuario;
		cout << "Introduzca su contraseña" << endl;
		cin >> inputPasswrd;



		if (usuario != inputUsuario && passwrd != inputPasswrd)
		{
			cout << "usuario y constraseña incorrectas , intentalo de nuevo" << endl;
			
		}
		else if (usuario != inputUsuario)
		{
			cout << "usuario : " << inputUsuario << " incorrecto, intentalo de nuevo " << endl;
			
		}
		else if (passwrd != inputPasswrd)
		{
			cout << "constraseña incorrecta , intentalo de nuevo" << endl;
			
		}
		else
		{
			cout << "Procesando la informacion..." << endl;
			Sleep(5000);
			cout << "------------------" << endl;
			cout << "ACCESO VALIDADO" << endl;
			cout << "------------------" << endl;
		}
		Sleep(2000);
		system("cls");
	}


}
