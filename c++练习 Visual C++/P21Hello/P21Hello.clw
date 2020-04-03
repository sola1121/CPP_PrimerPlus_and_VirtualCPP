; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CP21HelloDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "P21Hello.h"

ClassCount=4
Class1=CP21HelloApp
Class2=CP21HelloDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_P21HELLO_DIALOG

[CLS:CP21HelloApp]
Type=0
HeaderFile=P21Hello.h
ImplementationFile=P21Hello.cpp
Filter=N

[CLS:CP21HelloDlg]
Type=0
HeaderFile=P21HelloDlg.h
ImplementationFile=P21HelloDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=P21HelloDlg.h
ImplementationFile=P21HelloDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_P21HELLO_DIALOG]
Type=1
Class=CP21HelloDlg
ControlCount=3
Control1=IDOK,button,1342275585
Control2=IDCANCEL,button,1342275584
Control3=IDC_STATIC,static,1342308352

