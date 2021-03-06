// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "bindings/base.h"
#include "_shared_ptr_less__ompl_scope_base_scope_StateSpace__greater___value_traits.pypp.hpp"
#include "vectorStateSpacePtr.pypp.hpp"

namespace bp = boost::python;

void register_vectorStateSpacePtr_class(){

    { //::std::vector< boost::shared_ptr<ompl::base::StateSpace> >
        typedef bp::class_< std::vector< boost::shared_ptr<ompl::base::StateSpace> > > vectorStateSpacePtr_exposer_t;
        vectorStateSpacePtr_exposer_t vectorStateSpacePtr_exposer = vectorStateSpacePtr_exposer_t( "vectorStateSpacePtr" );
        bp::scope vectorStateSpacePtr_scope( vectorStateSpacePtr_exposer );
        vectorStateSpacePtr_exposer.def( bp::indexing::vector_suite< std::vector< boost::shared_ptr<ompl::base::StateSpace> > >() );
    }

}
