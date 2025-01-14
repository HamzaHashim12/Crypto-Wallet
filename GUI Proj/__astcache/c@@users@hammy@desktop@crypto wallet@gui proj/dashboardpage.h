//---------------------------------------------------------------------------

#ifndef DashBoardPageH
#define DashBoardPageH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TDashBoardForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *CryptoWallet;
	TButton *btnDeposit;
	TButton *btnWithDraw;
	TButton *btnCheckBalance;
	TButton *btnLogout;
	TLabel *lblEmail;
	TLabel *Amount;
	TEdit *edtAmount;
	TComboBox *cmbCoinType;
	void __fastcall cmbCoinTypeChange(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnWithDrawClick(TObject *Sender);
	void __fastcall btnDepositClick(TObject *Sender);
	void __fastcall btnCheckBalanceClick(TObject *Sender);
	void __fastcall btnLogoutClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDashBoardForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDashBoardForm *DashBoardForm;
//---------------------------------------------------------------------------
#endif