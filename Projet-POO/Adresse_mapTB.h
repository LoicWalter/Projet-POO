#pragma once
using namespace System;

namespace NS_Comp_Mappage {
	ref class Adresse_mapTB
	{
	private:
		static int id_adress;
		static String^ type_adress;
		static String^ adress;
		static String^ ville;
		static int CP;
		static int num_adress;
		static String^ complement;
		static String^ pays;
	public:
		String^ Select(void);
		String^ Insert(void);
		String^ Delete(void);
		String^ Update(void);
		virtual void setId_Adress(int);
		virtual void setCP(int);
		virtual void setNum_Adress(int);
		virtual void setType_Adress(String^);
		virtual void setAdress(String^);
		virtual void setVille(String^);
		virtual void setComplement(String^);
		virtual void setPays(String^);

		virtual int getId_Adress(void);
		virtual int getCP(void);
		virtual int getNum_Adress(void);
		virtual String^ getType_Adress(void);
		virtual String^ getAdresse(void);
		virtual String^ getVille(void);
		virtual String^ getComplement(void);
		virtual String^ getPays(void);

	};
}

