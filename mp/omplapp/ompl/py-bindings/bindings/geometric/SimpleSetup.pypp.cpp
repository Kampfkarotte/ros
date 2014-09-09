// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "SimpleSetup.pypp.hpp"

namespace bp = boost::python;

struct SimpleSetup_wrapper : ompl::geometric::SimpleSetup, bp::wrapper< ompl::geometric::SimpleSetup > {

    SimpleSetup_wrapper(ompl::geometric::SimpleSetup const & arg )
    : ompl::geometric::SimpleSetup( arg )
      , bp::wrapper< ompl::geometric::SimpleSetup >(){
        // copy constructor
        
    }

    SimpleSetup_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::SimpleSetup( si )
      , bp::wrapper< ompl::geometric::SimpleSetup >(){
        // constructor
    
    }

    SimpleSetup_wrapper(::ompl::base::StateSpacePtr const & space )
    : ompl::geometric::SimpleSetup( space )
      , bp::wrapper< ompl::geometric::SimpleSetup >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::SimpleSetup::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::SimpleSetup::clear( );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::SimpleSetup::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::SimpleSetup::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( double time=1.0e+0 ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( time );
        else{
            return this->ompl::geometric::SimpleSetup::solve( time );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( double time=1.0e+0 ) {
        return ompl::geometric::SimpleSetup::solve( time );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::SimpleSetup::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::SimpleSetup::solve( boost::ref(ptc) );
    }

};

std::string __str__(::ompl::geometric::SimpleSetup* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_SimpleSetup_class(){

    { //::ompl::geometric::SimpleSetup
        typedef bp::class_< SimpleSetup_wrapper > SimpleSetup_exposer_t;
        SimpleSetup_exposer_t SimpleSetup_exposer = SimpleSetup_exposer_t( "SimpleSetup", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope SimpleSetup_scope( SimpleSetup_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::SimpleSetup >();
        SimpleSetup_exposer.def( bp::init< ompl::base::StateSpacePtr const & >(( bp::arg("space") )) );
        bp::implicitly_convertible< ompl::base::StateSpacePtr const &, ompl::geometric::SimpleSetup >();
        { //::ompl::geometric::SimpleSetup::addStartState
        
            typedef void ( ::ompl::geometric::SimpleSetup::*addStartState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            SimpleSetup_exposer.def( 
                "addStartState"
                , addStartState_function_type( &::ompl::geometric::SimpleSetup::addStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::clear
        
            typedef void ( ::ompl::geometric::SimpleSetup::*clear_function_type)(  ) ;
            typedef void ( SimpleSetup_wrapper::*default_clear_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::SimpleSetup::clear)
                , default_clear_function_type(&SimpleSetup_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::SimpleSetup::clearStartStates
        
            typedef void ( ::ompl::geometric::SimpleSetup::*clearStartStates_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "clearStartStates"
                , clearStartStates_function_type( &::ompl::geometric::SimpleSetup::clearStartStates ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getGoal
        
            typedef ::ompl::base::GoalPtr const & ( ::ompl::geometric::SimpleSetup::*getGoal_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getGoal"
                , getGoal_function_type( &::ompl::geometric::SimpleSetup::getGoal )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getLastPlanComputationTime
        
            typedef double ( ::ompl::geometric::SimpleSetup::*getLastPlanComputationTime_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getLastPlanComputationTime"
                , getLastPlanComputationTime_function_type( &::ompl::geometric::SimpleSetup::getLastPlanComputationTime ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getLastPlannerStatus
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::SimpleSetup::*getLastPlannerStatus_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getLastPlannerStatus"
                , getLastPlannerStatus_function_type( &::ompl::geometric::SimpleSetup::getLastPlannerStatus ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getLastSimplificationTime
        
            typedef double ( ::ompl::geometric::SimpleSetup::*getLastSimplificationTime_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getLastSimplificationTime"
                , getLastSimplificationTime_function_type( &::ompl::geometric::SimpleSetup::getLastSimplificationTime ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getOptimizationObjective
        
            typedef ::ompl::base::OptimizationObjectivePtr const & ( ::ompl::geometric::SimpleSetup::*getOptimizationObjective_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "getOptimizationObjective"
                , getOptimizationObjective_function_type( &::ompl::geometric::SimpleSetup::getOptimizationObjective )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getPathSimplifier
        
            typedef ::ompl::geometric::PathSimplifierPtr const & ( ::ompl::geometric::SimpleSetup::*getPathSimplifier_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getPathSimplifier"
                , getPathSimplifier_function_type( &::ompl::geometric::SimpleSetup::getPathSimplifier )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getPathSimplifier
        
            typedef ::ompl::geometric::PathSimplifierPtr & ( ::ompl::geometric::SimpleSetup::*getPathSimplifier_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "getPathSimplifier"
                , getPathSimplifier_function_type( &::ompl::geometric::SimpleSetup::getPathSimplifier )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getPlanner
        
            typedef ::ompl::base::PlannerPtr const & ( ::ompl::geometric::SimpleSetup::*getPlanner_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getPlanner"
                , getPlanner_function_type( &::ompl::geometric::SimpleSetup::getPlanner )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getPlannerData
        
            typedef void ( ::ompl::geometric::SimpleSetup::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            SimpleSetup_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type( &::ompl::geometric::SimpleSetup::getPlannerData )
                , ( bp::arg("pd") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getProblemDefinition
        
            typedef ::ompl::base::ProblemDefinitionPtr const & ( ::ompl::geometric::SimpleSetup::*getProblemDefinition_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getProblemDefinition"
                , getProblemDefinition_function_type( &::ompl::geometric::SimpleSetup::getProblemDefinition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getSolutionPath
        
            typedef ::ompl::geometric::PathGeometric & ( ::ompl::geometric::SimpleSetup::*getSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getSolutionPath"
                , getSolutionPath_function_type( &::ompl::geometric::SimpleSetup::getSolutionPath )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getSolutionPlannerName
        
            typedef ::std::string const ( ::ompl::geometric::SimpleSetup::*getSolutionPlannerName_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getSolutionPlannerName"
                , getSolutionPlannerName_function_type( &::ompl::geometric::SimpleSetup::getSolutionPlannerName ) );
        
        }
        { //::ompl::geometric::SimpleSetup::getSpaceInformation
        
            typedef ::ompl::base::SpaceInformationPtr const & ( ::ompl::geometric::SimpleSetup::*getSpaceInformation_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getSpaceInformation"
                , getSpaceInformation_function_type( &::ompl::geometric::SimpleSetup::getSpaceInformation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getStateSpace
        
            typedef ::ompl::base::StateSpacePtr const & ( ::ompl::geometric::SimpleSetup::*getStateSpace_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getStateSpace"
                , getStateSpace_function_type( &::ompl::geometric::SimpleSetup::getStateSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::getStateValidityChecker
        
            typedef ::ompl::base::StateValidityCheckerPtr const & ( ::ompl::geometric::SimpleSetup::*getStateValidityChecker_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "getStateValidityChecker"
                , getStateValidityChecker_function_type( &::ompl::geometric::SimpleSetup::getStateValidityChecker )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::haveExactSolutionPath
        
            typedef bool ( ::ompl::geometric::SimpleSetup::*haveExactSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "haveExactSolutionPath"
                , haveExactSolutionPath_function_type( &::ompl::geometric::SimpleSetup::haveExactSolutionPath ) );
        
        }
        { //::ompl::geometric::SimpleSetup::haveSolutionPath
        
            typedef bool ( ::ompl::geometric::SimpleSetup::*haveSolutionPath_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "haveSolutionPath"
                , haveSolutionPath_function_type( &::ompl::geometric::SimpleSetup::haveSolutionPath ) );
        
        }
        { //::ompl::geometric::SimpleSetup::params
        
            typedef ::ompl::base::ParamSet & ( ::ompl::geometric::SimpleSetup::*params_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "params"
                , params_function_type( &::ompl::geometric::SimpleSetup::params )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::geometric::SimpleSetup::params
        
            typedef ::ompl::base::ParamSet const & ( ::ompl::geometric::SimpleSetup::*params_function_type)(  ) const;
            
            SimpleSetup_exposer.def( 
                "params"
                , params_function_type( &::ompl::geometric::SimpleSetup::params )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SimpleSetup::setGoal
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setGoal_function_type)( ::ompl::base::GoalPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setGoal"
                , setGoal_function_type( &::ompl::geometric::SimpleSetup::setGoal )
                , ( bp::arg("goal") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setGoalState
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setGoalState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            SimpleSetup_exposer.def( 
                "setGoalState"
                , setGoalState_function_type( &::ompl::geometric::SimpleSetup::setGoalState )
                , ( bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setOptimizationObjective
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setOptimizationObjective_function_type)( ::ompl::base::OptimizationObjectivePtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setOptimizationObjective"
                , setOptimizationObjective_function_type( &::ompl::geometric::SimpleSetup::setOptimizationObjective )
                , ( bp::arg("optimizationObjective") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setPlanner
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setPlanner_function_type)( ::ompl::base::PlannerPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setPlanner"
                , setPlanner_function_type( &::ompl::geometric::SimpleSetup::setPlanner )
                , ( bp::arg("planner") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setStartAndGoalStates
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setStartAndGoalStates_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const &,::ompl::base::ScopedState< ompl::base::StateSpace > const &,double const ) ;
            
            SimpleSetup_exposer.def( 
                "setStartAndGoalStates"
                , setStartAndGoalStates_function_type( &::ompl::geometric::SimpleSetup::setStartAndGoalStates )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("threshold")=std::numeric_limits<double>::epsilon() ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setStartState
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setStartState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStartState"
                , setStartState_function_type( &::ompl::geometric::SimpleSetup::setStartState )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setStateValidityChecker
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setStateValidityChecker_function_type)( ::ompl::base::StateValidityCheckerPtr const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStateValidityChecker"
                , setStateValidityChecker_function_type( &::ompl::geometric::SimpleSetup::setStateValidityChecker )
                , ( bp::arg("svc") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setStateValidityChecker
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setStateValidityChecker_function_type)( ::ompl::base::StateValidityCheckerFn const & ) ;
            
            SimpleSetup_exposer.def( 
                "setStateValidityChecker"
                , setStateValidityChecker_function_type( &::ompl::geometric::SimpleSetup::setStateValidityChecker )
                , ( bp::arg("svc") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::setup
        
            typedef void ( ::ompl::geometric::SimpleSetup::*setup_function_type)(  ) ;
            typedef void ( SimpleSetup_wrapper::*default_setup_function_type)(  ) ;
            
            SimpleSetup_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::SimpleSetup::setup)
                , default_setup_function_type(&SimpleSetup_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::SimpleSetup::simplifySolution
        
            typedef void ( ::ompl::geometric::SimpleSetup::*simplifySolution_function_type)( double ) ;
            
            SimpleSetup_exposer.def( 
                "simplifySolution"
                , simplifySolution_function_type( &::ompl::geometric::SimpleSetup::simplifySolution )
                , ( bp::arg("duration")=0.0 ) );
        
        }
        { //::ompl::geometric::SimpleSetup::simplifySolution
        
            typedef void ( ::ompl::geometric::SimpleSetup::*simplifySolution_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            SimpleSetup_exposer.def( 
                "simplifySolution"
                , simplifySolution_function_type( &::ompl::geometric::SimpleSetup::simplifySolution )
                , ( bp::arg("ptc") ) );
        
        }
        { //::ompl::geometric::SimpleSetup::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::SimpleSetup::*solve_function_type)( double ) ;
            typedef ::ompl::base::PlannerStatus ( SimpleSetup_wrapper::*default_solve_function_type)( double ) ;
            
            SimpleSetup_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::SimpleSetup::solve)
                , default_solve_function_type(&SimpleSetup_wrapper::default_solve)
                , ( bp::arg("time")=1.0e+0 ) );
        
        }
        { //::ompl::geometric::SimpleSetup::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::SimpleSetup::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( SimpleSetup_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            SimpleSetup_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::SimpleSetup::solve)
                , default_solve_function_type(&SimpleSetup_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        SimpleSetup_exposer.def("__str__", &__str__);
        SimpleSetup_exposer.def("setPlannerAllocator", &ompl::geometric::SimpleSetup::setPlannerAllocator);
        SimpleSetup_exposer.def("getPlannerAllocator", &ompl::geometric::SimpleSetup::getPlannerAllocator, bp::return_value_policy< bp::copy_const_reference >());
    }

}