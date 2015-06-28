#include "Account.h"




/*Avilain*/

#include<vector>
#include<msclr\marshal_cppstd.h>
using namespace msclr::interop;

using std::vector;


lint_t findRecord(vector<Account*>*& pv_pca, const field_t ssn);




std::string tostring(System::String^ S)

{
	

	std::string s;
	int size = S->Length;
	int sz = size - 1;

	for (int i = 0; i <= sz; i++)
	{
			s += S[i];
	};

	return s;

};

int toInt(std::string text)
{
	
	char txt[50]; int zahl;

	//txt = text ;
	sscanf(txt, "i", zahl);

	return zahl;

};


/*Avilain*/

#pragma once

namespace BMS_GUI_EVENTS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TabControl^  tbMain;
	private: System::Windows::Forms::TabPage^  tbNewAccount;
	private: System::Windows::Forms::TabPage^  tbDepositAccount;
	private: System::Windows::Forms::Button^  btnCreateAccount;






	private: System::Windows::Forms::TabPage^  tbWithrawAccount;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblAddress;
	private: System::Windows::Forms::Label^  lblCountry;


	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblCity;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtBalance;

	private: System::Windows::Forms::TextBox^  txtPin;

	private: System::Windows::Forms::TextBox^  txtCustomerSocialNumber;

	private: System::Windows::Forms::TextBox^  txtAccountNumber;

	private: System::Windows::Forms::TextBox^  txtHomeNumber;

	private: System::Windows::Forms::TextBox^  txtPhoneNumber;

	private: System::Windows::Forms::TextBox^  txtZipCode;

	private: System::Windows::Forms::TextBox^  txtAddress;

	private: System::Windows::Forms::TextBox^  txtCity;

	private: System::Windows::Forms::TextBox^  txtCountry;





	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnDeposit;
	private: System::Windows::Forms::TextBox^  txtSocialNumber2;
	private: System::Windows::Forms::TextBox^  txtDeposit;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TabPage^  tbDeleteAccount;
	private: System::Windows::Forms::TabPage^  tbSaveAccount;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TabPage^  tbViewAccount;




private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::TextBox^  txtAccountOwnerShow;

private: System::Windows::Forms::TextBox^  txtBalanceshow;

private: System::Windows::Forms::TextBox^  txtCustomerSocialshow;

