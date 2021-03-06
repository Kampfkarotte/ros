// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "SimpleSetup.pypp.hpp"

namespace bp = boost::python;

struct ControlSimpleSetup_wrapper : ompl::control::SimpleSetup, bp::wrapper< ompl::control::SimpleSetup > {

    ControlSimpleSetup_wrapper(ompl::control::SimpleSetup const & arg )
    : ompl::control::SimpleSetup( arg )
      , bp::wrapper< ompl::control::SimpleSetup >(){
        // copy constructor
        
    }

    ControlSimpleSetup_wrapper(::ompl::control::SpaceInformationPtr const & si )
    : ompl::control::SimpleSetup( si )
      , bp::wrapper< ompl::control::SimpleSetup >(){
        // constructor
    
    }

    ControlSimpleSetup_wrapper(::ompl::control::ControlSpacePtr const & space )
    : ompl::control::SimpleSetup( space )
      , bp::wrapper< ompl::control::SimpleSetup >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::control::SimpleSetup::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::control::SimpleSetup::clear( );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::control::SimpleSetup::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::control::SimpleSetup::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( double time=1.0e+0 ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( time );
        else{
            return this->ompl::control::SimpleSetup::solve( time );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( double time=1.0e+0 ) {
        return ompl::control::SimpleSetup::solve( time );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::control::SimpleSetup::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::control::SimpleSetup::solve( boost::ref(ptc) );
    }

};

std::string __str__(::ompl::control::SimpleSetup* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_SimpleSetup_class(){

    { //::ompl::control::SimpleSetup
        typedef bp::class_< ControlSimpleSetup_wrapper > SimpleSetup_exposer_t;
        SimpleSetup_exposer_t SimpleSetup_exposer = SimpleSetup_exposer_t( "SimpleSetup", bp::init< ompl::control::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope SimpleSetup_scope( SimpleSetup_exposer );
        bp::implicitly_convertible< ompl::control::SpaceInformationPtr const &, ompl::control::SimpleSetup >();
        SimpleSetup_exposer.def( bp::init< ompl::control::ControlSpacePtr const & >(( bp::arg("space") )) );
        bp::implicitly_convertible< ompl::control::ControlSpacePtr const &, ompl::control::SimpleSetup >();
        { //::ompl::control::SimpleSetup::addStartState
        
            typedef void ( ::ompl::control::SimpleSetup::*addStartState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            SimpleSetup_exposer.def( 
                "addStartState"
                , addStartState_function_type( &::ompl::control::SimpleSetup::addStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::control::SimpleSetup::clear
        
            typedef void ( ::ompl::control::SimpleSetup::*clear_function_type)(  ) ;
            typedef void ( ControlSimpleSetup_wrapper::*default_clear_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::control::SimpleSetup::clear)
                , default_clear_function_type(&ControlSimpleSetup_wrapper::default_clear) );
        
        }
        { //::ompl::control::SimpleSetup::clearStartStates
        
            typedef void ( ::ompl::control::SimpleSetup::*clearStartStates_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "clearStartStates"
                , clearStartStates_function_type( &::ompl::control::SimpleSetup::clearStartStates ) );
        
        }
        { //::ompl::control::SimpleSetup::getControlSpace
        
            typedef ::ompl::control::ControlSpacePtr const & ( ::ompl::control::SimpleSetup::*getControlSpace_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getControlSpace"
                , getControlSpace_function_type( &::ompl::control::SimpleSetup::getControlSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getGoal
        
            typedef ::ompl::base::GoalPtr const & ( ::ompl::control::SimpleSetup::*getGoal_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getGoal"
                , getGoal_function_type( &::ompl::control::SimpleSetup::getGoal )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getLastPlanComputationTime
        
            typedef double ( ::ompl::control::SimpleSetup::*getLastPlanComputationTime_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getLastPlanComputationTime"
                , getLastPlanComputationTime_function_type( &::ompl::control::SimpleSetup::getLastPlanComputationTime ) );
        
        }
        { //::ompl::control::SimpleSetup::getLastPlannerStatus
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::control::SimpleSetup::*getLastPlannerStatus_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getLastPlannerStatus"
                , getLastPlannerStatus_function_type( &::ompl::control::SimpleSetup::getLastPlannerStatus ) );
        
        }
        { //::ompl::control::SimpleSetup::getPlanner
        
            typedef ::ompl::base::PlannerPtr const & ( ::ompl::control::SimpleSetup::*getPlanner_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getPlanner"
                , getPlanner_function_type( &::ompl::control::SimpleSetup::getPlanner )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getPlannerData
        
            typedef void ( ::ompl::control::SimpleSetup::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            SimpleSetup_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type( &::ompl::control::SimpleSetup::getPlannerData )
                , ( bp::arg("pd") ) );
        
        }
        { //::ompl::control::SimpleSetup::getProblemDefinition
        
            typedef ::ompl::base::ProblemDefinitionPtr const & ( ::ompl::control::SimpleSetup::*getProblemDefinition_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getProblemDefinition"
                , getProblemDefinition_function_type( &::ompl::control::SimpleSetup::getProblemDefinition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getSolutionPath
        
            typedef ::ompl::control::PathControl & ( ::ompl::control::SimpleSetup::*getSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getSolutionPath"
                , getSolutionPath_function_type( &::ompl::control::SimpleSetup::getSolutionPath )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::control::SimpleSetup::getSpaceInformation
        
            typedef ::ompl::control::SpaceInformationPtr const & ( ::ompl::control::SimpleSetup::*getSpaceInformation_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getSpaceInformation"
                , getSpaceInformation_function_type( &::ompl::control::SimpleSetup::getSpaceInformation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getStatePropagator
        
            typedef ::ompl::control::StatePropagatorPtr const & ( ::ompl::control::SimpleSetup::*getStatePropagator_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getStatePropagator"
                , getStatePropagator_function_type( &::ompl::control::SimpleSetup::getStatePropagator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getStateSpace
        
            typedef ::ompl::base::StateSpacePtr const & ( ::ompl::control::SimpleSetup::*getStateSpace_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getStateSpace"
                , getStateSpace_function_type( &::ompl::control::SimpleSetup::getStateSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::getStateValidityChecker
        
            typedef ::ompl::base::StateValidityCheckerPtr const & ( ::ompl::control::SimpleSetup::*getStateValidityChecker_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getStateValidityChecker"
                , getStateValidityChecker_function_type( &::ompl::control::SimpleSetup::getStateValidityChecker )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::haveExactSolutionPath
        
            typedef bool ( ::ompl::control::SimpleSetup::*haveExactSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "haveExactSolutionPath"
                , haveExactSolutionPath_function_type( &::ompl::control::SimpleSetup::haveExactSolutionPath ) );
        
        }
        { //::ompl::control::SimpleSetup::haveSolutionPath
        
            typedef bool ( ::ompl::control::SimpleSetup::*haveSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "haveSolutionPath"
                , haveSolutionPath_function_type( &::ompl::control::SimpleSetup::haveSolutionPath ) );
        
        }
        { //::ompl::control::SimpleSetup::params
        
            typedef ::ompl::base::ParamSet & ( ::ompl::control::SimpleSetup::*params_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "params"
                , params_function_type( &::ompl::control::SimpleSetup::params )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::control::SimpleSetup::params
        
            typedef ::ompl::base::ParamSet const & ( ::ompl::control::SimpleSetup::*params_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "params"
                , params_function_type( &::ompl::control::SimpleSetup::params )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::SimpleSetup::setGoal
        
            typedef void ( ::ompl::control::SimpleSetup::*setGoal_function_type)( ::ompl::base::GoalPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setGoal"
                , setGoal_function_type( &::ompl::control::SimpleSetup::setGoal )
                , ( bp::arg("goal") ) );
        
        }
        { //::ompl::control::SimpleSetup::setGoalState
        
            typedef void ( ::ompl::control::SimpleSetup::*setGoalState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            SimpleSetup_exposer.def( 
                "setGoalState"
                , setGoalState_function_type( &::ompl::control::SimpleSetup::setGoalState )
                , ( bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::control::SimpleSetup::setOptimizationObjective
        
            typedef void ( ::ompl::control::SimpleSetup::*setOptimizationObjective_function_type)( ::ompl::base::OptimizationObjectivePtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setOptimizationObjective"
                , setOptimizationObjective_function_type( &::ompl::control::SimpleSetup::setOptimizationObjective )
                , ( bp::arg("optimizationObjective") ) );
        
        }
        { //::ompl::control::SimpleSetup::setPlanner
        
            typedef void ( ::ompl::control::SimpleSetup::*setPlanner_function_type)( ::ompl::base::PlannerPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setPlanner"
                , setPlanner_function_type( &::ompl::control::SimpleSetup::setPlanner )
                , ( bp::arg("planner") ) );
        
        }
        { //::ompl::control::SimpleSetup::setStartAndGoalStates
        
            typedef void ( ::ompl::control::SimpleSetup::*setStartAndGoalStates_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            SimpleSetup_exposer.def( 
                "setStartAndGoalStates"
                , setStartAndGoalStates_function_type( &::ompl::control::SimpleSetup::setStartAndGoalStates )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::control::SimpleSetup::setStartState
        
            typedef void ( ::ompl::control::SimpleSetup::*setStartState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStartState"
                , setStartState_function_type( &::ompl::control::SimpleSetup::setStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::control::SimpleSetup::setStatePropagator
        
            typedef void ( ::ompl::control::SimpleSetup::*setStatePropagator_function_type)( ::ompl::control::StatePropagatorFn const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStatePropagator"
                , setStatePropagator_function_type( &::ompl::control::SimpleSetup::setStatePropagator )
                , ( bp::arg("sp") ) );
        
        }
        { //::ompl::control::SimpleSetup::setStatePropagator
        
            typedef void ( ::ompl::control::SimpleSetup::*setStatePropagator_function_type)( ::ompl::control::StatePropagatorPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStatePropagator"
                , setStatePropagator_function_type( &::ompl::control::SimpleSetup::setStatePropagator )
                , ( bp::arg("sp") ) );
        
        }
        { //::ompl::control::SimpleSetup::setStateValidityChecker
        
            typedef void ( ::ompl::control::SimpleSetup::*setStateValidityChecker_function_type)( ::ompl::base::StateValidityCheckerPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStateValidityChecker"
                , setStateValidityChecker_function_type( &::ompl::control::SimpleSetup::setStateValidityChecker )
                , ( bp::arg("svc") ) );
        
        }
        { //::ompl::control::SimpleSetup::setStateValidityChecker
        
            typedef void ( ::ompl::control::SimpleSetup::*setStateValidityChecker_function_type)( ::ompl::base::StateValidityCheckerFn const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStateValidityChecker"
                , setStateValidityChecker_function_type( &::ompl::control::SimpleSetup::setStateValidityChecker )
                , ( bp::arg("svc") ) );
        
        }
        { //::ompl::control::SimpleSetup::setup
        
            typedef void ( ::ompl::control::SimpleSetup::*setup_function_type)(  ) ;
            typedef void ( ControlSimpleSetup_wrapper::*default_setup_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::control::SimpleSetup::setup)
                , default_setup_function_type(&ControlSimpleSetup_wrapper::default_setup) );
        
        }
        { //::ompl::control::SimpleSetup::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::control::SimpleSetup::*solve_function_type)( double ) ;
            typedef ::ompl::base::PlannerStatus ( ControlSimpleSetup_wrapper::*default_solve_function_type)( double ) ;
            
            SimpleSetup_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::control::SimpleSetup::solve)
                , default_solve_function_type(&ControlSimpleSetup_wrapper::default_solve)
                , ( bp::arg("time")=1.0e+0 ) );
        
        }
        { //::ompl::control::SimpleSetup::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::control::SimpleSetup::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( ControlSimpleSetup_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            SimpleSetup_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::control::SimpleSetup::solve)
                , default_solve_function_type(&ControlSimpleSetup_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        SimpleSetup_exposer.def("__str__", &__str__);
        SimpleSetup_exposer.def("setPlannerAllocator", &ompl::control::SimpleSetup::setPlannerAllocator);
        SimpleSetup_exposer.def("getPlannerAllocator", &ompl::control::SimpleSetup::getPlannerAllocator, bp::return_value_policy< bp::copy_const_reference >());
    }

}
