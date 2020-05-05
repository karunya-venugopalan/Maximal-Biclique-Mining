#include<iostream>
#include<fstream>
using namespace std;

int main()
{	
	int a[10][10];
	ifstream matrix_file;
	matrix_file.open("/home/karunyav/Downloads/Documents/sem2/package/oop/matrix_array.txt", ios::in);
	int flag=0;
	char c;
	int i=0, j=0;
	while(!matrix_file.eof())
	{
		matrix_file>>noskipws>>c;
		while(c!=10)
		{
			a[i][j] = c-48;
			j++;
			matrix_file>>noskipws>>c;
		
		}
		i++;
		j=0;
		
	}
	/*
	//Printing the 2d matrix
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}*/
}