private: System::Windows::Forms::TextBox^  txtAccountNumbershow;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;



	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tbMain = (gcnew System::Windows::Forms::TabControl());
			this->tbNewAccount = (gcnew System::Windows::Forms::TabPage());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->txtPin = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerSocialNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtHomeNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtZipCode = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->txtCountry = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnCreateAccount = (gcnew System::Windows::Forms::Button());
			this->tbDepositAccount = (gcnew System::Windows::Forms::TabPage());
			this->txtDeposit = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->txtSocialNumber2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbWithrawAccount = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbDeleteAccount = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tbSaveAccount = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbViewAccount = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtAccountOwnerShow = (gcnew System::Windows::Forms::TextBox());
			this->txtBalanceshow = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerSocialshow = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountNumbershow = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tbMain->SuspendLayout();
			this->tbNewAccount->SuspendLayout();
			this->tbDepositAccount->SuspendLayout();
			this->tbWithrawAccount->SuspendLayout();
			this->tbDeleteAccount->SuspendLayout();
			this->tbSaveAccount->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tbViewAccount->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->ForeColor = System::Drawing::Color::Red;
			this->btnExit->Location = System::Drawing::Point(580, 598);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tbMain
			// 
			this->tbMain->Controls->Add(this->tbNewAccount);
			this->tbMain->Controls->Add(this->tbViewAccount);
			this->tbMain->Controls->Add(this->tbDepositAccount);
			this->tbMain->Controls->Add(this->tbWithrawAccount);
			this->tbMain->Controls->Add(this->tbDeleteAccount);
			this->tbMain->Controls->Add(this->tbSaveAccount);
			this->tbMain->Controls->Add(this->tabPage1);
			this->tbMain->Location = System::Drawing::Point(0, 0);
			this->tbMain->Name = L"tbMain";
			this->tbMain->SelectedIndex = 0;
			this->tbMain->Size = System::Drawing::Size(666, 761);
			this->tbMain->TabIndex = 2;
			// 
			// tbNewAccount
			// 
			this->tbNewAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbNewAccount->Controls->Add(this->txtBalance);
			this->tbNewAccount->Controls->Add(this->txtPin);
			this->tbNewAccount->Controls->Add(this->txtCustomerSocialNumber);
			this->tbNewAccount->Controls->Add(this->txtAccountNumber);
			this->tbNewAccount->Controls->Add(this->txtHomeNumber);
			this->tbNewAccount->Controls->Add(this->txtPhoneNumber);
			this->tbNewAccount->Controls->Add(this->txtZipCode);
			this->tbNewAccount->Controls->Add(this->txtAddress);
			this->tbNewAccount->Controls->Add(this->txtCity);
			this->tbNewAccount->Controls->Add(this->txtCountry);
			this->tbNewAccount->Controls->Add(this->txtName);
			this->tbNewAccount->Controls->Add(this->label8);
			this->tbNewAccount->Controls->Add(this->label7);
			this->tbNewAccount->Controls->Add(this->label6);
			this->tbNewAccount->Controls->Add(this->label5);
			this->tbNewAccount->Controls->Add(this->btnExit);
			this->tbNewAccount->Controls->Add(this->lblCity);
			this->tbNewAccount->Controls->Add(this->label4);
			this->tbNewAccount->Controls->Add(this->label2);
			this->tbNewAccount->Controls->Add(this->label1);
			this->tbNewAccount->Controls->Add(this->label3);
			this->tbNewAccount->Controls->Add(this->lblAddress);
			this->tbNewAccount->Controls->Add(this->lblCountry);
			this->tbNewAccount->Controls->Add(this->lblName);
			this->tbNewAccount->Controls->Add(this->btnCreateAccount);
			this->tbNewAccount->Location = System::Drawing::Point(4, 22);
			this->tbNewAccount->Name = L"tbNewAccount";
			this->tbNewAccount->Padding = System::Windows::Forms::Padding(3);
			this->tbNewAccount->Size = System::Drawing::Size(658, 735);
			this->tbNewAccount->TabIndex = 0;
			this->tbNewAccount->Text = L"New Account";
			this->tbNewAccount->Click += gcnew System::EventHandler(this, &MyForm::tbNewAccount_Click);
			// 
			// txtBalance
			// 
			this->txtBalance->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtBalance->Location = System::Drawing::Point(327, 518);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(326, 20);
			this->txtBalance->TabIndex = 31;
			// 
			// txtPin
			// 
			this->txtPin->Location = System::Drawing::Point(327, 458);
			this->txtPin->Name = L"txtPin";
			this->txtPin->Size = System::Drawing::Size(326, 20);
			this->txtPin->TabIndex = 30;
			// 
			// txtCustomerSocialNumber
			// 
			this->txtCustomerSocialNumber->Location = System::Drawing::Point(327, 393);
			this->txtCustomerSocialNumber->Name = L"txtCustomerSocialNumber";
			this->txtCustomerSocialNumber->Size = System::Drawing::Size(326, 20);
			this->txtCustomerSocialNumber->TabIndex = 29;
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtAccountNumber->Location = System::Drawing::Point(327, 336);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(326, 20);
			this->txtAccountNumber->TabIndex = 28;
			// 
			// txtHomeNumber
			// 
			this->txtHomeNumber->Location = System::Drawing::Point(427, 292);
			this->txtHomeNumber->Name = L"txtHomeNumber";
			this->txtHomeNumber->Size = System::Drawing::Size(226, 20);
			this->txtHomeNumber->TabIndex = 27;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(132, 292);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(160, 20);
			this->txtPhoneNumber->TabIndex = 26;
			// 
			// txtZipCode
			// 
			this->txtZipCode->Location = System::Drawing::Point(327, 247);
			this->txtZipCode->Name = L"txtZipCode";
			this->txtZipCode->Size = System::Drawing::Size(326, 20);
			this->txtZipCode->TabIndex = 25;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(327, 208);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(326, 20);
			this->txtAddress->TabIndex = 24;
			// 
			// txtCity
			// 
			this->txtCity->Location = System::Drawing::Point(327, 161);
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(326, 20);
			this->txtCity->TabIndex = 23;
			// 
			// txtCountry
			// 
			this->txtCountry->Location = System::Drawing::Point(327, 112);
			this->txtCountry->Name = L"txtCountry";
			this->txtCountry->Size = System::Drawing::Size(326, 20);
			this->txtCountry->TabIndex = 22;
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::Window;
			this->txtName->Location = System::Drawing::Point(324, 55);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(326, 20);
			this->txtName->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(15, 518);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Balance:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(15, 459);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"PIN:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(12, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Customer Social Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(299, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Home number:";
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCity->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblCity->Location = System::Drawing::Point(12, 161);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(38, 16);
			this->lblCity->TabIndex = 10;
			this->lblCity->Text = L"City:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(12, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Phone Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(12, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Zip Code:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(12, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Account Number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(12, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 4;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblAddress->Location = System::Drawing::Point(12, 208);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(70, 16);
			this->lblAddress->TabIndex = 3;
			this->lblAddress->Text = L"Address:";
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCountry->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblCountry->Location = System::Drawing::Point(12, 112);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(64, 16);
			this->lblCountry->TabIndex = 2;
			this->lblCountry->Text = L"Country:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblName->Location = System::Drawing::Point(12, 55);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(79, 16);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Full name:\r\n";
			// 
			// btnCreateAccount
			// 
			this->btnCreateAccount->ForeColor = System::Drawing::Color::Green;
			this->btnCreateAccount->Location = System::Drawing::Point(450, 598);
			this->btnCreateAccount->Name = L"btnCreateAccount";
			this->btnCreateAccount->Size = System::Drawing::Size(98, 23);
			this->btnCreateAccount->TabIndex = 0;
			this->btnCreateAccount->Text = L"Create Account";
			this->btnCreateAccount->UseVisualStyleBackColor = true;
			this->btnCreateAccount->Click += gcnew System::EventHandler(this, &MyForm::btnCreateAccount_Click);
			// 
			// tbDepositAccount
			// 
			this->tbDepositAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbDepositAccount->Controls->Add(this->txtDeposit);
			this->tbDepositAccount->Controls->Add(this->label10);
			this->tbDepositAccount->Controls->Add(this->btnDeposit);
			this->tbDepositAccount->Controls->Add(this->txtSocialNumber2);
			this->tbDepositAccount->Controls->Add(this->label9);
			this->tbDepositAccount->Location = System::Drawing::Point(4, 22);
			this->tbDepositAccount->Name = L"tbDepositAccount";
			this->tbDepositAccount->Padding = System::Windows::Forms::Padding(3);
			this->tbDepositAccount->Size = System::Drawing::Size(658, 735);
			this->tbDepositAccount->TabIndex = 1;
			this->tbDepositAccount->Text = L"Deposit Account";
			// 
			// txtDeposit
			// 
			this->txtDeposit->Location = System::Drawing::Point(459, 91);
			this->txtDeposit->Name = L"txtDeposit";
			this->txtDeposit->Size = System::Drawing::Size(156, 20);
			this->txtDeposit->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(30, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 18);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Amount:";
			// 
			// btnDeposit
			// 
			this->btnDeposit->Location = System::Drawing::Point(459, 163);
			this->btnDeposit->Name = L"btnDeposit";
			this->btnDeposit->Size = System::Drawing::Size(156, 31);
			this->btnDeposit->TabIndex = 2;
			this->btnDeposit->Text = L"OK !";
			this->btnDeposit->UseVisualStyleBackColor = true;
			this->btnDeposit->Click += gcnew System::EventHandler(this, &MyForm::btnDeposit_Click);
			// 
			// txtSocialNumber2
			// 
			this->txtSocialNumber2->Location = System::Drawing::Point(282, 40);
			this->txtSocialNumber2->Name = L"txtSocialNumber2";
			this->txtSocialNumber2->Size = System::Drawing::Size(333, 20);
			this->txtSocialNumber2->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(27, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 18);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Social Number: ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// tbWithrawAccount
			// 
			this->tbWithrawAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbWithrawAccount->Controls->Add(this->button1);
			this->tbWithrawAccount->Controls->Add(this->textBox1);
			this->tbWithrawAccount->Controls->Add(this->label11);
			this->tbWithrawAccount->Controls->Add(this->textBox2);
			this->tbWithrawAccount->Controls->Add(this->label12);
			this->tbWithrawAccount->Location = System::Drawing::Point(4, 22);
			this->tbWithrawAccount->Name = L"tbWithrawAccount";
			this->tbWithrawAccount->Padding = System::Windows::Forms::Padding(3);
			this->tbWithrawAccount->Size = System::Drawing::Size(658, 735);
			this->tbWithrawAccount->TabIndex = 2;
			this->tbWithrawAccount->Text = L"Withraw Account";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(466, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"OK !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(466, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(37, 96);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 18);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Amount:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(289, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(333, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(34, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 18);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Social Number: ";
			// 
			// tbDeleteAccount
			// 
			this->tbDeleteAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbDeleteAccount->Controls->Add(this->button2);
			this->tbDeleteAccount->Controls->Add(this->textBox3);
			this->tbDeleteAccount->Controls->Add(this->label13);
			this->tbDeleteAccount->Location = System::Drawing::Point(4, 22);
			this->tbDeleteAccount->Name = L"tbDeleteAccount";
			this->tbDeleteAccount->Padding = System::Windows::Forms::Padding(3);
			this->tbDeleteAccount->Size = System::Drawing::Size(658, 735);
			this->tbDeleteAccount->TabIndex = 3;
			this->tbDeleteAccount->Text = L"Delete Account";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(471, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"OK !";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(333, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(39, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(126, 18);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Social Number: ";
			// 
			// tbSaveAccount
			// 
			this->tbSaveAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbSaveAccount->Controls->Add(this->button3);
			this->tbSaveAccount->Controls->Add(this->textBox4);
			this->tbSaveAccount->Controls->Add(this->label14);
			this->tbSaveAccount->Location = System::Drawing::Point(4, 22);
			this->tbSaveAccount->Name = L"tbSaveAccount";
			this->tbSaveAccount->Size = System::Drawing::Size(658, 735);
			this->tbSaveAccount->TabIndex = 4;
			this->tbSaveAccount->Text = L"Save Accounts";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(470, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 31);
			this->button3->TabIndex = 14;
			this->button3->Text = L"OK !";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(293, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(333, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(38, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 36);
			this->label14->TabIndex = 12;
			this->label14->Text = L"File Name:\r\n ";
			// 
			// tabPage1
			// 
			this->tabPage1->AccessibleName = L"tbDeleteAll";
			this->tabPage1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->tabPage1->BackColor = System::Drawing::Color::SkyBlue;
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(658, 735);
			this->tabPage1->TabIndex = 5;
			this->tabPage1->Text = L"Delete All Account";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(465, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 31);
			this->button4->TabIndex = 17;
			this->button4->Text = L"OK !";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(288, 42);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(333, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(33, 42);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 36);
			this->label15->TabIndex = 15;
			this->label15->Text = L"File Name:\r\n ";
			// 
			// tbViewAccount
			// 
			this->tbViewAccount->BackColor = System::Drawing::Color::SkyBlue;
			this->tbViewAccount->Controls->Add(this->label20);
			this->tbViewAccount->Controls->Add(this->txtAccountOwnerShow);
			this->tbViewAccount->Controls->Add(this->txtBalanceshow);
			this->tbViewAccount->Controls->Add(this->txtCustomerSocialshow);
			this->tbViewAccount->Controls->Add(this->txtAccountNumbershow);
			this->tbViewAccount->Controls->Add(this->label17);
			this->tbViewAccount->Controls->Add(this->label18);
			this->tbViewAccount->Controls->Add(this->label19);
			this->tbViewAccount->Controls->Add(this->button5);
			this->tbViewAccount->Controls->Add(this->textBox6);
			this->tbViewAccount->Controls->Add(this->label16);
			this->tbViewAccount->Location = System::Drawing::Point(4, 22);
			this->tbViewAccount->Name = L"tbViewAccount";
			this->tbViewAccount->Size = System::Drawing::Size(658, 735);
			this->tbViewAccount->TabIndex = 6;
			this->tbViewAccount->Text = L"View Account";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(463, 124);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 31);
			this->button5->TabIndex = 15;
			this->button5->Text = L"OK !";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(286, 38);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(333, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(31, 38);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 18);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Social Number: ";
			// 
			// txtAccountOwnerShow
			// 
			this->txtAccountOwnerShow->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtAccountOwnerShow->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtAccountOwnerShow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAccountOwnerShow->Location = System::Drawing::Point(293, 294);
			this->txtAccountOwnerShow->Name = L"txtAccountOwnerShow";
			this->txtAccountOwnerShow->Size = System::Drawing::Size(326, 20);
			this->txtAccountOwnerShow->TabIndex = 38;
			// 
			// txtBalanceshow
			// 
			this->txtBalanceshow->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtBalanceshow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBalanceshow->Location = System::Drawing::Point(293, 443);
			this->txtBalanceshow->Name = L"txtBalanceshow";
			this->txtBalanceshow->Size = System::Drawing::Size(326, 20);
			this->txtBalanceshow->TabIndex = 37;
			// 
			// txtCustomerSocialshow
			// 
			this->txtCustomerSocialshow->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtCustomerSocialshow->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtCustomerSocialshow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCustomerSocialshow->Location = System::Drawing::Point(293, 369);
			this->txtCustomerSocialshow->Name = L"txtCustomerSocialshow";
			this->txtCustomerSocialshow->Size = System::Drawing::Size(326, 20);
			this->txtCustomerSocialshow->TabIndex = 36;
			// 
			// txtAccountNumbershow
			// 
			this->txtAccountNumbershow->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtAccountNumbershow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAccountNumbershow->Location = System::Drawing::Point(293, 230);
			this->txtAccountNumbershow->Name = L"txtAccountNumbershow";
			this->txtAccountNumbershow->Size = System::Drawing::Size(326, 20);
			this->txtAccountNumbershow->TabIndex = 35;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label17->Location = System::Drawing::Point(32, 443);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 16);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Balance:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label18->Location = System::Drawing::Point(31, 369);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(183, 16);
			this->label18->TabIndex = 33;
			this->label18->Text = L"Customer Social Number:";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label19->Location = System::Drawing::Point(32, 234);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(125, 16);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Account Number:";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label20->Location = System::Drawing::Point(32, 294);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(114, 16);
			this->label20->TabIndex = 39;
			this->label20->Text = L"Account Owner:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(663, 756);
			this->Controls->Add(this->tbMain);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tbMain->ResumeLayout(false);
			this->tbNewAccount->ResumeLayout(false);
			this->tbNewAccount->PerformLayout();
			this->tbDepositAccount->ResumeLayout(false);
			this->tbDepositAccount->PerformLayout();
			this->tbWithrawAccount->ResumeLayout(false);
			this->tbWithrawAccount->PerformLayout();
			this->tbDeleteAccount->ResumeLayout(false);
			this->tbDeleteAccount->PerformLayout();
			this->tbSaveAccount->ResumeLayout(false);
			this->tbSaveAccount->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tbViewAccount->ResumeLayout(false);
			this->tbViewAccount->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		/*Avilain*/
		this->Close();
		/*Avilain*/
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {



	}
	private: System::Void btnCreateAccount_Click(System::Object^  sender, System::EventArgs^  e) {

		/*Avilain*/

		Account acc;
		//account typ fehlt noch...


		//std::string city, country, zip, homePhone, workPhone, pin     ;

		
		//acc.setCustomerFullName(tostring(txtName->Text));
	

	//	std::string fullName = marshal_as<std::string>(txtName->Text);
	//	acc.setCustomerFullName(fullName);
		/*
		city = marshal_as<std::string>(txtCity->Text);
		acc.setCustomerCity(city);
		country = marshal_as<std::string>(txtCountry->Text);
		acc.setCustomerState(country);
		zip = marshal_as<std::string>(txtZipCode->Text);
		acc.setCustomerZipCode(zip);
		homePhone = marshal_as<std::string>(txtHomeNumber->Text);
		acc.setCustomerHomePhone(homePhone);
		workPhone = marshal_as<std::string>(txtPhoneNumber->Text);
		acc.setCustomerWorkPhone(workPhone);

		*/
		//pin = marshal_as<std::string>txtPin->Text);
		//acc.setCustomerPin(pin);
		

		
		
		
		/*
		

		//acc.setAccountNumber(Convert::ToInt32(txtAccountNumber->Text));
		//acc.setMyBalance(Convert::ToDouble(txtBalance->Text));
		
		*/
		
		/*Avilain*/
	};
	private: System::Void tbNewAccount_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDeposit_Click(System::Object^  sender, System::EventArgs^  e) {

	/*Avilain*/

	vector <Account*>* accountVector;
	std::string ssn = tostring(txtSocialNumber2->Text);
	//int ssn = Convert::ToInt32(txtSocialNumber2->Text);

	lint_t konto = findRecord(accountVector, ssn);

	if (konto == -999)
	{

	}
	else
	{
		accountVector->at(konto)->depositMoney(Convert::ToInt32(txtDeposit->Text));
	}

	




	/*Avilain*/
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
