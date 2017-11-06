// dllmain.h : Declaration of module class.

class CPolygoneModule : public ATL::CAtlDllModuleT< CPolygoneModule >
{
public :
	DECLARE_LIBID(LIBID_PolygoneLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_POLYGONE, "{80EBF636-EA1E-46FB-A647-342F44D8DB9D}")
};

extern class CPolygoneModule _AtlModule;
