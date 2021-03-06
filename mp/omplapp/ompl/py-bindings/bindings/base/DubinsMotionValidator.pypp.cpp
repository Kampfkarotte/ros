// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "DubinsMotionValidator.pypp.hpp"

namespace bp = boost::python;

struct DubinsMotionValidator_wrapper : ompl::base::DubinsMotionValidator, bp::wrapper< ompl::base::DubinsMotionValidator > {

    DubinsMotionValidator_wrapper(ompl::base::DubinsMotionValidator const & arg )
    : ompl::base::DubinsMotionValidator( arg )
      , bp::wrapper< ompl::base::DubinsMotionValidator >(){
        // copy constructor
        
    }

    DubinsMotionValidator_wrapper(::ompl::base::SpaceInformation * si )
    : ompl::base::DubinsMotionValidator( boost::python::ptr(si) )
      , bp::wrapper< ompl::base::DubinsMotionValidator >(){
        // constructor
    
    }

    DubinsMotionValidator_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::base::DubinsMotionValidator( si )
      , bp::wrapper< ompl::base::DubinsMotionValidator >(){
        // constructor
    
    }

    virtual bool checkMotion( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        if( bp::override func_checkMotion = this->get_override( "checkMotion" ) )
            return func_checkMotion( boost::python::ptr(s1), boost::python::ptr(s2) );
        else{
            return this->ompl::base::DubinsMotionValidator::checkMotion( boost::python::ptr(s1), boost::python::ptr(s2) );
        }
    }
    
    bool default_checkMotion( ::ompl::base::State const * s1, ::ompl::base::State const * s2 ) const  {
        return ompl::base::DubinsMotionValidator::checkMotion( boost::python::ptr(s1), boost::python::ptr(s2) );
    }

    virtual bool checkMotion( ::ompl::base::State const * s1, ::ompl::base::State const * s2, ::std::pair< ompl::base::State*, double > & lastValid ) const  {
        if( bp::override func_checkMotion = this->get_override( "checkMotion" ) )
            return func_checkMotion( boost::python::ptr(s1), boost::python::ptr(s2), boost::ref(lastValid) );
        else{
            return this->ompl::base::DubinsMotionValidator::checkMotion( boost::python::ptr(s1), boost::python::ptr(s2), boost::ref(lastValid) );
        }
    }
    
    bool default_checkMotion( ::ompl::base::State const * s1, ::ompl::base::State const * s2, ::std::pair< ompl::base::State*, double > & lastValid ) const  {
        return ompl::base::DubinsMotionValidator::checkMotion( boost::python::ptr(s1), boost::python::ptr(s2), boost::ref(lastValid) );
    }

};

void register_DubinsMotionValidator_class(){

    { //::ompl::base::DubinsMotionValidator
        typedef bp::class_< DubinsMotionValidator_wrapper, bp::bases< ompl::base::MotionValidator > > DubinsMotionValidator_exposer_t;
        DubinsMotionValidator_exposer_t DubinsMotionValidator_exposer = DubinsMotionValidator_exposer_t( "DubinsMotionValidator", bp::init< ompl::base::SpaceInformation * >(( bp::arg("si") )) );
        bp::scope DubinsMotionValidator_scope( DubinsMotionValidator_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformation *, ompl::base::DubinsMotionValidator >();
        DubinsMotionValidator_exposer.def( bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::base::DubinsMotionValidator >();
        { //::ompl::base::DubinsMotionValidator::checkMotion
        
            typedef bool ( ::ompl::base::DubinsMotionValidator::*checkMotion_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef bool ( DubinsMotionValidator_wrapper::*default_checkMotion_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            DubinsMotionValidator_exposer.def( 
                "checkMotion"
                , checkMotion_function_type(&::ompl::base::DubinsMotionValidator::checkMotion)
                , default_checkMotion_function_type(&DubinsMotionValidator_wrapper::default_checkMotion)
                , ( bp::arg("s1"), bp::arg("s2") ) );
        
        }
        { //::ompl::base::DubinsMotionValidator::checkMotion
        
            typedef bool ( ::ompl::base::DubinsMotionValidator::*checkMotion_function_type)( ::ompl::base::State const *,::ompl::base::State const *,::std::pair< ompl::base::State*, double > & ) const;
            typedef bool ( DubinsMotionValidator_wrapper::*default_checkMotion_function_type)( ::ompl::base::State const *,::ompl::base::State const *,::std::pair< ompl::base::State*, double > & ) const;
            
            DubinsMotionValidator_exposer.def( 
                "checkMotion"
                , checkMotion_function_type(&::ompl::base::DubinsMotionValidator::checkMotion)
                , default_checkMotion_function_type(&DubinsMotionValidator_wrapper::default_checkMotion)
                , ( bp::arg("s1"), bp::arg("s2"), bp::arg("lastValid") ) );
        
        }
    }

}
