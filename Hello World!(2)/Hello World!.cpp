#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	char filename[110];						/*�ŧi�@�Ӥ��W(filename)�b110-1�Ӧr��(char)��*/ 
	
	char fileline[25];                      /*�ŧi��󤺮e(fileline)�b26-1�r��(char))��*/ 
	
	printf("Please input filename:\n");     /*�b�ù��W�L�X"�ڿ�J���r��ô���(\n)"*/ 
	
	scanf("%s",filename);					/*Ū����J���r��(%s),�O�ڤW���ŧi��filename*/ 
	
	FILE *HelloWorld = fopen(filename,"r"); /*�ŧi�@�ӥsHelloWorld���ܼơA�O���}�@�Ӥ��(�ګŧi�����W,�Ҧ�:��Ū)*/ 
	
	if(filename == NULL) 					/*�p�G���W������~*/ 
	{
		printf("I can't find that:\n");		/*�b�ù��W�L�X"�ڼg�J���r��ô���()\n"*/ 
	
		return 0;							/*�����{��*/ 
	}
	
	while ( fgetc( HelloWorld) != EOF);		/*�@��Ū�����HelloWorld���r�Ũ줣���󵲧���*/ 
	{ 
	printf("%c",HelloWorld);
	
	fclose(HelloWorld);						/*�������*/ 
	
	return 0;
}
} 
