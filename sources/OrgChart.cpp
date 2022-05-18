
#include "OrgChart.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

    OrgChart::OrgChart(string N)
    {
      //  this->setName(N);
    }
   
      OrgChart OrgChart::add_root(string s)
      {
        employee *e=new employee(s);
       // cout<<1<<endl;
       // this->setroot(e);
       // *this=o;

        return *this;
      }
        OrgChart OrgChart::add_sub(string s1,string s2)
        {
        return (*this);
        }
    employee *OrgChart::begin_level_order()
    {
      return this->getRoot();
    }

        employee* OrgChart::end_level_order()
        {
          
          return this->getRoot();
        }
          employee* OrgChart::begin_reverse_order()
          {
            return this->getRoot();
          }
        employee* OrgChart::reverse_order()
        {
            return this->getRoot();
        }
       employee* OrgChart::begin_preorder()
      {
        return this->getRoot();
      }
      employee* OrgChart::end_preorder()
      {
          return this->getRoot();
      }
 

       /* 
        OrgChart OrgChart::begin()
        {
            return *this->getRoot();
        }
        OrgChart OrgChart::end()
        {
            return *this->getRoot();

        }
        */
