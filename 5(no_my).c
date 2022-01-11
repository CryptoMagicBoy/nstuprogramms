#include<stdio.h>
#include <stdbool.h>
int n,a[10];


bool check(int T)
{
	while (T>0){ 
		if (T % 10 <= (T /10) % 10 ) { 
			return false; 
		} 
		T=T/10; 
	}
	return true;
}
 
int main()
{

int a = 100;
int b = 200;
for (;a <= b; a++)
{
	if(check(a))
		printf("%d, ",a);

}
 
return 0;
}
