// pljlwj.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int sjxr(char file[]);


int main()
{
	int i=1;
	//char s3[1];
	char file[180];
	for (int i=0; i < 10; i++)
	{


		
		//string s1 = "第";
		//string s2 = "章";
		//itoa(i,s3,10);
		//string s = s1 + s3 + s2;
		sprintf(file,"第%d章.txt",i);
        

		ofstream SaveFile(file);
		sjxr(file);

		/*ofstream outfile;
		outfile.open(file);
		cout << "dsjhsksdj" << "\n" << "jsd" ;


		outfile.close();*/
		//SaveFile.close;

	}


	cout << "ajkdh" << "\n";
	getchar();
    return 0;
}

int sjxr(char file[])
{
	ofstream outfile;
	outfile.open(file);
	outfile << "dsjhsksdj" << "\n" << "jsd"<<endl;
	outfile << "dsjhsksdj" << "\n" << "jsd" << endl;

	outfile.close();

	return 0;
}
