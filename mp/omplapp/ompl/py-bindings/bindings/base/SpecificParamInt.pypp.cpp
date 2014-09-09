// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "SpecificParamInt.pypp.hpp"

namespace bp = boost::python;

struct SpecificParam_less__int__greater__wrapper : ompl::base::SpecificParam< int >, bp::wrapper< ompl::base::SpecificParam< int > > {

    SpecificParam_less__int__greater__wrapper(ompl::base::SpecificParam<int> const & arg )
    : ompl::base::SpecificParam<int>( arg )
      , bp::wrapper< ompl::base::SpecificParam< int > >(){
        // copy constructor
        
    }

    virtual ::std::string getValue(  ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            return this->ompl::base::SpecificParam< int >::getValue(  );
        }
    }
    
    ::std::string default_getValue(  ) const  {
        return ompl::base::SpecificParam< int >::getValue( );
    }

    virtual bool setValue( ::std::string const & value ) {
        if( bp::override func_setValue = this->get_override( "setValue" ) )
            return func_setValue( value );
        else{
            return this->ompl::base::SpecificParam< int >::setValue( value );
        }
    }
    
    bool default_setValue( ::std::string const & value ) {
        return ompl::base::SpecificParam< int >::setValue( value );
    }

};

void register_SpecificParamInt_class(){

    { //::ompl::base::SpecificParam< int >
        typedef bp::class_< SpecificParam_less__int__greater__wrapper, bp::bases< ompl::base::GenericParam > > SpecificParamInt_exposer_t;
        SpecificParamInt_exposer_t SpecificParamInt_exposer = SpecificParamInt_exposer_t( "SpecificParamInt", bp::no_init );
        bp::scope SpecificParamInt_scope( SpecificParamInt_exposer );
        { //::ompl::base::SpecificParam< int >::getValue
        
            typedef ompl::base::SpecificParam< int > exported_class_t;
            typedef ::std::string ( exported_class_t::*getValue_function_type)(  ) const;
            typedef ::std::string ( SpecificParam_less__int__greater__wrapper::*default_getValue_function_type)(  ) const;
            
            SpecificParamInt_exposer.def( 
                "getValue"
                , getValue_function_type(&::ompl::base::SpecificParam< int >::getValue)
                , default_getValue_function_type(&SpecificParam_less__int__greater__wrapper::default_getValue) );
        
        }
        { //::ompl::base::SpecificParam< int >::setValue
        
            typedef ompl::base::SpecificParam< int > exported_class_t;
            typedef bool ( exported_class_t::*setValue_function_type)( ::std::string const & ) ;
            typedef bool ( SpecificParam_less__int__greater__wrapper::*default_setValue_function_type)( ::std::string const & ) ;
            
            SpecificParamInt_exposer.def( 
                "setValue"
                , setValue_function_type(&::ompl::base::SpecificParam< int >::setValue)
                , default_setValue_function_type(&SpecificParam_less__int__greater__wrapper::default_setValue)
                , ( bp::arg("value") ) );
        
        }
    }

}