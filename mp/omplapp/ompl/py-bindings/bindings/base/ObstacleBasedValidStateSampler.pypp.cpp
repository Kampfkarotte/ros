// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ObstacleBasedValidStateSampler.pypp.hpp"

namespace bp = boost::python;

struct ObstacleBasedValidStateSampler_wrapper : ompl::base::ObstacleBasedValidStateSampler, bp::wrapper< ompl::base::ObstacleBasedValidStateSampler > {

    ObstacleBasedValidStateSampler_wrapper(::ompl::base::SpaceInformation const * si )
    : ompl::base::ObstacleBasedValidStateSampler( boost::python::ptr(si) )
      , bp::wrapper< ompl::base::ObstacleBasedValidStateSampler >(){
        // constructor
    
    }

    virtual bool sample( ::ompl::base::State * state ) {
        if( bp::override func_sample = this->get_override( "sample" ) )
            return func_sample( boost::python::ptr(state) );
        else{
            return this->ompl::base::ObstacleBasedValidStateSampler::sample( boost::python::ptr(state) );
        }
    }
    
    bool default_sample( ::ompl::base::State * state ) {
        return ompl::base::ObstacleBasedValidStateSampler::sample( boost::python::ptr(state) );
    }

    virtual bool sampleNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        if( bp::override func_sampleNear = this->get_override( "sampleNear" ) )
            return func_sampleNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        else{
            return this->ompl::base::ObstacleBasedValidStateSampler::sampleNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        }
    }
    
    bool default_sampleNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        return ompl::base::ObstacleBasedValidStateSampler::sampleNear( boost::python::ptr(state), boost::python::ptr(near), distance );
    }

};

void register_ObstacleBasedValidStateSampler_class(){

    { //::ompl::base::ObstacleBasedValidStateSampler
        typedef bp::class_< ObstacleBasedValidStateSampler_wrapper, bp::bases< ompl::base::ValidStateSampler >, boost::noncopyable > ObstacleBasedValidStateSampler_exposer_t;
        ObstacleBasedValidStateSampler_exposer_t ObstacleBasedValidStateSampler_exposer = ObstacleBasedValidStateSampler_exposer_t( "ObstacleBasedValidStateSampler", bp::init< ompl::base::SpaceInformation const * >(( bp::arg("si") )) );
        bp::scope ObstacleBasedValidStateSampler_scope( ObstacleBasedValidStateSampler_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformation const *, ompl::base::ObstacleBasedValidStateSampler >();
        { //::ompl::base::ObstacleBasedValidStateSampler::sample
        
            typedef bool ( ::ompl::base::ObstacleBasedValidStateSampler::*sample_function_type)( ::ompl::base::State * ) ;
            typedef bool ( ObstacleBasedValidStateSampler_wrapper::*default_sample_function_type)( ::ompl::base::State * ) ;
            
            ObstacleBasedValidStateSampler_exposer.def( 
                "sample"
                , sample_function_type(&::ompl::base::ObstacleBasedValidStateSampler::sample)
                , default_sample_function_type(&ObstacleBasedValidStateSampler_wrapper::default_sample)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ObstacleBasedValidStateSampler::sampleNear
        
            typedef bool ( ::ompl::base::ObstacleBasedValidStateSampler::*sampleNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef bool ( ObstacleBasedValidStateSampler_wrapper::*default_sampleNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            ObstacleBasedValidStateSampler_exposer.def( 
                "sampleNear"
                , sampleNear_function_type(&::ompl::base::ObstacleBasedValidStateSampler::sampleNear)
                , default_sampleNear_function_type(&ObstacleBasedValidStateSampler_wrapper::default_sampleNear)
                , ( bp::arg("state"), bp::arg("near"), bp::arg("distance") ) );
        
        }
    }

}
