#include <iostream>
#include <string>

//Unit Conversion
int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "miles";
        length_out = length_in / mile_to_km;

    }
    else if( (unit_in == "mile") || (unit_in == "miles") ){ // the || means "or"
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }


    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}

// temperature conversion
int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    std:: cin >> temp_in >> unit_in;
    const double C_to_F = 1.8;
    bool valid_unit = true;

    if(unit_in == "C"||| unit_in =="c"){
        unit_out = "F";
        temp_out = temp_in * C_to_F + 32;
    }
    else if (unit_in == "F" || unit_in == "f"){
        unit_out = "C";
        temp_out = (temp_in - 32) / C_to_F;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}