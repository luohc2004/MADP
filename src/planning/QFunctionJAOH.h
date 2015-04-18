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
#ifndef _QFUNCTIONJOINTHISTORY_H_
#define _QFUNCTIONJOINTHISTORY_H_ 1

/* the include directives */
#include <iostream>
#include "Globals.h"

#include "QFunctionJAOHInterface.h"
#include "QFunctionForDecPOMDP.h"
#include "QTable.h"

class JointActionObservationHistoryTree;

#define QFunctionJAOH_useIndices 1

/**\brief QFunctionJAOH represents a Q-function that operates on
 * joint action-observation histories. */
class QFunctionJAOH : 
    public QFunctionJAOHInterface //Interface
    , virtual public QFunctionForDecPOMDP //implementation
{
private:    
    
protected:

    ///  Table in which the Qvalues are stored.
    QTable _m_QValues;

    /// See ComputeWithCachedQValues(), this version accepts a filename.
    virtual void ComputeWithCachedQValues(const std::string &filenameCache,
                                          bool computeIfNotCached=true);

public:
    // Constructor, destructor and copy assignment.
    /// Default constructor, requires a planning unit.
    QFunctionJAOH(const PlanningUnitDecPOMDPDiscrete *pu);
    QFunctionJAOH(const boost::shared_ptr<const PlanningUnitDecPOMDPDiscrete> &pu);

    /// Destructor.
    virtual ~QFunctionJAOH(){};

    virtual void ComputeWithCachedQValues(bool computeIfNotCached=true)
        {
            ComputeWithCachedQValues(GetCacheFilename(),computeIfNotCached);
        }
};


#endif /* !_QFUNCTIONJOINTHISTORY_H_ */

// Local Variables: ***
// mode:c++ ***
// End: ***
