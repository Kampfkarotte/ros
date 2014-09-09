// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "EST.pypp.hpp"

namespace bp = boost::python;

struct EST_wrapper : ompl::geometric::EST, bp::wrapper< ompl::geometric::EST > {

    EST_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::EST( si )
      , bp::wrapper< ompl::geometric::EST >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::EST::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::EST::clear( );
    }

    void freeMemory(  ){
        ompl::geometric::EST::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::EST::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::EST::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::EST::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::EST::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::EST::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::EST::solve( boost::ref(ptc) );
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

void register_EST_class(){

    { //::ompl::geometric::EST
        typedef bp::class_< EST_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > EST_exposer_t;
        EST_exposer_t EST_exposer = EST_exposer_t( "EST", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope EST_scope( EST_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::EST >();
        { //::ompl::geometric::EST::clear
        
            typedef void ( ::ompl::geometric::EST::*clear_function_type)(  ) ;
            typedef void ( EST_wrapper::*default_clear_function_type)(  ) ;
            
            EST_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::EST::clear)
                , default_clear_function_type(&EST_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::EST::freeMemory
        
            typedef void ( EST_wrapper::*freeMemory_function_type)(  ) ;
            
            EST_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &EST_wrapper::freeMemory ) );
        
        }
        { //::ompl::geometric::EST::getGoalBias
        
            typedef double ( ::ompl::geometric::EST::*getGoalBias_function_type)(  ) const;
            
            EST_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::geometric::EST::getGoalBias ) );
        
        }
        { //::ompl::geometric::EST::getPlannerData
        
            typedef void ( ::ompl::geometric::EST::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( EST_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            EST_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::EST::getPlannerData)
                , default_getPlannerData_function_type(&EST_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::EST::getProjectionEvaluator
        
            typedef ::ompl::base::ProjectionEvaluatorPtr const & ( ::ompl::geometric::EST::*getProjectionEvaluator_function_type)(  ) const;
            
            EST_exposer.def( 
                "getProjectionEvaluator"
                , getProjectionEvaluator_function_type( &::ompl::geometric::EST::getProjectionEvaluator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::EST::getRange
        
            typedef double ( ::ompl::geometric::EST::*getRange_function_type)(  ) const;
            
            EST_exposer.def( 
                "getRange"
                , getRange_function_type( &::ompl::geometric::EST::getRange ) );
        
        }
        { //::ompl::geometric::EST::setGoalBias
        
            typedef void ( ::ompl::geometric::EST::*setGoalBias_function_type)( double ) ;
            
            EST_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::geometric::EST::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::geometric::EST::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::EST::*setProjectionEvaluator_function_type)( ::ompl::base::ProjectionEvaluatorPtr const & ) ;
            
            EST_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::EST::setProjectionEvaluator )
                , ( bp::arg("projectionEvaluator") ) );
        
        }
        { //::ompl::geometric::EST::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::EST::*setProjectionEvaluator_function_type)( ::std::string const & ) ;
            
            EST_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::EST::setProjectionEvaluator )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::geometric::EST::setRange
        
            typedef void ( ::ompl::geometric::EST::*setRange_function_type)( double ) ;
            
            EST_exposer.def( 
                "setRange"
                , setRange_function_type( &::ompl::geometric::EST::setRange )
                , ( bp::arg("distance") ) );
        
        }
        { //::ompl::geometric::EST::setup
        
            typedef void ( ::ompl::geometric::EST::*setup_function_type)(  ) ;
            typedef void ( EST_wrapper::*default_setup_function_type)(  ) ;
            
            EST_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::EST::setup)
                , default_setup_function_type(&EST_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::EST::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::EST::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( EST_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            EST_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::EST::solve)
                , default_solve_function_type(&EST_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        EST_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        EST_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &EST_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        EST_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &EST_wrapper::default_checkValidity );
    }

}