#include <iostream>
const int len=66;
const int divs=6;

void subdivide(char *ar, int low, int high, int level);

int main(){
	
	using std::cout;
	using std::endl;
	
	char ruler[len];
	int i;
	for (i=1; i<len-2; i++)
		ruler[i]=' ';   //ruler[1]��ruler[63]�ǿո� 
	ruler[len-1]='\0';   //ruler[65]�ǿ��ַ� 
	
	int max=len-2;
	int min=0;
	ruler[min]=ruler[max]='|';    //ruler[0]��ruler[64]�� |  
	cout<<ruler<<endl;   //���ruler[0] 
	
	for (i=1; i<divs; i++){   //1��65
		subdivide(ruler, min, max, i);   //���õݹ麯�� 
		cout<<ruler<<endl;   //���ruler 6�� 
		for (int j=1; j<len-2; j++)
			ruler[j]=' ';
	}
	
	system("pause");
	return 0;
}

void subdivide(char *ar, int low, int high, int level){
	if (level==0)
		return;      //���level==0��ֹͣ�������� 
	int mid = (high+low)/2;
	ar[mid]='|';    //�仯���м�ֵΪ |  
	subdivide (ar, low, high, level-1);  //levelֵ������ 
	subdivide (ar, mid, high, level-1);
}
