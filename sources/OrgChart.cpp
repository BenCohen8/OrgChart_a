#include <iostream>
#include "OrgChart.hpp"

using namespace std;
using namespace ariel;

OrgChart OrgChart::add_root(string s)
{
   // this->root->name=s;
    return *this;
}
OrgChart OrgChart::add_sub(string,string)
{
    return *this;
}

    OrgChart::employee  * OrgChart::begin_level_order()
    {
        
      return this->root;
    }

        OrgChart::employee* OrgChart::end_level_order()
        {
          
          return this->root;
        }
           OrgChart::employee* OrgChart::begin_reverse_order()
          {
          return this->root;
          }
         OrgChart::employee* OrgChart::reverse_order()
        {
          return this->root;
        }
        OrgChart::employee* OrgChart::begin_preorder()
      {
          return this->root;
      }
       OrgChart::employee* OrgChart::end_preorder()
      {
          return this->root;
      }
