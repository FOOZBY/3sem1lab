#include "Header.h"

int main()
{
	setlocale(0, "");

	string** text = nullptr; // text
	int n = 0; // amount of rows

	string prim_file = "";

	n = get_amout_of_rows(prim_file, n);

	text = new string*[n];//arrow

	save_primordial_text_to_arrow(prim_file, text, n);

	show(text, n, "Изначальный текст: ");

	change_primordial_text(text, n);

	show(text, n, "Преобразованный текст: ");

	save_changed_text(text, n);

	for (int i = 0; i < n; i++)
	{
		delete text[i];
	}
	delete [] text;

	return 0;
};
