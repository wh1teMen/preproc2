#include<iostream>
using namespace std;
#define PI(float) 3.14
#if 5>10 //������ �������
const int n = 10; //��������������� ����� ����
#elif 15>10 //else if ������ �������
const int n = 15;
#else 
const int n = 5;//������������� ����� ����
#endif


#ifdef PI //if(���� ���������� PI �� �������)
#define PI (float)3.12
#else
#define E 2.72
#endif
#define M 11
/*#if PI>1


int main() {
	setlocale(LC_ALL, "ru");
	cout << "main 1";



	system("pause>neul");
	return 0;
}



#elif PI=5
int main() {
setlocale(LC_ALL, "ru");

cout << "main 2";


system("pause>neul");
return 0;
}

#endif
*/
int main() {
	setlocale(LC_ALL, "ru");
	
#define M 11
#ifdef  M
	cout << " M ����������\n";
#else
#error "M ������ �����������!";
#endif //  M



	system("pause>neul");
	return 0;
}