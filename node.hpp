#ifndef NODE_HPP
#define NODE_HPP
#include <vector>
#include <memory>
#include "connection.hpp"
#include "i_crypto.hpp"


class node final
{   
public:
    node();
    void add_connection(const std::shared_ptr< node > & peer );
    void del_connection(const std::shared_ptr< node > & peer );
    std::array <uint8_t, 16> get_address() const;

private:
    std::vector< std::weak_ptr <connection> > m_connections;
    std::unique_ptr <i_crypto> m_crypto;
    std::array <uint8_t, 16> m_address;
    size_t diff;

};

#endif // NODE_HPP
