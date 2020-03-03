#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

/*����*/
struct stock{
	char goods[20];  //��Ʒ�� 
	int number;  //���� 
	float cost;  //���� 
	float amount;  //ռ�ý�� 
} stk_list[100];

/*���۱�*/
struct sales{
	char goods[10];  //��Ʒ��
	int volume;  //������
	float price;  //����
	float value;  //���۽�� 
} sal_list[100];

void stock_input(struct stock *pstk, int *total);
void sales_input(struct sales *psal, int *total);
void sale_goods(struct stock *pstk, int *nstock, struct sales *psal, int *nales);
void stock_inquire(struct stock *pstk, int *total);
void sales_inquire(struct sales *psal, int *total);

int main(){
	int stk_total=0;  //�����Ʒ������ 
	int sal_total=0;  //������Ʒ������ 
	char ch;
	
	while (1){
		cout<<"\n==================================\n";
		cout<<"   1.�����ʼ¼��\n"
			<<"   2.���۱��ʼ¼��\n"
			<<"   3.������Ʒ\n"
			<<"   4.�����ѯ\n"
			<<"   5.���۱��ѯ\n"
			<<"   6.�˳�\n";
		cout<<"==================================\n\n";
		cout<<"Please enter choice(1-6): ";
		cin>>ch;
		switch (ch){
			case '1': stock_input(stk_list, &stk_total); break;
			case '2': sales_input(sal_list, &sal_total); break;
			case '3': sale_goods(stk_list, &stk_total, sal_list, &sal_total); break;
			case '4': stock_inquire(stk_list, &stk_total); break;
			case '5': sales_inquire(sal_list, &sal_total); break;
			case '6': cout<<"Quit!"<<endl; exit(0); 
		}
	} 
	
	
	system("pause");
	return 0;
} 

//�����ʼ����¼�� 
void stock_input(struct stock *pstk, int *total){
	char ch;
	cout<<"\n��������Ʒ��Ʒ��,����������: \n";
	for (pstk=pstk+(*total);;pstk++){
		cout<<"goods' name: ";
		cin>>pstk->goods;
		cout<<"goods' number: ";
		cin>>pstk->number;
		cout<<"goods' cost: ";
		cin>>pstk->cost;
		pstk->amount=pstk->number * pstk->cost;
		
		cout<<"Continue?(y/n)";
		cin>>ch; 
		if (ch=='N'||ch=='n') break;
		(*total)++; 
	} 
}

//���۱��ʼ����¼�� 
void sales_input(struct sales *psal, int *total){
	char ch;
	cout<<"\n��������Ʒ��������Ʒ���ۼ�: \n";
	for (psal=psal+(*total);;psal++){
		cout<<"goods' name: ";
		cin>>psal->goods;
		cout<<"goods' price: ";
		cin>>psal->price;
		psal->volume=0;
		psal->value=0;
		
		cout<<"Continue?(y/n)";
		cin>>ch; 
		if (ch=='N'||ch=='n') break;
		(*total)++; 
	} 
}

//������Ʒ��,��������۱��޸� 
void sale_goods(struct stock *pstk, int *nstock, struct sales *psal, int *nsales){
	char name[20];
	int num, i, j;
	cout<<"\n���������۵���Ʒ������������: \n"; 
	cout<<"sale_goods' name: ";
	cin>>name;
	cout<<"sale_goods' nmber: ";
	cin>>num;
	
	for (i=0; i<=*nstock; i++, pstk++)
		if (strcmp(pstk->goods, name)==0) break;
	
	if (i>*nstock){
		cout<<"can't find the goods!\n";
		return ;
	}
	else{
		for (j=0; j<=*nsales; j++, psal++)
			if (strcmp(psal->goods, name)==0) break;
		//�ӿ����м�ȥ�����۵���Ʒ
		pstk->number-=num;
		pstk->amount=pstk->number*pstk->cost;
		//�����۱�����������۵���Ʒ
		psal->volume+=num;
		psal->value=psal->volume*psal->price;
	}
}

//����ѯ 
void stock_inquire(struct stock *pstk, int *total){
	double stk_num=0;  //��������Ʒռ�õ��ʽ� 
	cout<<"\nGoods: Name  Number  Cost  Amount\n";
	for (int i=0; i<=*total; i++, pstk++){
		cout<<setiosflags(ios::left)<<"    "
			<<setw(20)<<pstk->goods
			<<setw(10)<<pstk->number
			<<setw(10)<<pstk->cost
			<<setw(15)<<pstk->amount<<endl;
		stk_num+=pstk->amount;
	} 
	cout<<"The total amount of the stock is "<<stk_num<<endl;
}

//���۲�ѯ 
void sales_inquire(struct sales *psal, int *total){
	double sal_num=0;  //����������Ʒ�ܶ�
	cout<<"\nGoods: Name  Volume  Price  Value\n";
	for (int i=0; i<=*total; i++, psal++){
		cout<<setiosflags(ios::left)<<"    "
			<<setw(20)<<psal->goods
			<<setw(10)<<psal->volume
			<<setw(10)<<psal->price
			<<setw(15)<<psal->value<<endl;
		sal_num+=psal->value;
	}
	cout<<"The total amount of the sales is "<<sal_num<<endl;
}

