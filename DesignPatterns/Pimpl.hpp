
#include <iostream>
#include <memory>


class Cmerror {

    public:
        Cmerror();
        ~Cmerror();
        void set_error();
        void clear_error();
    private:

    class Impl;
    std::unique_ptr<Impl> impl;

};
