// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "GoalStates.pypp.hpp"

namespace bp = boost::python;

struct GoalStates_wrapper : ompl::base::GoalStates, bp::wrapper< ompl::base::GoalStates > {

    GoalStates_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::base::GoalStates( si )
      , bp::wrapper< ompl::base::GoalStates >(){
        // constructor
    
    }

    virtual void addState( ::ompl::base::State const * st ) {
        if( bp::override func_addState = this->get_override( "addState" ) )
            func_addState( boost::python::ptr(st) );
        else{
            this->ompl::base::GoalStates::addState( boost::python::ptr(st) );
        }
    }
    
    void default_addState( ::ompl::base::State const * st ) {
        ompl::base::GoalStates::addState( boost::python::ptr(st) );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::base::GoalStates::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::base::GoalStates::clear( );
    }

    virtual double distanceGoal( ::ompl::base::State const * st ) const  {
        if( bp::override func_distanceGoal = this->get_override( "distanceGoal" ) )
            return func_distanceGoal( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalStates::distanceGoal( boost::python::ptr(st) );
        }
    }
    
    double default_distanceGoal( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalStates::distanceGoal( boost::python::ptr(st) );
    }

    virtual ::ompl::base::State const * getState( unsigned int index ) const  {
        if( bp::override func_getState = this->get_override( "getState" ) )
            return func_getState( index );
        else{
            return this->ompl::base::GoalStates::getState( index );
        }
    }
    
    ::ompl::base::State const * default_getState( unsigned int index ) const  {
        return ompl::base::GoalStates::getState( index );
    }

    virtual ::std::size_t getStateCount(  ) const  {
        if( bp::override func_getStateCount = this->get_override( "getStateCount" ) )
            return func_getStateCount(  );
        else{
            return this->ompl::base::GoalStates::getStateCount(  );
        }
    }
    
    ::std::size_t default_getStateCount(  ) const  {
        return ompl::base::GoalStates::getStateCount( );
    }

    virtual bool hasStates(  ) const  {
        if( bp::override func_hasStates = this->get_override( "hasStates" ) )
            return func_hasStates(  );
        else{
            return this->ompl::base::GoalStates::hasStates(  );
        }
    }
    
    bool default_hasStates(  ) const  {
        return ompl::base::GoalStates::hasStates( );
    }

    virtual unsigned int maxSampleCount(  ) const  {
        if( bp::override func_maxSampleCount = this->get_override( "maxSampleCount" ) )
            return func_maxSampleCount(  );
        else{
            return this->ompl::base::GoalStates::maxSampleCount(  );
        }
    }
    
    unsigned int default_maxSampleCount(  ) const  {
        return ompl::base::GoalStates::maxSampleCount( );
    }

    virtual void sampleGoal( ::ompl::base::State * st ) const  {
        if( bp::override func_sampleGoal = this->get_override( "sampleGoal" ) )
            func_sampleGoal( boost::python::ptr(st) );
        else{
            this->ompl::base::GoalStates::sampleGoal( boost::python::ptr(st) );
        }
    }
    
    void default_sampleGoal( ::ompl::base::State * st ) const  {
        ompl::base::GoalStates::sampleGoal( boost::python::ptr(st) );
    }

    virtual bool couldSample(  ) const  {
        if( bp::override func_couldSample = this->get_override( "couldSample" ) )
            return func_couldSample(  );
        else{
            return this->ompl::base::GoalSampleableRegion::couldSample(  );
        }
    }
    
    bool default_couldSample(  ) const  {
        return ompl::base::GoalSampleableRegion::couldSample( );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st), distance );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
    }

    virtual bool isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        if( bp::override func_isStartGoalPairValid = this->get_override( "isStartGoalPairValid" ) )
            return func_isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        else{
            return this->ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    bool default_isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        return ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
    }

};

