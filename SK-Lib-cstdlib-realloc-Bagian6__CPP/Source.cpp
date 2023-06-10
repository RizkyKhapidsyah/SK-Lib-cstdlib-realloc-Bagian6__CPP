#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	char* ptr = NULL, * new_ptr;

	/* realokasi memori, berperilaku sama seperti malloc(20*sizeof(char)) */
	new_ptr = (char*)realloc(ptr, 50 * sizeof(char));
	strcpy(new_ptr, "Selamat Datang");
	cout << new_ptr;

	free(new_ptr);

	_getch();
	return 0;
}