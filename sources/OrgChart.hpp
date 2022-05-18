#include <iostream>
using namespace std;
#pragma once
namespace ariel{

struct employee
	{
	employee *next;


	public:
	    string Name;

		friend std::ostream & operator<< (std::ostream &stream, const  employee &matrix ){stream<<"v";return stream;}
		int size(){return 4;}
	employee(string v)
	{
		this->Name=v;
	}

	};

class OrgChart {
	
	
	public:
	
	employee* m_first=nullptr;
	void setroot(employee*e)
	{
		this->m_first->Name="cdcd";
	}
    OrgChart* m_next;
    OrgChart(string);
   // OrgChart();
    OrgChart(OrgChart,OrgChart);

	OrgChart() : m_first(nullptr) {
	}
	~OrgChart() {
		while (!isEmpty()) pop();
	}
	OrgChart add_root(string s);

    OrgChart  add_sub(string,string);

	int size(){return 3;}

	bool isEmpty() const {
		return m_first==nullptr;
	}



	employee * getRoot() {
		return m_first;
	}

	void pop() {
		employee* n= m_first;
		m_first= m_first->next;
		delete n;
	}

    employee * begin_level_order();
    employee *  end_level_order();
	employee * begin_reverse_order();
	employee * reverse_order();
	employee * begin_preorder();
	employee * end_preorder();
	string operator*(){return "vfdvfd";}
	bool operator!=(OrgChart){return false;}
	OrgChart operator++(){return (*this);}
		friend std::ostream & operator<< (std::ostream &stream, const  OrgChart &matrix ){stream<<"v";return stream;}


	
public:	

	//-------------------------------------------------------------------
	// iterator related code:
	// inner class and methods that return instances of it)
	//-------------------------------------------------------------------
	class iterator {

	  private:
		employee* pointer_to_current_node;

	public:

		iterator(employee* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}


		int operator*()  {
 			return 0;
		}

		// ++i;
		iterator& operator++() {
			//++pointer_to_current_node;
			pointer_to_current_node = pointer_to_current_node->next;
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		 iterator operator++(int) {
			iterator tmp= *this;
			pointer_to_current_node= pointer_to_current_node->next;
			return tmp;
		}

		int operator==(const iterator& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		int operator!=(const iterator& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};  // END OF CLASS ITERATOR

	employee *first;

	class const_iterator {

	  private:
		employee* pointer_to_current_node;

	public:

		const_iterator(employee* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}

		// Note that the method is const as this operator does not
		// allow changing of the iterator.
		// Note that it returns T& as it allows to change what it points to.
		// A const_iterator class will return const T&
		// and the method will still be const
		const string operator*() const {
			//return *pointer_to_current_node;
			return this->pointer_to_current_node->Name;
		}
		// ++i;
		const_iterator& operator++() {
			//++pointer_to_current_node;
			pointer_to_current_node = pointer_to_current_node->next;
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const const_iterator operator++(int) {
			const_iterator tmp= *this;
			pointer_to_current_node= pointer_to_current_node->next;
			return tmp;
		}

		bool operator==(const const_iterator& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const const_iterator& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};  // END OF CLASS const_iterator

	iterator begin() {
		// return &(m_first->m_value); 
		return iterator{m_first};
	}
	
	iterator end() {
		// return nullptr; 
		return iterator{nullptr};
	}
};

}

