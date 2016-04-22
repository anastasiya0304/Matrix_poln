#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "Matrix.h"
using namespace std;

int main()
{
	int x; char c[10];
	cout << "read=1, sum=2, mult=3, getstr=4, getln=5, getcol=6, prisv=7, exit=0" << endl;
	do {
		cout << "x="; cin >> x;
		if (x == 1)
		{
			int n, m;
			cout << "n="; cin >> n;
			cout << "m="; cin >> m;
			Matrix <int> M(n, m);
			char c[10];
			cout << "name of file:";  cin >> c;
			try {
				M.read_matrix(c);
				cout << M;
			}
			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}
		if (x == 2)
		{
			try {
				int n1, m1, n2, m2;
				cout << "n1="; cin >> n1;
				cout << "m1="; cin >> m1;
				Matrix <int> M1(n1, m1);
				cout << "name of file_1: ";  cin >> c;
				M1.read_matrix(c);
				cout << M1;
				cout << "n2="; cin >> n2;
				cout << "m2="; cin >> m2;
				Matrix <int> M2(n2, m2);
				cout << "name of file_2: ";  cin >> c;
				M2.read_matrix(c);
				cout << M2;

				M1 + M2;
			}
			catch (Razmery &a) { cout << a.what() << endl; }
			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}
		if (x == 3)
		{
			try
			{
				int n1, m1, n2, m2;
				cout << "n1="; cin >> n1;
				cout << "m1="; cin >> m1;
				Matrix <int> M1(n1, m1);
				cout << "name of file_1: ";  cin >> c;
				M1.read_matrix(c);
				cout << M1;
				cout << "n2="; cin >> n2;
				cout << "m2="; cin >> m2;
				Matrix <int> M2(n2, m2);
				cout << "name of file_2: ";  cin >> c;
				M2.read_matrix(c);
				cout << M2;

				M1 * M2;
			}
			catch (Razmery &a) { cout << a.what() << endl; }
			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}
		if (x == 4)
		{
			try {
				int n, m, k;
				cout << "n="; cin >> n;
				cout << "m="; cin >> m;
				Matrix <int> M(n, m);
				char c[10];
				cout << "name of file:";  cin >> c;
				M.read_matrix(c);
				cout << M;
				cout << "k="; cin >> k;

				for (int i = 0; i < m; i++) { cout << M[k][i] << " "; }
			}
			catch (WrongIndex &a) { cout << a.what() << endl; }
			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}
		if (x == 5)
		{
			try
			{
				int n, m;
				cout << "n="; cin >> n;
				cout << "m="; cin >> m;
				Matrix <int> M(n, m);
				char c[10];
				cout << "name of file:";  cin >> c;
				M.read_matrix(c);
				cout << M;
				cout << M.lines();
			}

			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}

		if (x == 6)
		{

			int n, m;
			cout << "n="; cin >> n;
			cout << "m="; cin >> m;
			Matrix <int> M(n, m);
			char c[10];
			cout << "name of file:";  cin >> c;
			M.read_matrix(c);
			cout << M;
			cout << M.columns();

		}
		if (x == 7)
		{
			try {

				int n, m;
				cout << "n="; cin >> n;
				cout << "m="; cin >> m;
				Matrix <int> M(n, m);
				char c[10];
				cout << "name of file:";  cin >> c;
				M.read_matrix(c);
				cout << M;
				Matrix <int> M2(n, m);

				M2 = M;
				cout << "_____" << endl;
				cout << M2 << endl;
			}
			catch (Samoprisvaivanie &a) { cout << a.what() << endl; }
			catch (FileNotOpen &a) { cout << a.what() << endl; }
		}
		system("pause");
	} while (x);
}