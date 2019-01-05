//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFrmMain : public TForm
{
__published:	// IDE-managed Components
	TButton *btnSorgula;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *editTCKN;
	TLabel *Label2;
	TEdit *editIsim;
	TLabel *Label3;
	TEdit *editSoyad;
	TEdit *editDogumYili;
	TLabel *Label4;
	void __fastcall btnSorgulaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmMain *FrmMain;
//---------------------------------------------------------------------------
#endif
