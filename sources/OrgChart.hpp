#include <iostream>
#include <vector>
using namespace std;
namespace ariel{
class OrgChart
{
public:
    struct employee
    {
        public:
        string name="null";
        vector<employee> sub;
        employee(string s)
			: name(s) {
		}
    };
    employee* Boss=nullptr;
    OrgChart() : root(nullptr) {
	}
    employee * root;

        class iterator
        {
        private:
            employee *_ptr;
        public:
            iterator(employee *ptr) : _ptr(ptr){}
            string& operator*()
            {
                return _ptr->name;
            }
            employee& operator++()
            {
               return _ptr->sub[0];
            }
            bool operator!=(iterator& e)const
            {
                return _ptr!=e._ptr;
            }
            };
            iterator begin()
            {
                return iterator(root);
            }
            iterator end()
            {
                return iterator(nullptr);
            }
    OrgChart  add_root(string);
    OrgChart add_sub(string,string);
    employee * begin_level_order();
    employee *  end_level_order();
	employee * begin_reverse_order();
	employee * reverse_order();
	employee * begin_preorder();
	employee * end_preorder();
    friend std::ostream & operator<< (std::ostream &stream, const  employee &matrix ){stream<<"v";return stream;}
    friend std::ostream & operator<< (std::ostream &stream, const  OrgChart &matrix ){stream<<"v";return stream;}



        
};

}