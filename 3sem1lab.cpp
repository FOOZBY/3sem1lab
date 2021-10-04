#include "Header.h"

int main()
{
	setlocale(0, "");

	
	int n = 0;//amount of rows
	string prim_file;

	n = get_amout_of_rows(prim_file, n);

	string* text = new string[n];//arrow

	save_primordial_text_to_arrow(prim_file, text, n);

	change_primordial_text(text, n);

	save_changed_text(text, n);

	delete [] text;
};