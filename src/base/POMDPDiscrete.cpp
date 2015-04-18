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

#include "POMDPDiscrete.h"

using namespace std;

//Default constructor
POMDPDiscrete::POMDPDiscrete(const std::string &name,
                             const std::string &descr,
                             const std::string &pf) :
    DecPOMDPDiscrete(name,descr,pf)
{
}
//Copy constructor.    
// POMDPDiscrete::POMDPDiscrete(const POMDPDiscrete& o) 
// {
// }
//Destructor
POMDPDiscrete::~POMDPDiscrete()
{
}
//Copy assignment operator
// POMDPDiscrete& POMDPDiscrete::operator= (const POMDPDiscrete& o)
// {
//     if (this == &o) return *this;   // Gracefully handle self assignment
//     // Put the normal assignment duties here...

//     return *this;
// }
