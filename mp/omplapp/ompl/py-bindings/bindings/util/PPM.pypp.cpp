// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/util.h"
#include "PPM.pypp.hpp"

namespace bp = boost::python;

void register_PPM_class(){

    { //::ompl::PPM
        typedef bp::class_< ompl::PPM > PPM_exposer_t;
        PPM_exposer_t PPM_exposer = PPM_exposer_t( "PPM", bp::init< >() );
        bp::scope PPM_scope( PPM_exposer );
        { //::ompl::PPM::Color
            typedef bp::class_< ompl::PPM::Color > Color_exposer_t;
            Color_exposer_t Color_exposer = Color_exposer_t( "Color" );
            bp::scope Color_scope( Color_exposer );
            Color_exposer.def( bp::self == bp::self );
            Color_exposer.def_readwrite( "blue", &ompl::PPM::Color::blue );
            Color_exposer.def_readwrite( "green", &ompl::PPM::Color::green );
            Color_exposer.def_readwrite( "red", &ompl::PPM::Color::red );
        }
        { //::ompl::PPM::getHeight
        
            typedef unsigned int ( ::ompl::PPM::*getHeight_function_type)(  ) const;
            
            PPM_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::ompl::PPM::getHeight ) );
        
        }
        { //::ompl::PPM::getPixel
        
            typedef ::ompl::PPM::Color const & ( ::ompl::PPM::*getPixel_function_type)( int const,int const ) const;
            
            PPM_exposer.def( 
                "getPixel"
                , getPixel_function_type( &::ompl::PPM::getPixel )
                , ( bp::arg("row"), bp::arg("col") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::PPM::getPixel
        
            typedef ::ompl::PPM::Color & ( ::ompl::PPM::*getPixel_function_type)( int const,int const ) ;
            
            PPM_exposer.def( 
                "getPixel"
                , getPixel_function_type( &::ompl::PPM::getPixel )
                , ( bp::arg("row"), bp::arg("col") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::PPM::getPixels
        
            typedef ::std::vector< ompl::PPM::Color > const & ( ::ompl::PPM::*getPixels_function_type)(  ) const;
            
            PPM_exposer.def( 
                "getPixels"
                , getPixels_function_type( &::ompl::PPM::getPixels )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::PPM::getPixels
        
            typedef ::std::vector< ompl::PPM::Color > & ( ::ompl::PPM::*getPixels_function_type)(  ) ;
            
            PPM_exposer.def( 
                "getPixels"
                , getPixels_function_type( &::ompl::PPM::getPixels )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::PPM::getWidth
        
            typedef unsigned int ( ::ompl::PPM::*getWidth_function_type)(  ) const;
            
            PPM_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::ompl::PPM::getWidth ) );
        
        }
        { //::ompl::PPM::loadFile
        
            typedef void ( ::ompl::PPM::*loadFile_function_type)( char const * ) ;
            
            PPM_exposer.def( 
                "loadFile"
                , loadFile_function_type( &::ompl::PPM::loadFile )
                , ( bp::arg("filename") ) );
        
        }
        { //::ompl::PPM::saveFile
        
            typedef void ( ::ompl::PPM::*saveFile_function_type)( char const * ) ;
            
            PPM_exposer.def( 
                "saveFile"
                , saveFile_function_type( &::ompl::PPM::saveFile )
                , ( bp::arg("filename") ) );
        
        }
        { //::ompl::PPM::setHeight
        
            typedef void ( ::ompl::PPM::*setHeight_function_type)( unsigned int ) ;
            
            PPM_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::ompl::PPM::setHeight )
                , ( bp::arg("height") ) );
        
        }
        { //::ompl::PPM::setWidth
        
            typedef void ( ::ompl::PPM::*setWidth_function_type)( unsigned int ) ;
            
            PPM_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::ompl::PPM::setWidth )
                , ( bp::arg("width") ) );
        
        }
    }

}
