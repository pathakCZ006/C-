//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	ofstream of("result.txt");
//	of<<"hello";
//	of.close();
//	cout<<"data saved\n";
//}

//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	char s[10];
//	ifstream inf("result.txt");
//	inf>>s;
//	inf.close();
//	cout<<s;
//}

//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	char s[30];
//	ofstream of("result");
//	of<<"hello";
//	of.close();
//	cout<<"data saved\n";
//	ifstream inf("result");
//	inf>>s;
//	cout<<s;
//	inf.close();
//	return 0;
//}
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ofstream fout;
//	fout.open("country.txt");
//	fout<<"india\n";
//	fout<<"USA\n";
//	fout.close();
//	fout.open("capital.txt");
//	fout<<"Delhi\n";
//	fout<<"Washington\n";
//	fout<<"London\n";
//	fout.close();
//}
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	const int n=80;
//	char s[n];
//	ifstream fin;
//	fin.open("country");
//	while(fin)
//	{
//		fin.getline(s,n);
//		cout<<s;
//	}
//	fin.close();
//	fin.open("capital");
//	while(fin)
//	{
//		fin.getline(s,n);
//		cout<<s;
//	}
//	fin.close();
//}

//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	char s[30];
//	ofstream fileout;
//	fstream file;
//	fileout.open("hello",ios::out);
//	fileout<<("hello world");
//	fileout.close();
//	file.open("hello",ios::in|ios::out);
//	cout<<file.tellg();
//	cout<<file.tellp();
//	file.seekp(6);
//	file.seekg(6);
//	cout<<file.tellg();
//	cout<<file.tellp();
//	file>>s;
//	cout<<s;
//}

#include<iostream>
using namespace std;
int main(){
	char s[80];
	cout<<"enter a string";
	cin>>s;
	int len=strlen(s);
	fstream file;
	file.open("test",ios::in|ios::out);
	for(int i=0)
}

