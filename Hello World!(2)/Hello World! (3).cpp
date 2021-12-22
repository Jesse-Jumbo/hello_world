#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	char filename[110];						/*宣告一個文件名(filename)在110-1個字符(char)內*/ 
	
	char fileline[25];                      /*宣告文件內容(fileline)在26-1字符(char))內*/ 
	
	printf("Please input filename:\n");     /*在螢幕上印出"我輸入的字串並換行(\n)"*/ 
	
	scanf("%s",filename);					/*讀取輸入的字串(%s),是我上面宣告的filename*/ 
	
	FILE *HelloWorld = fopen(filename,"r"); /*宣告一個叫HelloWorld的變數，是打開一個文件(我宣告的文件名,模式:唯讀)*/ 
	
	if(filename == NULL) 					/*如果文件名等於錯誤*/ 
	{
		printf("I can't find that:\n");		/*在螢幕上印出"我寫入的字串並換行()\n"*/ 
	
		return 0;							/*結束程式*/ 
	}
	
	while ( fgetc( HelloWorld) != EOF);		/*一直讀取文件HelloWorld的字符到不等於結束時*/ 
	{ 
	printf("%c",HelloWorld);
	
	fclose(HelloWorld);						/*關閉文件*/ 
	
	return 0;
}
} 
