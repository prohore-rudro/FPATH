/* Main Header */

#ifndef MAIN_H
#define MAIN_H

/*  Dependenet HEADERS*/
/*  IO */
#include <iostream>

/*  STL */
#include <array>
#include <vector>
#include <map>
#include <string>

/*  GLOBAL NAMESPACE FOR ENTIRE PROJECT */
namespace book{
    /* CONSTANT declarations*/    
    const uint8_t AVAIL_ERR = 2; // number of defined errors

    /* Type Declarations */
    using name_t = std::string; // name of any kind
    using file_t = std::string  // name of file

    using serial_t = int32_t;   // number id for strings
    using error_t = int32_t;    // error code
    using cnt_t = int32_t;      // counting number

    using error_list_t = std::array<name_t,AVAIL_ERR>; // list of defined errorss

    /* Error Codes */
    error_list_t error_list;
    
    error_list[0] = "Execution Succesful";
    error_list[1] = "Execution Failed";

    /* CLASS Declarations */
    /* Main class */
    class Dbase;    // main class
    class Book;     // class to store books
    class Directory; // directories are treated as tags
}

#endif // MAIN_H