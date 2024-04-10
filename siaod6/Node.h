#pragma once
#include<string>
using namespace std;

class Node
{
	Node* prev;
	Node* next;
	string ticket_number;
	string station;
	int train_number;
	int wagon_number;
	int seat_number;
	int cost;
	string date_of_sale;
	string departure_date;
	int traveling_time;
	Node(string _ticket_number,
		 string _station, 
		 int _train_number, 
		 int _wagon_number, 
		 int _seat_number, 
		 int _cost, 
		 string _date_of_sale, 
		 string _date_of_departure, 
		 int _traveling_time);
};

