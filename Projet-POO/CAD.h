#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace NS_Comp_Data
{
	ref class CAD
	{
	private:
		String^ req_sql;
		String^ cnx;
		SqlConnection^ Cnx;
		SqlCommand^ Cmd;
		SqlDataAdapter^ Da;
		DataSet^ Ds;
	public:
		CAD(void);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}


