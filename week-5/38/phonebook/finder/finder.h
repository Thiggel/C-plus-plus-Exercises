#include <string>

struct Finder
{
    struct Pair
    {
        std::string key;
        std::string value;
    };

    private:
        Pair *d_pair;               // points to 'd_size' 'Pair' objects
        unsigned d_size;

    public:
        Finder();
                                    // if key is present, change its value,
                                    // otherwise add a new Pair
        void insert(std::string const &key, std::string const &value);

                                    // users receive immutable Pairs
        Pair const *get(std::string const &key) const;

    private:
                                    // add element to 'd_pair'
        void add(std::string const &key, std::string const &value);   

                                    // private backdoor: returns 
                                    // modifiable Pair or 0 if not found 
        Pair *finder(std::string const &key) const;
};
            
inline Finder::Pair const *Finder::get(std::string const &key) const
{
    return finder(key);
}
