#pragma once

#include <iostream>

class Warlock 
{
    private: 
        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
        std::string name;
        std::string title;

    public: 
        Warlock(std::string const  &name, std::string const &title);
        ~Warlock();
        void introduce() const;
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
};
