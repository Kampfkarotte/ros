// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "RRT.pypp.hpp"

namespace bp = boost::python;

struct ControlRRT_wrapper : ompl::control::RRT, bp::wrapper< ompl::control::RRT > {

    ControlRRT_wrapper(::ompl::control::SpaceInformationPtr const & si )
    : ompl::control::RRT( si )
      , bp::wrapper< ompl::control::RRT >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::control::RRT::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::control::RRT::clear( );
    }

    void freeMemory(  ){
        ompl::control::RRT::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::control::RRT::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::control::RRT::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::control::RRT::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::control::RRT::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::control::RRT::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::control::RRT::solve( boost::ref(ptc) );
    }

    virtual void checkValidity(  ) {
        if( bp::override func_checkValidity = this->get_override( "checkValidity" ) )
            func_checkValidity(  );
        else{
            this->ompl::base::Planner::checkValidity(  );
        }
    }
    
    void default_checkValidity(  ) {
        ompl::base::Planner::checkValidity( );
    }

    virtual void setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        if( bp::override func_setProblemDefinition = this->get_override( "setProblemDefinition" ) )
            func_setProblemDefinition( pdef );
        else{
            this->ompl::base::Planner::setProblemDefinition( pdef );
        }
    }
    
    void default_setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        ompl::base::Planner::setProblemDefinition( pdef );
    }

};

void register_RRT_class(){

    { //::ompl::control::RRT
        typedef bp::class_< ControlRRT_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > RRT_exposer_t;
        RRT_exposer_t RRT_exposer = RRT_exposer_t( "RRT", bp::init< ompl::control::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope RRT_scope( RRT_exposer );
        bp::implicitly_convertible< ompl::control::SpaceInformationPtr const &, ompl::control::RRT >();
        { //::ompl::control::RRT::clear
        
            typedef void ( ::ompl::control::RRT::*clear_function_type)(  ) ;
            typedef void ( ControlRRT_wrapper::*default_clear_function_type)(  ) ;
            
            RRT_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::control::RRT::clear)
                , default_clear_function_type(&ControlRRT_wrapper::default_clear) );
        
        }
        { //::ompl::control::RRT::freeMemory
        
            typedef void ( ControlRRT_wrapper::*freeMemory_function_type)(  ) ;
            
            RRT_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &ControlRRT_wrapper::freeMemory ) );
        
        }
        { //::ompl::control::RRT::getGoalBias
        
            typedef double ( ::ompl::control::RRT::*getGoalBias_function_type)(  ) const;
            
            RRT_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::control::RRT::getGoalBias ) );
        
        }
        { //::ompl::control::RRT::getIntermediateStates
        
            typedef bool ( ::ompl::control::RRT::*getIntermediateStates_function_type)(  ) const;
            
            RRT_exposer.def( 
                "getIntermediateStates"
                , getIntermediateStates_function_type( &::ompl::control::RRT::getIntermediateStates ) );
        
        }
        { //::ompl::control::RRT::getPlannerData
        
            typedef void ( ::ompl::control::RRT::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( ControlRRT_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            RRT_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::control::RRT::getPlannerData)
                , default_getPlannerData_function_type(&ControlRRT_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::control::RRT::setGoalBias
        
            typedef void ( ::ompl::control::RRT::*setGoalBias_function_type)( double ) ;
            
            RRT_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::control::RRT::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::control::RRT::setIntermediateStates
        
            typedef void ( ::ompl::control::RRT::*setIntermediateStates_function_type)( bool ) ;
            
            RRT_exposer.def( 
                "setIntermediateStates"
                , setIntermediateStates_function_type( &::ompl::control::RRT::setIntermediateStates )
                , ( bp::arg("addIntermediateStates") ) );
        
        }
        { //::ompl::control::RRT::setup
        
            typedef void ( ::ompl::control::RRT::*setup_function_type)(  ) ;
            typedef void ( ControlRRT_wrapper::*default_setup_function_type)(  ) ;
            
            RRT_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::control::RRT::setup)
                , default_setup_function_type(&ControlRRT_wrapper::default_setup) );
        
        }
        { //::ompl::control::RRT::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::control::RRT::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( ControlRRT_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            RRT_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::control::RRT::solve)
                , default_solve_function_type(&ControlRRT_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        RRT_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        RRT_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &ControlRRT_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        RRT_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                            &ControlRRT_wrapper::default_checkValidity );
    }

}
