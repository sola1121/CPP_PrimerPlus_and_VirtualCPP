#include<iostream>
#include<cstring>
#include<cctype>
int main(){
	using namespace std;
	char ch[30];
	int v=0,c=0,o=0;
	cout<<"Enter words (q to quit): ";
	while (cin>>ch){
		if (ch[0]=='q'&&strlen(ch)==1)
			break;
		if (isalpha(ch[0])){
			if (ch[0]=='A'||ch[0]=='a'||ch[0]=='E'||ch[0]=='e'||ch[0]=='I'||ch[0]=='i'||ch[0]=='O'||ch[0]=='o'||ch[0]=='U'||ch[0]=='u')
				v++;
			else
				c++;
		}
		else
			o++;
		}
	
	cout<<v<<" words beginning with vowels.\n";
	cout<<c<<" words beginning with consonants.\n";
	cout<<o<<" others.\n";
	
	cin.get();
	return 0;
}
