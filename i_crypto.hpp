#ifndef I_CRYPTO_HPP
#define I_CRYPTO_HPP
#include <vector>
#include <array>

class i_crypto
{
public:
    virtual std::vector <uint8_t> calculate_hash(const std::array<uint8_t, 16> & sender_address,
                                         const std::array<uint8_t, 16> & recivier_address,
                                         size_t diff) = 0;
    virtual bool calculate_diff(const std::array<uint8_t, 16> & sender_address,
                                         const std::array<uint8_t, 16> & recivier_address,
                                         size_t padding, size_t diff) = 0;

    virtual ~i_crypto() = default;

};

#endif // I_CRYPTO_HPP
