﻿//---------------------------------------------------------------------------

#ifndef CreateWalletPageH
#define CreateWalletPageH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CreateWalletPage.h"

String hashPassword(const String &password);


//---------------------------------------------------------------------------
class TCreateWalletForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblEmail;
	TLabel *Amount;
	TLabel *CryptoWallet;
	TEdit *edtEmail;
	TEdit *edtPassword;
	TButton *btnCreate;
	TLabel *Label1;
	TButton *btnCancel;
	void __fastcall btnCreateClick(TObject *Sender);
    void __fastcall btnCancelClick(TObject *Sender);
//	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCreateWalletForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCreateWalletForm *CreateWalletForm;
//---------------------------------------------------------------------------
#endif