#pragma once
public ref class Mapping
{
public:
	Mapping(){
		id = 0;
	};
	Mapping(int id){
		this->id = id;
	};
	int getId(){
		return id;
	};
private:
	int id;
};

