#include <iostream>
#include <cstdlib>
#include <windows.h>  
using namespace std;


int main() {
	const string usuario = "kalimocho123";
	const string passwrd = "123pito123";

	string inputUsuario = " ";
	string inputPasswrd = " ";


	while (usuario != inputUsuario || passwrd != inputPasswrd)
	{
		cout << "Introduzca su usuario" << endl;
		cin >> inputUsuario;
		cout << "Introduzca su contraseņa" << endl;
		cin >> inputPasswrd;

		if (usuario != inputUsuario && passwrd != inputPasswrd)
		{
			cout << "usuario y constraseņa incorrectas , intentalo de nuevo" << endl;
			
		}
		else if (usuario != inputUsuario)
		{
			cout << "usuario incorrecto, inetntelo de nuevo " << endl;
			
		}
		else if (passwrd != inputPasswrd)
		{
			cout << "constraseņa incorrectas , intentalo de nuevo" << endl;
			
		}
		else
		{
			cout << "Credenciales correctas" << endl;
		}
		Sleep(1000);
		system("cls");
		Sleep(1);
	}


}
