#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting{
private:
	string words;
	int number;
public:
	JustTesting(const string & s="Just testing", int n=0){
		words=s;number=n;cout<<words<<" constructed\n";
	}
	~JustTesting(){
		cout<<words<<"destroyed\n";
	}
	void show() const { cout<<words<<", "<<number<<endl; }
};

int main(){
	char * buffer=new char[BUF];
	
	JustTesting *pc1, *pc2;
	pc1=new (buffer) JustTesting;   //��λ��512�ֽڵ��ڴ� 
	pc2=new JustTesting("Heap1", 20);
	
	cout<<"Memory block address:\n"<<"buffer:"<<(void *) buffer<<"   heap: "<<pc2<<endl;
	cout<<"Memory contents:\n"<<pc1<<": ";
	pc1->show();
	cout<<pc2<<": ";
	pc2->show();
	
	JustTesting *pc3, *pc4;
	pc3=new (buffer+sizeof(JustTesting)) JustTesting("Better Idea", 6);   //����ʹ����ͬ���ڴ�����ǵ�ַ 
	pc4=new JustTesting("Heap2", 10);
	
	cout<<"Memory contents: \n";
	cout<<pc3<<": ";
	pc3->show();
	cout<<"Memory contents: \n";
	cout<<pc4<<": ";
	pc4->show();
	
	delete pc2;
	delete pc4;
	pc3->~JustTesting();   //�󴴽��Ķ���Ӧ�������ȴ����Ķ���ɾ�� 
	pc1->~JustTesting();
	delete [] buffer;   //�ͷ�buffer 
	cout<<"Done\n";
	
	system("pause");
	return 0;
}
