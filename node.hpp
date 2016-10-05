#ifndef NODE_HPP
#define NODE_HPP
#include <vector>
#include <memory>
#include "connection.hpp"

class node
{   
public:
    node();
private:
    std::vector< std::weak_ptr <connection> > m_connections;

};

#endif // NODE_HPP
