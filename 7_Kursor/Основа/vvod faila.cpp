#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("form.cpp");
	if(!in) 
	{
		cout << "Cannot open file.\n";
		return 1;
	}

	char ch[255];
	int lines=0;
	while(in)
	{
		in.getline(ch,255);
		lines++;
		if(in)
		cout<<ch<<endl;
	}
	int i;
	for (i=0; i < 255; i++)
	cout << ch[i];
}
