// pljlwj.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int i=1;
	char s3[1];
	char s[180];
	for (int i=0; i < 10; i++)
	{


		
		//string s1 = "第";
		//string s2 = "章";
		//itoa(i,s3,10);
		//string s = s1 + s3 + s2;
		sprintf(s,"第%d章.txt",i);
		ofstream SaveFile(s);

		//SaveFile.close;

	}


	cout << "ajkdh" << "\n";
    return 0;
}

