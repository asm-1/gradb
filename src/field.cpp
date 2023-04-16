class MetaField
{
	public:
		MetaField(){};

		~MetaField(){};
};

class Field{
	public:
		int value;
		Field(){};
		~Field(){};
};

class StringField : public Field
{
public:
	std::string value;
	StringField(std::string v){
		value = v;
	};

	~StringField(){};
};

class IntField : public Field
{
public:
	int value;
	IntField(int n){
		value = n;
	};

	~IntField(){};
};

class BoolField : public Field
{
public:
	bool value;
	BoolField(bool v){
		value = v;
	};

	~BoolField(){};
};