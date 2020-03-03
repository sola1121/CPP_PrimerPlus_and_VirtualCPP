#include <iostream>

int tom=3;
int dick=10;
static int harry=100;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void remote_access();

int main(int argc, char** argv) {
	using std::cout; using std::endl;
	cout<<"main() reports the following adresses:\n";
	cout<<"&tom = "<<&tom<<", &dick = "<<&dick<<", &harry = "<<&harry<<endl;
	remote_access();
	
	system("pause");
	return 0;
}
