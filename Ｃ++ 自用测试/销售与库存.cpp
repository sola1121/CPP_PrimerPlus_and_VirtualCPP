#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

/*库存表*/
struct stock{
	char goods[20];  //商品名 
	int number;  //数量 
	float cost;  //进价 
	float amount;  //占用金额 
} stk_list[100];

/*销售表*/
struct sales{
	char goods[10];  //商品名
	int volume;  //销售量
	float price;  //单价
	float value;  //销售金额 
} sal_list[100];

void stock_input(struct stock *pstk, int *total);
void sales_input(struct sales *psal, int *total);
void sale_goods(struct stock *pstk, int *nstock, struct sales *psal, int *nales);
void stock_inquire(struct stock *pstk, int *total);
void sales_inquire(struct sales *psal, int *total);

int main(){
	int stk_total=0;  //库存商品种类数 
	int sal_total=0;  //销售商品种类数 
	char ch;
	
	while (1){
		cout<<"\n==================================\n";
		cout<<"   1.库存表初始录入\n"
			<<"   2.销售表初始录入\n"
			<<"   3.销售商品\n"
			<<"   4.库存表查询\n"
			<<"   5.销售表查询\n"
			<<"   6.退出\n";
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

//库存表初始数据录入 
void stock_input(struct stock *pstk, int *total){
	char ch;
	cout<<"\n请输入商品的品名,数量及进价: \n";
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

//销售表初始数据录入 
void sales_input(struct sales *psal, int *total){
	char ch;
	cout<<"\n请输入商品的名及商品的售价: \n";
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

//销售商品后,库存表和销售表修改 
void sale_goods(struct stock *pstk, int *nstock, struct sales *psal, int *nsales){
	char name[20];
	int num, i, j;
	cout<<"\n请输入销售的商品名和销售数量: \n"; 
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
		//从库存表中减去已销售的商品
		pstk->number-=num;
		pstk->amount=pstk->number*pstk->cost;
		//从销售表中添加已销售的商品
		psal->volume+=num;
		psal->value=psal->volume*psal->price;
	}
}

//库存查询 
void stock_inquire(struct stock *pstk, int *total){
	double stk_num=0;  //计算库存商品占用的资金 
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

//销售查询 
void sales_inquire(struct sales *psal, int *total){
	double sal_num=0;  //计算销售商品总额
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