std::string __str__(::ompl::base::GoalStates* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_GoalStates_class(){

    { //::ompl::base::GoalStates
        typedef bp::class_< GoalStates_wrapper, bp::bases< ompl::base::GoalSampleableRegion >, boost::noncopyable > GoalStates_exposer_t;
        GoalStates_exposer_t GoalStates_exposer = GoalStates_exposer_t( "GoalStates", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope GoalStates_scope( GoalStates_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::base::GoalStates >();
        { //::ompl::base::GoalStates::addState
        
            typedef void ( ::ompl::base::GoalStates::*addState_function_type)( ::ompl::base::State const * ) ;
            typedef void ( GoalStates_wrapper::*default_addState_function_type)( ::ompl::base::State const * ) ;
            
            GoalStates_exposer.def( 
                "addState"
                , addState_function_type(&::ompl::base::GoalStates::addState)
                , default_addState_function_type(&GoalStates_wrapper::default_addState)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalStates::addState
        
            typedef void ( ::ompl::base::GoalStates::*addState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            GoalStates_exposer.def( 
                "addState"
                , addState_function_type( &::ompl::base::GoalStates::addState )
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalStates::clear
        
            typedef void ( ::ompl::base::GoalStates::*clear_function_type)(  ) ;
            typedef void ( GoalStates_wrapper::*default_clear_function_type)(  ) ;
            
            GoalStates_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::base::GoalStates::clear)
                , default_clear_function_type(&GoalStates_wrapper::default_clear) );
        
        }
        { //::ompl::base::GoalStates::distanceGoal
        
            typedef double ( ::ompl::base::GoalStates::*distanceGoal_function_type)( ::ompl::base::State const * ) const;
            typedef double ( GoalStates_wrapper::*default_distanceGoal_function_type)( ::ompl::base::State const * ) const;
            
            GoalStates_exposer.def( 
                "distanceGoal"
                , distanceGoal_function_type(&::ompl::base::GoalStates::distanceGoal)
                , default_distanceGoal_function_type(&GoalStates_wrapper::default_distanceGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalStates::getState
        
            typedef ::ompl::base::State const * ( ::ompl::base::GoalStates::*getState_function_type)( unsigned int ) const;
            typedef ::ompl::base::State const * ( GoalStates_wrapper::*default_getState_function_type)( unsigned int ) const;
            
            GoalStates_exposer.def( 
                "getState"
                , getState_function_type(&::ompl::base::GoalStates::getState)
                , default_getState_function_type(&GoalStates_wrapper::default_getState)
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::GoalStates::getStateCount
        
            typedef ::std::size_t ( ::ompl::base::GoalStates::*getStateCount_function_type)(  ) const;
            typedef ::std::size_t ( GoalStates_wrapper::*default_getStateCount_function_type)(  ) const;
            
            GoalStates_exposer.def( 
                "getStateCount"
                , getStateCount_function_type(&::ompl::base::GoalStates::getStateCount)
                , default_getStateCount_function_type(&GoalStates_wrapper::default_getStateCount) );
        
        }
        { //::ompl::base::GoalStates::hasStates
        
            typedef bool ( ::ompl::base::GoalStates::*hasStates_function_type)(  ) const;
            typedef bool ( GoalStates_wrapper::*default_hasStates_function_type)(  ) const;
            
            GoalStates_exposer.def( 
                "hasStates"
                , hasStates_function_type(&::ompl::base::GoalStates::hasStates)
                , default_hasStates_function_type(&GoalStates_wrapper::default_hasStates) );
        
        }
        { //::ompl::base::GoalStates::maxSampleCount
        
            typedef unsigned int ( ::ompl::base::GoalStates::*maxSampleCount_function_type)(  ) const;
            typedef unsigned int ( GoalStates_wrapper::*default_maxSampleCount_function_type)(  ) const;
            
            GoalStates_exposer.def( 
                "maxSampleCount"
                , maxSampleCount_function_type(&::ompl::base::GoalStates::maxSampleCount)
                , default_maxSampleCount_function_type(&GoalStates_wrapper::default_maxSampleCount) );
        
        }
        { //::ompl::base::GoalStates::sampleGoal
        
            typedef void ( ::ompl::base::GoalStates::*sampleGoal_function_type)( ::ompl::base::State * ) const;
            typedef void ( GoalStates_wrapper::*default_sampleGoal_function_type)( ::ompl::base::State * ) const;
            
            GoalStates_exposer.def( 
                "sampleGoal"
                , sampleGoal_function_type(&::ompl::base::GoalStates::sampleGoal)
                , default_sampleGoal_function_type(&GoalStates_wrapper::default_sampleGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalSampleableRegion::couldSample
        
            typedef bool ( ::ompl::base::GoalSampleableRegion::*couldSample_function_type)(  ) const;
            typedef bool ( GoalStates_wrapper::*default_couldSample_function_type)(  ) const;
            
            GoalStates_exposer.def( 
                "couldSample"
                , couldSample_function_type(&::ompl::base::GoalSampleableRegion::couldSample)
                , default_couldSample_function_type(&GoalStates_wrapper::default_couldSample) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const * ) const;
            typedef bool ( GoalStates_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const * ) const;
            
            GoalStates_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalStates_wrapper::default_isSatisfied)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            typedef bool ( GoalStates_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            
            GoalStates_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalStates_wrapper::default_isSatisfied)
                , ( bp::arg("st"), bp::arg("distance") ) );
        
        }
        { //::ompl::base::Goal::isStartGoalPairValid
        
            typedef bool ( ::ompl::base::Goal::*isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef bool ( GoalStates_wrapper::*default_isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            GoalStates_exposer.def( 
                "isStartGoalPairValid"
                , isStartGoalPairValid_function_type(&::ompl::base::Goal::isStartGoalPairValid)
                , default_isStartGoalPairValid_function_type(&GoalStates_wrapper::default_isStartGoalPairValid)
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        GoalStates_exposer.def("__str__", &__str__);
    }

}
