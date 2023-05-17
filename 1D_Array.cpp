//8 Queens 1D complete
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int q[8], c=0;
	q[0] = 0;
	nc:c++;
	if(c==8)
	{
		goto print;
	}
	q[c]=-1;//basically the same as r=-1
	nr:q[c]++;//goes to the next row
	if(q[c]==8)
	{
		goto backtrack;
	}
	for(int i = 0; i<c; i++)
	{
		if((q[c]==q[i])||(abs(q[c]-q[i])==(c-i)))
		{
			goto nr;
		}
	}
	goto nc;
	backtrack:c--;
	if(c==-1)
	{
		return 0;
	}
	goto nr;
	print:static int solutions = 0;
	solutions++;
	cout << "Solution #" << solutions << ": " << endl;
	for(int i = 0;i<8; i++)
	{
		for(int j = 0; j<8; j++)
		{
			if(q[i]==j)
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}
		}
		cout << endl;
	}
	cout << "--------" << endl;
	goto backtrack;
}
