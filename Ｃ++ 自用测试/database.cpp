#include <icrsint.h>
#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
#import "c:\program files\common files\system\ado\msado15.dll"  no_namespace rename(”EOF”, “adoEOF”) rename(”BOF”, “adoBOF”) 
void main(){
_ConnectionPtr pMyConnect = NULL;  
HRESULT hr = pMyConnect.CreateInstance(__uuidof(Connection));  
if (FAILED(hr))  
return;  
//初始化链接参数  
_bstr_t strConnect = ""Provider=SQLOLEDB; 
Server=pc201409131926; Database=mytest; uid=sa; pwd=sa;"; //Database指你系统中的数据库  
//执行连接  
try  
{  
// Open方法连接字串必须四BSTR或者_bstr_t类型  
pMyConnect->Open(strConnect, "", "", NULL);  
}  
catch(_com_error &e)  
{  
MessageBox(e.Description(), "连接出错", MB_OK|MB_ICONINFORMATION);  
}//发生链接错误 
     _RecordsetPtr m_pRecordset;
    if(FAILED(m_pRecordset.CreateInstance( _uuidof( Recordset ))))
    {
     cout<<"记录集对象指针实例化失败！"<<endl;
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
