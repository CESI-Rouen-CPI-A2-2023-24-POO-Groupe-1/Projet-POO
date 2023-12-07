#pragma once

using namespace System;

ref class Date
{
public:
	int getDay(){
		return day;
	}
	int getMonth(){
		return month;
	}
	int getYear(){
		return year;
	}
	void setDay(int day){
		this->day = day;
	}
	void setMonth(int month){
		this->month = month;
	}
	void setYear(int year){
		this->year = year;
	}
	String^ toSQLString(){
		String^ string = this->year + "-" + this->month + "-" + this->day;
		return string;
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

