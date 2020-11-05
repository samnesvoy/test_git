#include<iostream>
using namespace std;
int main(int argc,char*argv[]) {
	cout << argv[0] << " say - ";
	if (argc > 1)
		for (int i = 1; i < argc; i++)
			cout << argv[i] << ' ';
	else
		cout << "nothing";
	cout << endl;
}