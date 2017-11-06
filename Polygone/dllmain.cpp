// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "Polygone_i.h"
#include "dllmain.h"
#include "compreg.h"

CPolygoneModule _AtlModule;

class CPolygoneApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CPolygoneApp, CWinApp)
END_MESSAGE_MAP()

CPolygoneApp theApp;

BOOL CPolygoneApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CPolygoneApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
