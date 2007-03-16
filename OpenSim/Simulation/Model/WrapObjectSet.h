#ifndef __WrapObjectSet_h__
#define __WrapObjectSet_h__

// WrapObjectSet.h
// Author: Peter Loan
/*
 * Copyright (c) 2006, Stanford University. All rights reserved. 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included 
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <OpenSim/Simulation/rdSimulationDLL.h>
#include <OpenSim/Tools/Set.h>
#include "AbstractWrapObject.h"

#ifdef SWIG
	#ifdef RDSIMULATION_API
		#undef RDSIMULATION_API
		#define RDSIMULATION_API
	#endif
#endif

namespace OpenSim {

//=============================================================================
//=============================================================================
/**
 * A class for holding a set of wrap objects.
 *
 * @authors Peter Loan
 * @version 1.0
 */

class RDSIMULATION_API WrapObjectSet :	public Set<AbstractWrapObject>
{
private:
	void setNull();
public:
	WrapObjectSet();
	WrapObjectSet(const WrapObjectSet& aWrapObjectSet);
	~WrapObjectSet(void);
	//--------------------------------------------------------------------------
	// OPERATORS
	//--------------------------------------------------------------------------
#ifndef SWIG
	WrapObjectSet& operator=(const WrapObjectSet &aWrapObjectSet);
#endif
//=============================================================================
};	// END of class WrapObjectSet
//=============================================================================
//=============================================================================

} // end of namespace OpenSim

#endif // __WrapObjectSet_h__
