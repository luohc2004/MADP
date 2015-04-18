/* This file is part of the Multiagent Decision Process (MADP) Toolbox v0.3. 
 *
 * The majority of MADP is free software released under GNUP GPL v.3. However,
 * some of the included libraries are released under a different license. For 
 * more information, see the included COPYING file. For other information, 
 * please refer to the included README file.
 *
 * This file has been written and/or modified by the following people:
 *
 * Frans Oliehoek 
 * Matthijs Spaan 
 *
 * For contact information please see the included AUTHORS file.
 */

/* Only include this header file once. */
#ifndef _EPARSE_H_
#define _EPARSE_H_ 1

/* the include directives */
#include <iostream>
#include "Globals.h"
#include "E.h"

///EParse represents a parser exception.
class EParse : public E 
{
    private:    
    
    protected:
    
    public:
    // Constructor, destructor and copy assignment.    
    /// Constructor with a C-style string
    EParse(const char* arg):E(arg) {}
    /// Constructor with an STL string
    EParse(std::string arg):E(arg) {}
    /// Constructor with an STL stringstream
    EParse(const std::stringstream& arg) : E(arg) {}
};


#endif /* !_EPARSE_H_ */


// Local Variables: ***
// mode:c++ ***
// End: ***
