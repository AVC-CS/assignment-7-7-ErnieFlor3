#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int makeNameRecord(string[], string[], int[], string[], int[]);
void printoutallrecords(int, string[], string[], int[], string[], int[]);
int findNames(int, string[], string[], int[], string[], int[], char, string);
void printoutcontents(string, string, int, string, int);

const int N = 5000;
int makeNameRecord(string state[], string gender[], int year[], string name[], int count[])
{
}
int findNames(int cnt, string state[], string gender[], int year[], string name[], int count[], char starting, string stname)
{
}

void printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	for (int i = 0; i < cnt; i++)
	{
		printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
	}
	cout << "total lines: " << cnt << endl;
}

void printoutcontents(string statename, string sex, int year, string name, int count)
{
	cout << setw(5) << statename << "\t";
	cout << setw(3) << sex << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}
