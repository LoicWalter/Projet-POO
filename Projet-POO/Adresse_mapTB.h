#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Adresse_mapTB
	{
	private:
		int id;
		String^ type_adress;
		String^ adress;
		String^ ville;
		int CP;
		int num_adress;
		String^ complement;
		String^ pays;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		void setId_Adress(int);
		void setCP(int);
		void setNum_Adress(int);
		void setType_Adress(String^);
		void setAdresse(String^);
		void setVille(String^);
		void setComplement(String^);
		void setPays(String^);

		int getId_Adress(void);
		int getCP(void);
		int getNum_Adress(void);
		String^ getType_Adress(void);
		String^ getAdresse(void);
		String^ getVille(void);
		String^ getComplement(void);
		String^ getPays(void);

	};
}

