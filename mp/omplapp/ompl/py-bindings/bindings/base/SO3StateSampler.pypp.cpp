// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "SO3StateSampler.pypp.hpp"

namespace bp = boost::python;

struct SO3StateSampler_wrapper : ompl::base::SO3StateSampler, bp::wrapper< ompl::base::SO3StateSampler > {

    SO3StateSampler_wrapper(::ompl::base::StateSpace const * space )
    : ompl::base::SO3StateSampler( boost::python::ptr(space) )
      , bp::wrapper< ompl::base::SO3StateSampler >(){
        // constructor
    
    }

    virtual void sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        if( bp::override func_sampleGaussian = this->get_override( "sampleGaussian" ) )
            func_sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        else{
            this->ompl::base::SO3StateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
        }
    }
    
    void default_sampleGaussian( ::ompl::base::State * state, ::ompl::base::State const * mean, double const stdDev ) {
        ompl::base::SO3StateSampler::sampleGaussian( boost::python::ptr(state), boost::python::ptr(mean), stdDev );
    }

    virtual void sampleUniform( ::ompl::base::State * state ) {
        if( bp::override func_sampleUniform = this->get_override( "sampleUniform" ) )
            func_sampleUniform( boost::python::ptr(state) );
        else{
            this->ompl::base::SO3StateSampler::sampleUniform( boost::python::ptr(state) );
        }
    }
    
    void default_sampleUniform( ::ompl::base::State * state ) {
        ompl::base::SO3StateSampler::sampleUniform( boost::python::ptr(state) );
    }

    virtual void sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        if( bp::override func_sampleUniformNear = this->get_override( "sampleUniformNear" ) )
            func_sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        else{
            this->ompl::base::SO3StateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
        }
    }
    
    void default_sampleUniformNear( ::ompl::base::State * state, ::ompl::base::State const * near, double const distance ) {
        ompl::base::SO3StateSampler::sampleUniformNear( boost::python::ptr(state), boost::python::ptr(near), distance );
    }

};

void register_SO3StateSampler_class(){

    { //::ompl::base::SO3StateSampler
        typedef bp::class_< SO3StateSampler_wrapper, bp::bases< ompl::base::StateSampler >, boost::noncopyable > SO3StateSampler_exposer_t;
        SO3StateSampler_exposer_t SO3StateSampler_exposer = SO3StateSampler_exposer_t( "SO3StateSampler", bp::init< ompl::base::StateSpace const * >(( bp::arg("space") )) );
        bp::scope SO3StateSampler_scope( SO3StateSampler_exposer );
        bp::implicitly_convertible< ompl::base::StateSpace const *, ompl::base::SO3StateSampler >();
        { //::ompl::base::SO3StateSampler::sampleGaussian
        
            typedef void ( ::ompl::base::SO3StateSampler::*sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( SO3StateSampler_wrapper::*default_sampleGaussian_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            SO3StateSampler_exposer.def( 
                "sampleGaussian"
                , sampleGaussian_function_type(&::ompl::base::SO3StateSampler::sampleGaussian)
                , default_sampleGaussian_function_type(&SO3StateSampler_wrapper::default_sampleGaussian)
                , ( bp::arg("state"), bp::arg("mean"), bp::arg("stdDev") ) );
        
        }
        { //::ompl::base::SO3StateSampler::sampleUniform
        
            typedef void ( ::ompl::base::SO3StateSampler::*sampleUniform_function_type)( ::ompl::base::State * ) ;
            typedef void ( SO3StateSampler_wrapper::*default_sampleUniform_function_type)( ::ompl::base::State * ) ;
            
            SO3StateSampler_exposer.def( 
                "sampleUniform"
                , sampleUniform_function_type(&::ompl::base::SO3StateSampler::sampleUniform)
                , default_sampleUniform_function_type(&SO3StateSampler_wrapper::default_sampleUniform)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::SO3StateSampler::sampleUniformNear
        
            typedef void ( ::ompl::base::SO3StateSampler::*sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            typedef void ( SO3StateSampler_wrapper::*default_sampleUniformNear_function_type)( ::ompl::base::State *,::ompl::base::State const *,double const ) ;
            
            SO3StateSampler_exposer.def( 
                "sampleUniformNear"
                , sampleUniformNear_function_type(&::ompl::base::SO3StateSampler::sampleUniformNear)
                , default_sampleUniformNear_function_type(&SO3StateSampler_wrapper::default_sampleUniformNear)
                , ( bp::arg("state"), bp::arg("near"), bp::arg("distance") ) );
        
        }
    }

}
