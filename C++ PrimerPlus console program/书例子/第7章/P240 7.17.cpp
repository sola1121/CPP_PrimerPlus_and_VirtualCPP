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
		ruler[i]=' ';   //ruler[1]到ruler[63]是空格 
	ruler[len-1]='\0';   //ruler[65]是空字符 
	
	int max=len-2;
	int min=0;
	ruler[min]=ruler[max]='|';    //ruler[0]与ruler[64]是 |  
	cout<<ruler<<endl;   //输出ruler[0] 
	
	for (i=1; i<divs; i++){   //1到65
		subdivide(ruler, min, max, i);   //调用递归函数 
		cout<<ruler<<endl;   //输出ruler 6次 
		for (int j=1; j<len-2; j++)
			ruler[j]=' ';
	}
	
	system("pause");
	return 0;
}

void subdivide(char *ar, int low, int high, int level){
	if (level==0)
		return;      //如果level==0则停止函数返回 
	int mid = (high+low)/2;
	ar[mid]='|';    //变化的中间值为 |  
	subdivide (ar, low, high, level-1);  //level值将减少 
	subdivide (ar, mid, high, level-1);
}
