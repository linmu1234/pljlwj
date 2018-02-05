// pljlwj.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int sjxr(char file[], char file1[], int i);


int main()
{
	int i = 1, m, l;
	//char s3[1];
	char file[180];
	char file1[180];
	cout << "请输入起点：" << endl;
	cin >> l;
	cout << "请输入终点：" << endl;
	cin >> m;
	if (l > m) {
		cout << "起点大于终点";
		return 0;

	}
	else
	{


		for (int i = l; i < m; i++)
		{



			//string s1 = "第";
			//string s2 = "章";
			//itoa(i,s3,10);
			//string s = s1 + s3 + s2;
			sprintf(file, "第%d章.txt", i);//文件明拼接
			sprintf(file1, "第%d章", i);
			ofstream SaveFile(file);//保存文件
			sjxr(file, file1, i);//文件处理
								 /*ofstream outfile;
								 outfile.open(file);
								 cout << "dsjhsksdj" << "\n" << "jsd" ;


								 outfile.close();*/
								 //SaveFile.close;

		}

	}
	cout << "ajkdh" << "\n";
	getchar();
	return 0;
}

int sjxr(char file[], char file1[], int i)
{
	char file2[180];

	ofstream outfile;//文件写
	outfile.open(file);
	outfile << "<html>" << "\n\n\t" << "<head>" << endl;
	outfile << "\t" << "<meta charset=\"UTF-8\">" << endl;
	sprintf(file2, "<title> %s</title>", file1);
	outfile << "\t" << file2 << "\n";
	outfile << "\t" << "<link rel=\"stylesheet\"type=\"text/css\"  href=\"../css/bt.css \"/> " << endl;
	outfile << "\t" << "<link rel=\"stylesheet\"type=\"text/css\"  href=\"../css/dl.css \"/> " << endl;
	outfile << "</head> " << endl;
	outfile << "<body> " << endl;
	outfile << "<h1>" << "\t" << file1 << "\t\t\t\t" << "</h1>" << "\n\n\n\n\n\n\n\n" << endl;
	outfile << "</body> " << endl;
	outfile << "</html>" << endl;

	//outfile << "dsjhsksdj" << "\n" << "jsd" << endl;

	outfile.close();

	return 0;
}
