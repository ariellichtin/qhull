/****************************************************************************
**
** Copyright (C) 2008-2010 C.B. Barber. All rights reserved.
** $Id: //main/2011/qhull/src/libqhullcpp/QhullQh.h#2 $$Change: 1341 $
** $DateTime: 2011/03/07 21:13:54 $$Author: bbarber $
**
****************************************************************************/

#ifndef QHULLQH_H
#define QHULLQH_H

extern "C" {
    #include "libqhull/qhull_a.h"
};

#include <string>
#include <vector>

namespace orgQhull {

#//defined here
    //! QhullQh -- Qhull's global data structure, qhT, as a C++ class
    //! See UsingLibQhull.h for C++/C interface to qhT
    class QhullQh;

class QhullQh : public qhT {

#//Constants
    // Set ignored.  PointSet needs explicit dimension
    // Facet from vertices or ridges.vertices.count
    // Ridge from vertices.count
    // Vertex stored in vertexT?  1->16?
    // QhullPoint needs explicit dimension

#//members (empty) -- POD type equivalent to qhT.  No data or virtual members

public:
#//constructor, assignment, destructor, invariant
    QhullQh();
    ~QhullQh();

private:
    //!disable copy constructor and assignment
                        QhullQh(const QhullQh &);
    QhullQh            &operator=(const QhullQh &);

};//class QhullQh

}//namespace orgQhull

#endif // QHULLQH_H
