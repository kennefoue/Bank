///////////////////////////////////////////////////////////////
// Account.h

///////////////////////////////////////////////////////////////
#pragma once
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
#include "stdafx.h"

/*Avilain*/


/*Avilain*/




///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
class Account
{
public:
	Account();
	Account(accountType_t c_atype);
	Account(accountType_t c_atype, accNum_t c_actnum, field_t c_ssn, 
		    field_t c_fn, field_t c_adr, field_t c_cty, field_t c_st, 
			field_t c_zc, field_t c_hph, field_t c_wph, pin_t c_pin, 
			currency_t c_bal);
	virtual ~Account();

	void createAccount();
	void depositMoney(int);
	void withdrawMoney();
	
	void insertAccNum(accNum_t accNum);

	void viewAccount() const;

	accountType_t typeOfAccount()	const;
	accNum_t accountNumber()		const;
	field_t	customerSocial()		const;
	field_t	customerFullName()		const;
	field_t	customerAddress()		const;
	field_t	customerCity()			const;
	field_t	customerState()			const;
	field_t	customerZipCode()		const;
	field_t	customerHomePhone()		const;
	field_t	customerWorkPhone()		const;
	field_t customerPinNumber()		const;
	currency_t balance()			const;


	/*Avilain*/
	void setAccountNumber(int accountNumber){ *my_accountNumber = accountNumber; };//
	void setMyBalance(int balance){ *my_balance = balance; };//
	void setCustomerAddress(std::string address){ *my_customerAddress = address; };//
	void setCustomerCity(std::string city){ *my_customerCity = city; }; //
	void setCustomerFullName(std::string name){ *my_customerFullName = name; }; //
	void setCustomerHomePhone(std::string phoneNumber){ *my_customerHomePhone = phoneNumber; };//
	void setCustomerPin(std::string pin){ *my_pinNumber = pin; };//
	void setCustomerSocial(std::string social){ *my_customerSocial = social; };//
	void setCustomerState(std::string state){ *my_customerState = state; }; //
	void setCustomerWorkPhone(std::string workPhone){ *my_customerWorkPhone = workPhone; };//
	void setCustomerZipCode(std::string zip){ *my_customerZipCode = zip; };//
	/*Avilain*/



private:
	accountType_t	my_typeOfAccount;
	accNum_t*		my_accountNumber;
	field_t*		my_customerSocial;
	field_t*		my_customerFullName;
	field_t*		my_customerAddress;
	field_t*		my_customerCity;
	field_t*		my_customerState;
	field_t*		my_customerZipCode;
	field_t*		my_customerHomePhone;
	field_t*		my_customerWorkPhone;
	pin_t*			my_pinNumber;
	currency_t*		my_balance;
};
///////////////////////////////////////////////////////////////