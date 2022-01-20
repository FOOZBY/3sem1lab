#include <iostream>
#include <string>
#include <fstream>
#include <cctype>//for tolower/toupper

using namespace std;

int get_amout_of_rows(string &prim_file, int &n);
void save_primordial_text_to_arrow(string prim_file, string** text, int n);
void change_primordial_text(string** text, int n);
void show(string** text, int n, string message);
void save_changed_text(string** text, int n);
