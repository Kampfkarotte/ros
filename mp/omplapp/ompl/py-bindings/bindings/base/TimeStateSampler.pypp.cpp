// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "TimeStateSampler.pypp.hpp"

namespace bp = boost::python;

struct TimeStateSampler_wrapper : ompl::base::TimeStateSampler, bp::wrapper< ompl::base::TimeStateSampler > {

    TimeStateSampler_wrapper(::ompl::base::StateSpace const * space )
    : ompl::base::TimeStateSampler( boost::python::ptr(space) )
      , bp::wrapper< ompl::base::TimeStateSampler >(){
        // constructor
    
    }

    virtual void sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        if( bp::override func_sampleGaussian = this->get_override( "sampleGaussian" ) )
            func_sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        else{
            this->ompl::base::TimeStateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        }
    }
    
    void default_sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        ompl::base::TimeStateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
    }

    virtual void sampleUniform( ::ompl::base::State * state ) {
        if( bp::override func_sampleUniform = this->get_override( "sampleUniform" ) )
            func_sampleUniform( boost::python::ptr(state) );
        else{
            this->ompl::base::TimeStateSampler::sampleUniform( boost::python::ptr(state) );
        }
    }
    
    void default_sampleUniform( ::ompl::base::State * state ) {
        ompl::base::TimeStateSampler::sampleUniform( boost::python::ptr(state) );
    }

    virtual void sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        if( bp::override func_sampleUniformNear = this->get_override( "sampleUniformNear" ) )
            func_sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        else{
            this->ompl::base::TimeStateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        }
    }
    
    void default_sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        ompl::base::TimeStateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
    }

};

void register_TimeStateSampler_class(){

    { //::ompl::base::TimeStateSampler
        typedef bp::class_< TimeStateSampler_wrapper, bp::bases< ompl::base::StateSampler >, boost::noncopyable > TimeStateSampler_exposer_t;
        TimeStateSampler_exposer_t TimeStateSampler_exposer = TimeStateSampler_exposer_t( "TimeStateSampler", bp::init< ompl::base::StateSpace const * >(( bp::arg("space") )) );
        bp::scope TimeStateSampler_scope( TimeStateSampler_exposer );
        bp::implicitly_convertible< ompl::base::StateSpace const *, ompl::base::TimeStateSampler >();
        { //::ompl::base::TimeStateSampler::sampleGaussian
        
            typedef void ( ::ompl::base::TimeStateSampler::*sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( TimeStateSampler_wrapper::*default_sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            TimeStateSampler_exposer.def( 
                "sampleGaussian"
                , sampleGaussian_function_type(&::ompl::base::TimeStateSampler::sampleGaussian)
                , default_sampleGaussian_function_type(&TimeStateSampler_wrapper::default_sampleGaussian)
                , ( bp::arg("state"), bp::arg("mean"), bp::arg("stdDev") ) );
        
        }
        { //::ompl::base::TimeStateSampler::sampleUniform
        
            typedef void ( ::ompl::base::TimeStateSampler::*sampleUniform_function_type)( ::ompl::base::State * ) ;
            typedef void ( TimeStateSampler_wrapper::*default_sampleUniform_function_type)( ::ompl::base::State * ) ;
            
            TimeStateSampler_exposer.def( 
                "sampleUniform"
                , sampleUniform_function_type(&::ompl::base::TimeStateSampler::sampleUniform)
                , default_sampleUniform_function_type(&TimeStateSampler_wrapper::default_sampleUniform)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSampler::sampleUniformNear
        
            typedef void ( ::ompl::base::TimeStateSampler::*sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( TimeStateSampler_wrapper::*default_sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            TimeStateSampler_exposer.def( 
                "sampleUniformNear"
                , sampleUniformNear_function_type(&::ompl::base::TimeStateSampler::sampleUniformNear)
                , default_sampleUniformNear_function_type(&TimeStateSampler_wrapper::default_sampleUniformNear)
                , ( bp::arg("state"), bp::arg("near"), bp::arg("distance") ) );
        
        }
    }

}