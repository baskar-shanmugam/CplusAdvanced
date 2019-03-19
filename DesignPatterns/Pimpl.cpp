

#include "Pimpl.hpp"


class Cmerror::Impl {

    public:
        Impl() {
            std::cout<< " Impl ctr called " << std::endl;
        }
        ~Impl() {
            std::cout<< " Impl dtr called " << std::endl;
        }
        void set_cmerror() {
            std::cout << " Basky - NJH GROUP Impl prv set cmerror " << std::endl;
        }

        void clear_cmerror() {
            std::cout << " Basky Impl prv clear cmerror " << std::endl;
            show();
        }
    private:
        void show() {
            std::cout << " Modified " << std::endl;
        }

};

Cmerror::Cmerror() {
    std::cout<< " Cmerror ctr called " << std::endl;
    impl = std::unique_ptr<Impl>(new Cmerror::Impl());
}

Cmerror::~Cmerror() {
    std::cout<< " Cmerror dtr called " << std::endl;
}

void
Cmerror::set_error(void) {
    std::cout<< " Cmerror set error called " << std::endl;
    impl->set_cmerror();
}

void
Cmerror::clear_error(void) {
    std::cout<< " Cmerror clear error called " << std::endl;
    impl->clear_cmerror();
}

/*
int main(void) {
    Cmerror c;
    c.set_error();
    c.clear_error();
    std::cout << std::endl;
    Cmerror d;
    return 0;
}*/
