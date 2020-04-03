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
	const char* out[num];   //用于赋值测试的指针数组 

	int processed=0;
	int nextin=0;    //生存期为整个main()函数
	 
	while (processed<num){
		if (st.isempty())   //堆空时放入堆 
			st.push(in[nextin++]);   //in[0]开始  items[top++] = in[nextin++] top从0开始 
			
		else if (st.isfull())   //堆满时处理堆 
			st.pop(out[processed++]);   //out[0]开始  out[processed++] = items[--top] top从10开始 
			
		else if (std::rand()%2 && nextin<num)   //堆不空也不满时,随机0~1对应false与true,处理咯, in 
			st.push(in[nextin++]);   //items[top++] = in[nextin++] top大于0小于10 
			
		else                                  //堆不空也不满时,随机的另一种处理, out 
			st.pop(out[processed++]);   //out[processed++] = items[--top] top大于0小于10 
	}
	
	for (int i=0; i<num; i++)
		cout<<out[i]<<endl;   //out 是被正儿八经保存了的指针 
	
	char x;
	cout<<"\nc to continue: ";
	cin>>x;
	if (x=='c' || x=='C')
		goto x;
	
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}
