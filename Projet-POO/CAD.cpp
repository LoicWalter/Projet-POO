#include "CAD.h"

namespace NS_Comp_Data {
	CAD::CAD(void) {
		this->req_sql = "";
		this->cnx = "Data Source=LE-PC-QUIRESPIR;Initial Catalog=Projet;Persist Security Info=True;User ID=CNX_Projet;Password=azerty";
		this->Cnx = gcnew SqlConnection(this->cnx);
		this->Cmd = gcnew SqlCommand(this->req_sql, this->Cnx);
		this->Da = gcnew SqlDataAdapter(this->Cmd);
		this->Ds = gcnew DataSet();

		this->Cmd->CommandType = CommandType::Text;
	}

	void CAD::actionRows(String^ req_sql){
		this->req_sql = req_sql;
		this->Cmd->CommandText = this->req_sql;
		this->Da->SelectCommand = this->Cmd;
		this->Cnx->Open();
		this->Cmd->ExecuteNonQuery();
		this->Cnx->Close();
	}

	DataSet^ CAD::getRows(String^ req_sql, String^ DataTableName) {
		this->Ds->Clear();
		this->req_sql = req_sql;
		this->Cmd->CommandText = this->req_sql;
		this->Da->SelectCommand = this->Cmd;
		this->Da->Fill(this->Ds, DataTableName);

		return this->Ds;
	}

	int CAD::getID_Rows(String^ req_sql) {
		int id;
		this->req_sql = req_sql;
		this->Cmd->CommandText = this->req_sql;
		this->Da->SelectCommand = this->Cmd;
		this->Cnx->Open();
		id = Convert::ToInt32(this->Cmd->ExecuteScalar());
		this->Cnx->Close();
		return id;
		//a tester
	}
}

