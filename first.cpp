#include <bits/stdc++.h>
using namespace std;

// Cel to feh converter
float Cel_To_Fah(float n)
{
	return ((n * 9.0 / 5.0) + 32.0);
}


// driver code
int main()
{
	float n = 20.0;
	cout << Cel_To_Fah(n);
	return 0;
}
