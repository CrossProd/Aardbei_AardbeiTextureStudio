//---------------------------------------------------------------------------

#ifndef FilterSubH
#define FilterSubH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfrmSub : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *grbColor;
    TRadioButton *rdbRed;
    TRadioButton *rdbGreen;
    TRadioButton *rdbBlue;
    TRadioButton *rdbAll;
    TButton *btnOk;
    TButton *btnCancel;
    TButton *btnPreview;
    TGroupBox *grbParameters;
    TLabel *lblSlider1;
    TComboBox *cmbLayer;
    void __fastcall FormHide(TObject *Sender);
    void __fastcall btnCancelClick(TObject *Sender);
    void __fastcall FormActivate(TObject *Sender);
    void __fastcall btnPreviewClick(TObject *Sender);
    void __fastcall btnOkClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSub(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSub *frmSub;
//---------------------------------------------------------------------------
#endif
