#include "affichageForms.h"
affichageForms::affichageForms() {

}

void affichageForms::afficherForms() {
	Form^ FormMenu = gcnew MyForm();
	FormMenu->Show();
}