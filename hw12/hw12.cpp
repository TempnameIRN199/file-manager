#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
void showAllSubdirectories()
{
	system("dir /b /ad");
}
void showAllFiles()
{
	system("dir /b /a-d");
}
void createNewDirectory()
{
	char newDirName[256];
	cout << "Enter new directory name: ";
	cin >> newDirName;
	char command[256];
	strcpy(command, "mkdir ");
	strcat(command, newDirName);
	system(command);
}
void deleteDirectory()
{
	char dirName[256];
	cout << "Enter directory name: ";
	cin >> dirName;
	char command[256];
	strcpy(command, "rmdir /s /q ");
	strcat(command, dirName);
	system(command);
}
int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	do
	{
		cout << "1. Show all subdirectories" << endl;
		cout << "2. Show all files" << endl;
		cout << "3. Create new directory" << endl;
		cout << "4. Delete directory" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			showAllSubdirectories();
			break;
		case 2:
			showAllFiles();
			break;
		case 3:
			createNewDirectory();
			break;
		case 4:
			deleteDirectory();
			break;
		}
	} while (choice != 0);
	return 0;
}