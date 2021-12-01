#pragma once
#include "CAD.h"
#include "Stock_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;


namespace NS_Comp_Svc {
	ref class Stock_service
	{
	private:
		CAD^ Cad;
		Stock_mapTB^ StockMappTB;
	public:
		Stock_service(void);
		DataSet^ Stocks(String^);
		void AddArticle(String^, String^, String^, int, float, float, float, int, int, int);
		void DeleteArticle(int);
		DataSet^ SelectArticle(int, String^);
		void UpdateArticle(int, String^, String^, String^, int, float, float, float, int, int, int);
		DataSet^ ReapproDepasse(String^);
	};
}

