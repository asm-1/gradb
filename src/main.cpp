#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include "../lib/json.hpp"
#include "../include/messages.h"

using namespace std;
using json = nlohmann::json;

enum data_type
{
	Str,
	Int,
	Bool,
	Node_1,
};

class MetaField
{
	public:
		MetaField(){};
		~MetaField(){};
};

class Field{
	private:
		data_type type;
	public:
		Field(){};
		~Field(){};
};

class Node{
	private:
		data_type type;
	public:
		MetaField meta;
		std::vector<Field> fields;
		std::string name;

		Node(){};
		~Node(){};
};

void ReadDBFile(string file_name) {
	std::ifstream DB_file(file_name);

	if (!DB_file.good()) {
		//If user file not exist, create a new empty one
		cout << E0001 << "\n";
		cout << W0001 << "\n";

		std::ofstream new_DB_file("DB.json");
		new_DB_file << "{\"Nodes\": []}\n";
		new_DB_file.close();

		DB_file.open("DB.json");
	}

	json data = json::parse(DB_file)["Nodes"];

	cout << "Found nodes: " << size(data) << endl;

	DB_file.close();
};

int main(int argc, char const *argv[])
{
	Node node;

	ReadDBFile(argv[1]);

	return 0;
};