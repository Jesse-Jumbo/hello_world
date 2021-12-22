#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *fp;                             /*一個文件叫做fp*/ 
	char Hi[30];                          /*設Hi，共有30字符*/
		       
	fp = fopen("Hello World!.txt", "r");  /*開啟一個文件(文件名,開啟方式是唯讀)*/ 
	fgets(Hi, 30, (FILE*)fp);             /*讀取文件Hi的30個字符從文件fp*/ 
	printf("%s",Hi);                      /*列印出Hi裡的字串*/ 
	
	fclose(fp);                           /*關閉文件*/ 
	
	fp = fopen("Hello World!.txt","w");   /*打開一個文件(文件名，打開模式是寫入)*/ 
	fprintf(fp,"%s","Hello World and");   /*在文件內寫入字串(文件,寫入的型態寫入的字串)*/ 
	fputs(" Hello Taiwan!",fp);           /*在文件內寫入字串(寫入的字串,要寫入的文件)*/ 
	fgets(Hi,30,(FILE*)fp);               /*讀取文件(字符Hi的,30個字符,從文件fp)*/ 
	
	fclose(fp);                           /*關閉文件*/ 
	
	fp = fopen("Hello World!.txt","r");   /*打開文件(文件名,開啟方式是唯讀)*/ 
	fscanf(fp, "$s", Hi);                 /*讀取文件(文件,字符,從Hi)*/ 
	fgets(Hi, 30, (FILE*)fp);             /*讀取文件內的字串(字符Hi的,30個字符,文件)*/ 
	printf("%s",Hi);                      /*印出文件(字串,從Hi)*/ 
	
	fclose(fp);                           /*關閉文件(文件名)*/ 
	
	return 0;                             /*結束程式*/ 
    
}
