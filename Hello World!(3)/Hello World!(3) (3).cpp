#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *x=new char[20]; 				/*�ŧix�i�H��20�Ӧr��*/ 
	char Hi[10];						/*�ŧiHi�i�H��10�Ӧr��*/ 
	char World[10];						/*�ŧiWorld�i�H��10�Ӧr��*/ 
	char First_word[5];					/*�ŧiFirst_word�i�H��5�Ӧr��*/
	char Second_word[5];				/*�ŧiSecond_word�i�H��5�Ӧr��*/
	char The_third_word[3];				/*�ŧiThe_third_word�i�H��3�Ӧr��*/
	char Fourth_word[5];				/*�ŧiFourth_word�i�H��5�Ӧr��*/
	char Fifth_word[8];					/*�ŧiFifth_word�i�H��8�Ӧr��*/
	FILE * f; 							/*�ŧi�@�Ӹ�ƫ��A���ܼ�f*/
	cout << "Input the filename:";		/*�L�X"�H�U�r��"*/ 
	cin >> x;							/*��Jx*/ 
	cout<<x<<endl;						/*�L�Xx���촫��*/ 
	
	#if 1
 
	f = fopen (x,"r"); 					/*���}f�A���W�Ox�A�Ҧ���Ū*/ 
	
	if(!f){								/*�p�Gf�����}*/ 
		cout<<"Not found"<<endl; 		/*�L�X"�H�U�r��"�M����*/ 
		return 0;						/*�{������*/ 
	}
	 
	fscanf(f,"%s%s",&Hi,&World);		/*�H�r��hŪ�����f��Hi�MWorld���r��*/ 
	cout<<Hi<<" "<<World<<"\n";			/*�L�Xct1�Mspace�Mct2*/ 
	fclose(f); 							/*�������*/ 
	
	f = fopen (x,"w");					/*���}���x�Χ�g�Ҧ�*/ 
	fprintf(f,"%s","Hello World and Hello Taiwan!!");			/*�g�J���f��"�ڭn�g�J��"�r��*/ 
	fclose(f);													/*�������*/ 

	f = fopen (x, "r");											/*���}���x�ΰ�Ū�Ҧ�*/ 
	fscanf(f,"%s%s%s%s%s",&First_word,&Second_word,&The_third_word,&Fourth_word,&Fifth_word);			/*�Φr��Ū����󤺪�word��*/ 
	cout<<First_word<<" "<<Second_word<<" "<<The_third_word<<" "<<Fourth_word<<" "<<Fifth_word<<" ";	/*�L�Xword�����Ҧ��r�ũMspace��*/ 	
	fclose(f);													/*�������*/ 
	#endif
	return 0;													/*�����{��*/ 
}
