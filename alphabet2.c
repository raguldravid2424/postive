#include <stdio.h>

int main() {
	
	char r;
	scanf("%c",&r);
	if(r>='a' && r<='z' || r>='A' && r<='Z')
	{
	printf("alphabet");
	}
else
{
printf("not alphabet");
}

	return 0;

}
