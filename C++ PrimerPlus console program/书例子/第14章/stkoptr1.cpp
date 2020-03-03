#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"

const int num=10;

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
x:
	std::srand(std::time(0));
	cout<<"Please enter stack size: ";
	int stacksize;
	cin>>stacksize;

//create a empty stack with stacksize slots
	Stack <const char*> st(stacksize);   //items = new Type [stacksize]; 
	
//in basket
	const char* in[num]={" 1: Hank Gilgmesh", " 2: Kiki Ishtar", 
						 " 3: Pertty Rocker", " 4: Ian Flagranti",
						 " 5: Wolfgang Kibble", " 6: Portia Koop",
						 " 7: Joy Almodo", " 8: Xaverie Paprika",
						 " 9: Juan Moore", "10: Misha Mache"
							};
//out basket
	const char* out[num];   //���ڸ�ֵ���Ե�ָ������ 

	int processed=0;
	int nextin=0;    //������Ϊ����main()����
	 
	while (processed<num){
		if (st.isempty())   //�ѿ�ʱ����� 
			st.push(in[nextin++]);   //in[0]��ʼ  items[top++] = in[nextin++] top��0��ʼ 
			
		else if (st.isfull())   //����ʱ����� 
			st.pop(out[processed++]);   //out[0]��ʼ  out[processed++] = items[--top] top��10��ʼ 
			
		else if (std::rand()%2 && nextin<num)   //�Ѳ���Ҳ����ʱ,���0~1��Ӧfalse��true,����, in 
			st.push(in[nextin++]);   //items[top++] = in[nextin++] top����0С��10 
			
		else                                  //�Ѳ���Ҳ����ʱ,�������һ�ִ���, out 
			st.pop(out[processed++]);   //out[processed++] = items[--top] top����0С��10 
	}
	
	for (int i=0; i<num; i++)
		cout<<out[i]<<endl;   //out �Ǳ������˾������˵�ָ�� 
	
	char x;
	cout<<"\nc to continue: ";
	cin>>x;
	if (x=='c' || x=='C')
		goto x;
	
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}
