// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "bindings/base.h"
#include "vectorState.pypp.hpp"

namespace bp = boost::python;

void register_vectorState_class(){

    { //::std::vector< ompl::base::State* >
        typedef bp::class_< std::vector< ompl::base::State* > > vectorState_exposer_t;
        vectorState_exposer_t vectorState_exposer = vectorState_exposer_t( "vectorState" );
        bp::scope vectorState_scope( vectorState_exposer );
        vectorState_exposer.def( bp::indexing::vector_suite< std::vector< ompl::base::State* > >::with_policies(bp::return_internal_reference< >()) );
    }

}