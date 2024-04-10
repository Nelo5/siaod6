#include "Node.h"
Node::Node(string _ticket_number, string _station, int _train_number, int _wagon_number, int _seat_number, int _cost, string _date_of_sale, string _date_of_departure, int _traveling_time) {
	 ticket_number = _ticket_number;
	 station = _station;
	 train_number = _train_number;
	 wagon_number = _wagon_number;
	 seat_number = _seat_number;
	 cost = _cost;
	 date_of_sale = _date_of_sale;
	 departure_date = _date_of_departure;
	 traveling_time = _traveling_time;
	 prev = nullptr;
	 next = nullptr;
}
