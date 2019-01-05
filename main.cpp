//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "kpspublic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmMain *FrmMain;
//---------------------------------------------------------------------------
__fastcall TFrmMain::TFrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmMain::btnSorgulaClick(TObject *Sender)
{
_di_KPSPublicSoap tckimnoDogrula=GetKPSPublicSoap();
double TCKN=StrToFloat(editTCKN->Text.Trim());
UnicodeString Isim=editIsim->Text.Trim().UpperCase();
String Soyad=editSoyad->Text.Trim().UpperCase();
int dogumYili=StrToInt(editDogumYili->Text.Trim());
bool result = tckimnoDogrula->TCKimlikNoDogrula(TCKN,Isim,Soyad,dogumYili);
if(result) ShowMessage("T.C. KÝMLÝK DOÐRU");
	  else ShowMessage("T.C. KÝMLÝK YANLIÞ");
}
//---------------------------------------------------------------------------
