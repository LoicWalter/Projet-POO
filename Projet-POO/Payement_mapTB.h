#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Payement_mapTB
	{
	private:
		int id_payement;
		String^ date_payement;
		String^ moyen_payement;
		float montant;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		void setId_Payement(int);
		void setDate_Payement(String^);
		void setMoyen_Payement(String^);
		void setMontant(float);

		int getId_Payement(void);
		String^ getDate_Payement(void);
		String^ getMoyen_Payement(void);
		float getMontant(void);
	};
}
