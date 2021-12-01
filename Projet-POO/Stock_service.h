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
		void AddArticle(String^, int, float, int, int);
		void DeleteArticle(int);
		void UpdateArticle(int, String^, int, float, int, int);
	};
}

