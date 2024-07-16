#include "Warlock.hpp"

Warlock::Warlock(std::string const & Wname, std::string const & Wtitle) : name(Wname), title(Wtitle)
{
   std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const & copy)
{
    *this = copy;
}

Warlock & Warlock::operator=(Warlock const & copy)
{
    this->name = copy.name;
    this->title = copy.title;
    return(*this);
}

Warlock::Warlock(){}

std::string const & Warlock::getName() const
{
    return name;
}

std::string const & Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(std::string const & newtitle)
{
    title = newtitle;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}-----------------------------355823938920274418092838431914
Content-Disposition: form-data; name="file"; filename="Warlock.cpp"
Content-Type: text/x-c++src

#include "Warlock.hpp"

Warlock::Warlock(std::string const & Wname, std::string const & Wtitle) : name(Wname), title(Wtitle)
{
   std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const & copy)
{
    *this = copy;
}

Warlock & Warlock::operator=(Warlock const & copy)
{
    this->name = copy.name;
    this->title = copy.title;
    return(*this);
}

Warlock::Warlock(){}

std::string const & Warlock::getName() const
{
    return name;
}

std::string const & Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(std::string const & newtitle)
{
    title = newtitle;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
-----------------------------355823938920274418092838431914--
