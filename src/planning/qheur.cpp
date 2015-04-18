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


using namespace std;

#include "qheur.h"
#include "E.h"

std::string qheur::SoftPrint(Qheur_t Qheur)
{
    switch(Qheur)
    {
    case(eQMDP):
        return("QMDP");
    case(eQPOMDP):
        return("QPOMDP");
    case(eQBG):
        return("QBG");
    case(eQMDPc):
        return("QMDPc");
    case(eQPOMDPav):
        return("QPOMDPav");
    case(eQBGav):
        return("QBGav");
    case eQHybrid:
        return("QHybrid");
    case eQPOMDPhybrid:
        return("QPOMDPhybrid");
    case eQBGhybrid:
        return("QBGhybrid");
    case eQBGTreeIncPrune:
        return("QBGTreeIncPrune");
    case eQBGTreeIncPruneBnB:
        return("QBGBnBIncPrune");
    case eQheurUndefined:
        return("INVALIDQHEUR");
    }

    throw(E("qheur::SoftPrint invalid type"));

    return("INVALIDQHEUR");
}


