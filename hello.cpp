#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int abs(int a)
{
	return a<0?-a:a;
}
double abs(double a)
{
	return a<0?-a:a;
}
int main()
{
	cout<<abs(-3)<<endl;
	cout<<abs(-5.65)<<endl;
	double a = 12.345623;
	int oldprecision= cout.precision(4);
	cout<<a<<endl;
	cout<<oldprecision<<endl;
	cout<<setprecision(oldprecision)<<a<<endl;
	char s[128];
	cin.getline(s,sizeof(s));
	cout<<s<<endl<<strlen(s);
	return 0;
}
