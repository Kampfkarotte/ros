// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "bindings/base.h"
#include "_shared_ptr_less__ompl_scope_base_scope_GenericParam__greater___value_traits.pypp.hpp"
#include "mapStringToGenericParam.pypp.hpp"

namespace bp = boost::python;

void register_mapStringToGenericParam_class(){

    { //::std::map< std::string, boost::shared_ptr<ompl::base::GenericParam> >
        typedef bp::class_< std::map< std::string, boost::shared_ptr<ompl::base::GenericParam> > > mapStringToGenericParam_exposer_t;
        mapStringToGenericParam_exposer_t mapStringToGenericParam_exposer = mapStringToGenericParam_exposer_t( "mapStringToGenericParam" );
        bp::scope mapStringToGenericParam_scope( mapStringToGenericParam_exposer );
        mapStringToGenericParam_exposer.def( bp::indexing::map_suite< std::map< std::string, boost::shared_ptr<ompl::base::GenericParam> > >() );
    }

}
