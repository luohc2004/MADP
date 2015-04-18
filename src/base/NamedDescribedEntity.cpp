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

#include "NamedDescribedEntity.h"
#include <sstream>

using namespace std;

NamedDescribedEntity::NamedDescribedEntity(const string &name,
                                           const string &description) :
    _m_name(name),
    _m_description(description)
{
}

string NamedDescribedEntity::SoftPrint() const 
{ 
    stringstream ss;
    ss << "name:" << this->GetName() 
       << " - descr." << this->GetDescription(); 
    return(ss.str());
}

string NamedDescribedEntity::SoftPrintBrief() const
{
    return(GetName());
}
