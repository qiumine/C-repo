#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 long long a, b;
 scanf("%I64d %I64d", &a, &b);     // ���������ͨ����Ҫô��%lld, Ҫô��%I64d����������longlong 
 printf("%lld\n", a*b);
 
 getch();
 return 0;
 }
