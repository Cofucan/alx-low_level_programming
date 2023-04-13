#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *fp;
	char pass[4];

	pass[0] = 'H';
	pass[1] = 'o';
	pass[2] = 'l';
	pass[3] = 4;

	fp = fopen("101-password", "w");
	if (fp)
	{
		fputs(pass, fp);
		fclose(fp);
	}

	return (0);
}
