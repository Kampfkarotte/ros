// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "RRTstar.pypp.hpp"

namespace bp = boost::python;

struct RRTstar_wrapper : ompl::geometric::RRTstar, bp::wrapper< ompl::geometric::RRTstar > {

    RRTstar_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::RRTstar( si )
      , bp::wrapper< ompl::geometric::RRTstar >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::RRTstar::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::RRTstar::clear( );
    }

    void freeMemory(  ){
        ompl::geometric::RRTstar::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::RRTstar::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::RRTstar::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::RRTstar::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::RRTstar::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::RRTstar::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::RRTstar::solve( boost::ref(ptc) );
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

void register_RRTstar_class(){

    { //::ompl::geometric::RRTstar
        typedef bp::class_< RRTstar_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > RRTstar_exposer_t;
        RRTstar_exposer_t RRTstar_exposer = RRTstar_exposer_t( "RRTstar", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope RRTstar_scope( RRTstar_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::RRTstar >();
        { //::ompl::geometric::RRTstar::clear
        
            typedef void ( ::ompl::geometric::RRTstar::*clear_function_type)(  ) ;
            typedef void ( RRTstar_wrapper::*default_clear_function_type)(  ) ;
            
            RRTstar_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::RRTstar::clear)
                , default_clear_function_type(&RRTstar_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::RRTstar::freeMemory
        
            typedef void ( RRTstar_wrapper::*freeMemory_function_type)(  ) ;
            
            RRTstar_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &RRTstar_wrapper::freeMemory ) );
        
        }
        { //::ompl::geometric::RRTstar::getBestCost
        
            typedef ::std::string ( ::ompl::geometric::RRTstar::*getBestCost_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getBestCost"
                , getBestCost_function_type( &::ompl::geometric::RRTstar::getBestCost ) );
        
        }
        { //::ompl::geometric::RRTstar::getCollisionCheckCount
        
            typedef ::std::string ( ::ompl::geometric::RRTstar::*getCollisionCheckCount_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getCollisionCheckCount"
                , getCollisionCheckCount_function_type( &::ompl::geometric::RRTstar::getCollisionCheckCount ) );
        
        }
        { //::ompl::geometric::RRTstar::getDelayCC
        
            typedef bool ( ::ompl::geometric::RRTstar::*getDelayCC_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getDelayCC"
                , getDelayCC_function_type( &::ompl::geometric::RRTstar::getDelayCC ) );
        
        }
        { //::ompl::geometric::RRTstar::getGoalBias
        
            typedef double ( ::ompl::geometric::RRTstar::*getGoalBias_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::geometric::RRTstar::getGoalBias ) );
        
        }
        { //::ompl::geometric::RRTstar::getIterationCount
        
            typedef ::std::string ( ::ompl::geometric::RRTstar::*getIterationCount_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getIterationCount"
                , getIterationCount_function_type( &::ompl::geometric::RRTstar::getIterationCount ) );
        
        }
        { //::ompl::geometric::RRTstar::getPlannerData
        
            typedef void ( ::ompl::geometric::RRTstar::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( RRTstar_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            RRTstar_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::RRTstar::getPlannerData)
                , default_getPlannerData_function_type(&RRTstar_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::RRTstar::getRange
        
            typedef double ( ::ompl::geometric::RRTstar::*getRange_function_type)(  ) const;
            
            RRTstar_exposer.def( 
                "getRange"
                , getRange_function_type( &::ompl::geometric::RRTstar::getRange ) );
        
        }
        { //::ompl::geometric::RRTstar::setDelayCC
        
            typedef void ( ::ompl::geometric::RRTstar::*setDelayCC_function_type)( bool ) ;
            
            RRTstar_exposer.def( 
                "setDelayCC"
                , setDelayCC_function_type( &::ompl::geometric::RRTstar::setDelayCC )
                , ( bp::arg("delayCC") ) );
        
        }
        { //::ompl::geometric::RRTstar::setGoalBias
        
            typedef void ( ::ompl::geometric::RRTstar::*setGoalBias_function_type)( double ) ;
            
            RRTstar_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::geometric::RRTstar::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::geometric::RRTstar::setRange
        
            typedef void ( ::ompl::geometric::RRTstar::*setRange_function_type)( double ) ;
            
            RRTstar_exposer.def( 
                "setRange"
                , setRange_function_type( &::ompl::geometric::RRTstar::setRange )
                , ( bp::arg("distance") ) );
        
        }
        { //::ompl::geometric::RRTstar::setup
        
            typedef void ( ::ompl::geometric::RRTstar::*setup_function_type)(  ) ;
            typedef void ( RRTstar_wrapper::*default_setup_function_type)(  ) ;
            
            RRTstar_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::RRTstar::setup)
                , default_setup_function_type(&RRTstar_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::RRTstar::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::RRTstar::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( RRTstar_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            RRTstar_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::RRTstar::solve)
                , default_solve_function_type(&RRTstar_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        RRTstar_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        RRTstar_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &RRTstar_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        RRTstar_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &RRTstar_wrapper::default_checkValidity );
    }

}
