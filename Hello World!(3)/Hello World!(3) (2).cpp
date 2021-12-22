#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *x=new char[20]; 				/*宣告x可以有20個字元*/ 
	char Hi[10];						/*宣告Hi可以有10個字元*/ 
	char World[10];						/*宣告World可以有10個字元*/ 
	char First_word[5];					/*宣告First_word可以有5個字元*/
	char Second_word[5];				/*宣告Second_word可以有5個字元*/
	char The_third_word[3];				/*宣告The_third_word可以有3個字元*/
	char Fourth_word[5];				/*宣告Fourth_word可以有5個字元*/
	char Fifth_word[8];					/*宣告Fifth_word可以有8個字元*/
	FILE * f; 							/*宣告一個資料型態的變數f*/
	cout << "Input the filename:";		/*印出"以下字串"*/ 
	cin >> x;							/*輸入x*/ 
	cout<<x<<endl;						/*印出x直到換行*/ 
	
	#if 1
 
	f = fopen (x,"r"); 					/*打開f，文件名是x，模式唯讀*/ 
	
	if(!f){								/*如果f打不開*/ 
		cout<<"Not found"<<endl; 		/*印出"以下字串"和換行*/ 
		return 0;						/*程式結束*/ 
	}
	 
	fscanf(f,"%s%s",&Hi,&World);		/*以字串去讀取文件f內Hi和World的字元*/ 
	cout<<Hi<<" "<<World<<"\n";			/*印出ct1和space和ct2*/ 
	fclose(f); 							/*關閉文件*/ 
	
	f = fopen (x,"w");					/*打開文件x用改寫模式*/ 
	fprintf(f,"%s","Hello World and Hello Taiwan!!");			/*寫入文件f內"我要寫入的"字串*/ 
	fclose(f);													/*關閉文件*/ 

	f = fopen (x, "r");											/*打開文件x用唯讀模式*/ 
	fscanf(f,"%s%s%s%s%s",&First_word,&Second_word,&The_third_word,&Fourth_word,&Fifth_word);			/*用字串讀取文件內的word們*/ 
	cout<<First_word<<" "<<Second_word<<" "<<The_third_word<<" "<<Fourth_word<<" "<<Fifth_word<<" ";	/*印出word內的所有字符和space們*/ 	
	fclose(f);													/*關閉文件*/ 
	#endif
	return 0;													/*結束程式*/ 
}
