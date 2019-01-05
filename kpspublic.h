// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : https://tckimlik.nvi.gov.tr/service/kpspublic.asmx?WSDL
//  >Import : https://tckimlik.nvi.gov.tr/service/kpspublic.asmx?WSDL>0
// Encoding : utf-8
// Version  : 1.0
// (05.01.2019 21:11:00 - - $Rev: 90173 $)
// ************************************************************************ //

#ifndef   kpspublicH
#define   kpspublicH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif
#if !defined(IS_OPTN)
#define IS_OPTN 0x0001
#endif
#if !defined(IS_REF)
#define IS_REF 0x0080
#endif


namespace NS_kpspublic {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:boolean         - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:int             - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:long            - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]



// ************************************************************************ //
// Namespace : http://tckimlik.nvi.gov.tr/WS
// soapAction: http://tckimlik.nvi.gov.tr/WS/TCKimlikNoDogrula
// transport : http://schemas.xmlsoap.org/soap/http
// style     : document
// use       : literal
// binding   : KPSPublicSoap
// service   : KPSPublic
// port      : KPSPublicSoap
// URL       : https://tckimlik.nvi.gov.tr/service/kpspublic.asmx
// ************************************************************************ //
__interface INTERFACE_UUID("{67B5D205-8FBC-D2EF-B4C5-C2A9574FBEEC}") KPSPublicSoap : public IInvokable
{
public:
  virtual bool            TCKimlikNoDogrula(const __int64 TCKimlikNo, const UnicodeString Ad, const UnicodeString Soyad, const int DogumYili) = 0;
};
typedef DelphiInterface<KPSPublicSoap> _di_KPSPublicSoap;

_di_KPSPublicSoap GetKPSPublicSoap(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_kpspublic

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_kpspublic;
#endif



#endif // kpspublicH
