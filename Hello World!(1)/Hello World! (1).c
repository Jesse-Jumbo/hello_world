#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *fp;                             /*�@�Ӥ��s��fp*/ 
	char Hi[30];                          /*�]Hi�A�@��30�r��*/
		       
	fp = fopen("Hello World!.txt", "r");  /*�}�Ҥ@�Ӥ��(���W,�}�Ҥ覡�O��Ū)*/ 
	fgets(Hi, 30, (FILE*)fp);             /*Ū�����Hi��30�Ӧr�űq���fp*/ 
	printf("%s",Hi);                      /*�C�L�XHi�̪��r��*/ 
	
	fclose(fp);                           /*�������*/ 
	
	fp = fopen("Hello World!.txt","w");   /*���}�@�Ӥ��(���W�A���}�Ҧ��O�g�J)*/ 
	fprintf(fp,"%s","Hello World and");   /*�b��󤺼g�J�r��(���,�g�J�����A�g�J���r��)*/ 
	fputs(" Hello Taiwan!",fp);           /*�b��󤺼g�J�r��(�g�J���r��,�n�g�J�����)*/ 
	fgets(Hi,30,(FILE*)fp);               /*Ū�����(�r��Hi��,30�Ӧr��,�q���fp)*/ 
	
	fclose(fp);                           /*�������*/ 
	
	fp = fopen("Hello World!.txt","r");   /*���}���(���W,�}�Ҥ覡�O��Ū)*/ 
	fscanf(fp, "$s", Hi);                 /*Ū�����(���,�r��,�qHi)*/ 
	fgets(Hi, 30, (FILE*)fp);             /*Ū����󤺪��r��(�r��Hi��,30�Ӧr��,���)*/ 
	printf("%s",Hi);                      /*�L�X���(�r��,�qHi)*/ 
	
	fclose(fp);                           /*�������(���W)*/ 
	
	return 0;                             /*�����{��*/ 
    
}
