// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "KPIECE1.pypp.hpp"

namespace bp = boost::python;

struct ControlKPIECE1_wrapper : ompl::control::KPIECE1, bp::wrapper< ompl::control::KPIECE1 > {

    ControlKPIECE1_wrapper(::ompl::control::SpaceInformationPtr const & si )
    : ompl::control::KPIECE1( si )
      , bp::wrapper< ompl::control::KPIECE1 >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::control::KPIECE1::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::control::KPIECE1::clear( );
    }

    unsigned int findNextMotion( ::std::vector< std::vector< int > > const & coords, unsigned int index, unsigned int count ){
        return ompl::control::KPIECE1::findNextMotion( boost::ref(coords), index, count );
    }

    void freeMemory(  ){
        ompl::control::KPIECE1::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::control::KPIECE1::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::control::KPIECE1::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::control::KPIECE1::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::control::KPIECE1::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::control::KPIECE1::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::control::KPIECE1::solve( boost::ref(ptc) );
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

void register_KPIECE1_class(){

    { //::ompl::control::KPIECE1
        typedef bp::class_< ControlKPIECE1_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > KPIECE1_exposer_t;
        KPIECE1_exposer_t KPIECE1_exposer = KPIECE1_exposer_t( "KPIECE1", bp::init< ompl::control::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope KPIECE1_scope( KPIECE1_exposer );
        bp::implicitly_convertible< ompl::control::SpaceInformationPtr const &, ompl::control::KPIECE1 >();
        { //::ompl::control::KPIECE1::clear
        
            typedef void ( ::ompl::control::KPIECE1::*clear_function_type)(  ) ;
            typedef void ( ControlKPIECE1_wrapper::*default_clear_function_type)(  ) ;
            
            KPIECE1_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::control::KPIECE1::clear)
                , default_clear_function_type(&ControlKPIECE1_wrapper::default_clear) );
        
        }
        { //::ompl::control::KPIECE1::findNextMotion
        
            typedef unsigned int ( ControlKPIECE1_wrapper::*findNextMotion_function_type)( ::std::vector< std::vector< int > > const &,unsigned int,unsigned int ) ;
            
            KPIECE1_exposer.def( 
                "findNextMotion"
                , findNextMotion_function_type( &ControlKPIECE1_wrapper::findNextMotion )
                , ( bp::arg("coords"), bp::arg("index"), bp::arg("count") ) );
        
        }
        { //::ompl::control::KPIECE1::freeMemory
        
            typedef void ( ControlKPIECE1_wrapper::*freeMemory_function_type)(  ) ;
            
            KPIECE1_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &ControlKPIECE1_wrapper::freeMemory ) );
        
        }
        { //::ompl::control::KPIECE1::getBadCellScoreFactor
        
            typedef double ( ::ompl::control::KPIECE1::*getBadCellScoreFactor_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getBadCellScoreFactor"
                , getBadCellScoreFactor_function_type( &::ompl::control::KPIECE1::getBadCellScoreFactor ) );
        
        }
        { //::ompl::control::KPIECE1::getBorderFraction
        
            typedef double ( ::ompl::control::KPIECE1::*getBorderFraction_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getBorderFraction"
                , getBorderFraction_function_type( &::ompl::control::KPIECE1::getBorderFraction ) );
        
        }
        { //::ompl::control::KPIECE1::getGoalBias
        
            typedef double ( ::ompl::control::KPIECE1::*getGoalBias_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::control::KPIECE1::getGoalBias ) );
        
        }
        { //::ompl::control::KPIECE1::getGoodCellScoreFactor
        
            typedef double ( ::ompl::control::KPIECE1::*getGoodCellScoreFactor_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getGoodCellScoreFactor"
                , getGoodCellScoreFactor_function_type( &::ompl::control::KPIECE1::getGoodCellScoreFactor ) );
        
        }
        { //::ompl::control::KPIECE1::getMaxCloseSamplesCount
        
            typedef unsigned int ( ::ompl::control::KPIECE1::*getMaxCloseSamplesCount_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getMaxCloseSamplesCount"
                , getMaxCloseSamplesCount_function_type( &::ompl::control::KPIECE1::getMaxCloseSamplesCount ) );
        
        }
        { //::ompl::control::KPIECE1::getPlannerData
        
            typedef void ( ::ompl::control::KPIECE1::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( ControlKPIECE1_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            KPIECE1_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::control::KPIECE1::getPlannerData)
                , default_getPlannerData_function_type(&ControlKPIECE1_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::control::KPIECE1::getProjectionEvaluator
        
            typedef ::ompl::base::ProjectionEvaluatorPtr const & ( ::ompl::control::KPIECE1::*getProjectionEvaluator_function_type)(  ) const;
            
            KPIECE1_exposer.def( 
                "getProjectionEvaluator"
                , getProjectionEvaluator_function_type( &::ompl::control::KPIECE1::getProjectionEvaluator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::KPIECE1::setBadCellScoreFactor
        
            typedef void ( ::ompl::control::KPIECE1::*setBadCellScoreFactor_function_type)( double ) ;
            
            KPIECE1_exposer.def( 
                "setBadCellScoreFactor"
                , setBadCellScoreFactor_function_type( &::ompl::control::KPIECE1::setBadCellScoreFactor )
                , ( bp::arg("bad") ) );
        
        }
        { //::ompl::control::KPIECE1::setBorderFraction
        
            typedef void ( ::ompl::control::KPIECE1::*setBorderFraction_function_type)( double ) ;
            
            KPIECE1_exposer.def( 
                "setBorderFraction"
                , setBorderFraction_function_type( &::ompl::control::KPIECE1::setBorderFraction )
                , ( bp::arg("bp") ) );
        
        }
        { //::ompl::control::KPIECE1::setCellScoreFactor
        
            typedef void ( ::ompl::control::KPIECE1::*setCellScoreFactor_function_type)( double,double ) ;
            
            KPIECE1_exposer.def( 
                "setCellScoreFactor"
                , setCellScoreFactor_function_type( &::ompl::control::KPIECE1::setCellScoreFactor )
                , ( bp::arg("good"), bp::arg("bad") ) );
        
        }
        { //::ompl::control::KPIECE1::setGoalBias
        
            typedef void ( ::ompl::control::KPIECE1::*setGoalBias_function_type)( double ) ;
            
            KPIECE1_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::control::KPIECE1::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::control::KPIECE1::setGoodCellScoreFactor
        
            typedef void ( ::ompl::control::KPIECE1::*setGoodCellScoreFactor_function_type)( double ) ;
            
            KPIECE1_exposer.def( 
                "setGoodCellScoreFactor"
                , setGoodCellScoreFactor_function_type( &::ompl::control::KPIECE1::setGoodCellScoreFactor )
                , ( bp::arg("good") ) );
        
        }
        { //::ompl::control::KPIECE1::setMaxCloseSamplesCount
        
            typedef void ( ::ompl::control::KPIECE1::*setMaxCloseSamplesCount_function_type)( unsigned int ) ;
            
            KPIECE1_exposer.def( 
                "setMaxCloseSamplesCount"
                , setMaxCloseSamplesCount_function_type( &::ompl::control::KPIECE1::setMaxCloseSamplesCount )
                , ( bp::arg("nCloseSamples") ) );
        
        }
        { //::ompl::control::KPIECE1::setProjectionEvaluator
        
            typedef void ( ::ompl::control::KPIECE1::*setProjectionEvaluator_function_type)( ::ompl::base::ProjectionEvaluatorPtr const & ) ;
            
            KPIECE1_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::control::KPIECE1::setProjectionEvaluator )
                , ( bp::arg("projectionEvaluator") ) );
        
        }
        { //::ompl::control::KPIECE1::setProjectionEvaluator
        
            typedef void ( ::ompl::control::KPIECE1::*setProjectionEvaluator_function_type)( ::std::string const & ) ;
            
            KPIECE1_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::control::KPIECE1::setProjectionEvaluator )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::control::KPIECE1::setup
        
            typedef void ( ::ompl::control::KPIECE1::*setup_function_type)(  ) ;
            typedef void ( ControlKPIECE1_wrapper::*default_setup_function_type)(  ) ;
            
            KPIECE1_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::control::KPIECE1::setup)
                , default_setup_function_type(&ControlKPIECE1_wrapper::default_setup) );
        
        }
        { //::ompl::control::KPIECE1::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::control::KPIECE1::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( ControlKPIECE1_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            KPIECE1_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::control::KPIECE1::solve)
                , default_solve_function_type(&ControlKPIECE1_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        KPIECE1_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        KPIECE1_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &ControlKPIECE1_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        KPIECE1_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                            &ControlKPIECE1_wrapper::default_checkValidity );
    }

}
