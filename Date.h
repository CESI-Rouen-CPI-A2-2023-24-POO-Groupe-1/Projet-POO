#pragma once
ref class Date
{
public:
	getDay(){
		return day;
	}
	getMonth(){
		return month;
	}
	getYear(){
		return year;
	}
	setDay(int day){
		this->day = day;
	}
	setMonth(int month){
		this->month = month;
	}
	setYear(int year){
		this->year = year;
	}
	toSQLString(){
		return year + "-" + month + "-" + day;
	}
	Date(){
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int day, int month, int year){
		this->day = day;
		this->month = month;
		this->year = year;
	}
	private:
		int day;
		int month;
		int year;
};

