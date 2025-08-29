#include <string>
#include "constants.h"

class color_code{
    public:
        void set_first_color(STRING incoming_first_color){this->first_color = incoming_first_color;}
        void set_breaker_type(STRING incoming_breaker_type){this->breaker_type = incoming_breaker_type;}
        void set_second_color(STRING incoming_second_color){this->second_color = incoming_second_color;}
        STRING get_first_color(){return this->first_color;}
        STRING get_breaker_type(){return this->breaker_type;}
        STRING get_second_color(){return this->second_color;}
        color_code(){
            set_first_color("n/a");
            set_breaker_type("n/a");
            set_second_color("n/a");
        }
        color_code(STRING incoming_first_color, STRING incoming_breaker_type, STRING incoming_second_color){
            set_first_color(incoming_first_color);
            set_breaker_type(incoming_breaker_type);
            set_second_color(incoming_second_color);
        }
    private:
        STRING first_color;
        STRING breaker_type;
        STRING second_color;
};