#include <icrsint.h>
#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
#import "c:\program files\common files\system\ado\msado15.dll"  no_namespace rename(��EOF��, ��adoEOF��) rename(��BOF��, ��adoBOF��) 
void main(){
_ConnectionPtr pMyConnect = NULL;  
HRESULT hr = pMyConnect.CreateInstance(__uuidof(Connection));  
if (FAILED(hr))  
return;  
//��ʼ�����Ӳ���  
_bstr_t strConnect = ""Provider=SQLOLEDB; 
Server=pc201409131926; Database=mytest; uid=sa; pwd=sa;"; //Databaseָ��ϵͳ�е����ݿ�  
//ִ������  
try  
{  
// Open���������ִ�������BSTR����_bstr_t����  
pMyConnect->Open(strConnect, "", "", NULL);  
}  
catch(_com_error &e)  
{  
MessageBox(e.Description(), "���ӳ���", MB_OK|MB_ICONINFORMATION);  
}//�������Ӵ��� 
     _RecordsetPtr m_pRecordset;
    if(FAILED(m_pRecordset.CreateInstance( _uuidof( Recordset ))))
    {
     cout<<"��¼������ָ��ʵ����ʧ�ܣ�"<<endl;
       return;
   }
    try {
        m_pRecordset->Open("select * from  T_Test",(IDispatch*)sqlSp,adOpenDynamic,adLockOptimistic, adCmdText);
    }
   catch (_com_error &e)
    {
      cout << e.Description()<<endl;
   }
   try {
         m_pRecordset->MoveFirst();
         while(!m_pRecordset->adoEOF) 
         {
             string insertTime=(char*)(_bstr_t)(m_pRecordset->Fields->GetItem(_variant_t("InsertTime"))->Value);
            cout<<insertTime<<endl;
             m_pRecordset->MoveNext();
        }
      }
    catch (_com_error &e){
       cout << e.Description()<<endl;
    }
	}
system("pause");
}
