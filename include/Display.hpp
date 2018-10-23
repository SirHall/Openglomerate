#ifndef Display_hpp
#define Display_hpp


class Display {

public:
    static Display& getInstance();
    
    Display(Display const&) = delete;
    void operator=(Display const&) = delete;

private:
    Display();
};

#endif //Display.hpp