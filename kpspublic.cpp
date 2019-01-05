// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : https://tckimlik.nvi.gov.tr/service/kpspublic.asmx?WSDL
//  >Import : https://tckimlik.nvi.gov.tr/service/kpspublic.asmx?WSDL>0
// Encoding : utf-8
// Version  : 1.0
// (05.01.2019 21:11:00 - - $Rev: 90173 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "kpspublic.h"



namespace NS_kpspublic {

_di_KPSPublicSoap GetKPSPublicSoap(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "https://tckimlik.nvi.gov.tr/service/kpspublic.asmx?WSDL";
  static const char* defURL = "https://tckimlik.nvi.gov.tr/service/kpspublic.asmx";
  static const char* defSvc = "KPSPublic";
  static const char* defPrt = "KPSPublicSoap";
  if (addr=="")
	addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
	rio->WSDLLocation = addr;
	rio->Service = defSvc;
	rio->Port = defPrt;
  } else {
	rio->URL = addr;
  }
  _di_KPSPublicSoap service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
	delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* KPSPublicSoap */
  InvRegistry()->RegisterInterface(__delphirtti(KPSPublicSoap), L"http://tckimlik.nvi.gov.tr/WS", L"utf-8");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(KPSPublicSoap), L"http://tckimlik.nvi.gov.tr/WS/TCKimlikNoDogrula");
  InvRegistry()->RegisterInvokeOptions(__delphirtti(KPSPublicSoap), ioDocument);
  /* KPSPublicSoap.TCKimlikNoDogrula */
  InvRegistry()->RegisterMethodInfo(__delphirtti(KPSPublicSoap), "TCKimlikNoDogrula", "",
									"[ReturnName='TCKimlikNoDogrulaResult']" );
}
#pragma startup RegTypes 32

};     // NS_kpspublic

