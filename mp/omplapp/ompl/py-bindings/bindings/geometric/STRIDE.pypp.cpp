// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "STRIDE.pypp.hpp"

namespace bp = boost::python;

struct STRIDE_wrapper : ompl::geometric::STRIDE, bp::wrapper< ompl::geometric::STRIDE > {

    STRIDE_wrapper(::ompl::base::SpaceInformationPtr const & si, bool useProjectedDistance=false, unsigned int degree=16, unsigned int minDegree=12, unsigned int maxDegree=18, unsigned int maxNumPtsPerLeaf=6, double estimatedDimension=0.0 )
    : ompl::geometric::STRIDE( si, useProjectedDistance, degree, minDegree, maxDegree, maxNumPtsPerLeaf, estimatedDimension )
      , bp::wrapper< ompl::geometric::STRIDE >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::STRIDE::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::STRIDE::clear( );
    }

    void freeMemory(  ){
        ompl::geometric::STRIDE::freeMemory(  );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::STRIDE::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::STRIDE::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::STRIDE::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::STRIDE::setup( );
    }

    void setupTree(  ){
        ompl::geometric::STRIDE::setupTree(  );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::STRIDE::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::STRIDE::solve( boost::ref(ptc) );
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

void register_STRIDE_class(){

    { //::ompl::geometric::STRIDE
        typedef bp::class_< STRIDE_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > STRIDE_exposer_t;
        STRIDE_exposer_t STRIDE_exposer = STRIDE_exposer_t( "STRIDE", bp::init< ompl::base::SpaceInformationPtr const &, bp::optional< bool, unsigned int, unsigned int, unsigned int, unsigned int, double > >(( bp::arg("si"), bp::arg("useProjectedDistance")=(bool)(false), bp::arg("degree")=(unsigned int)(16), bp::arg("minDegree")=(unsigned int)(12), bp::arg("maxDegree")=(unsigned int)(18), bp::arg("maxNumPtsPerLeaf")=(unsigned int)(6), bp::arg("estimatedDimension")=0.0 )) );
        bp::scope STRIDE_scope( STRIDE_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::STRIDE >();
        { //::ompl::geometric::STRIDE::clear
        
            typedef void ( ::ompl::geometric::STRIDE::*clear_function_type)(  ) ;
            typedef void ( STRIDE_wrapper::*default_clear_function_type)(  ) ;
            
            STRIDE_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::STRIDE::clear)
                , default_clear_function_type(&STRIDE_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::STRIDE::freeMemory
        
            typedef void ( STRIDE_wrapper::*freeMemory_function_type)(  ) ;
            
            STRIDE_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &STRIDE_wrapper::freeMemory ) );
        
        }
        { //::ompl::geometric::STRIDE::getDegree
        
            typedef unsigned int ( ::ompl::geometric::STRIDE::*getDegree_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getDegree"
                , getDegree_function_type( &::ompl::geometric::STRIDE::getDegree ) );
        
        }
        { //::ompl::geometric::STRIDE::getEstimatedDimension
        
            typedef double ( ::ompl::geometric::STRIDE::*getEstimatedDimension_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getEstimatedDimension"
                , getEstimatedDimension_function_type( &::ompl::geometric::STRIDE::getEstimatedDimension ) );
        
        }
        { //::ompl::geometric::STRIDE::getGoalBias
        
            typedef double ( ::ompl::geometric::STRIDE::*getGoalBias_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getGoalBias"
                , getGoalBias_function_type( &::ompl::geometric::STRIDE::getGoalBias ) );
        
        }
        { //::ompl::geometric::STRIDE::getMaxDegree
        
            typedef unsigned int ( ::ompl::geometric::STRIDE::*getMaxDegree_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getMaxDegree"
                , getMaxDegree_function_type( &::ompl::geometric::STRIDE::getMaxDegree ) );
        
        }
        { //::ompl::geometric::STRIDE::getMaxNumPtsPerLeaf
        
            typedef unsigned int ( ::ompl::geometric::STRIDE::*getMaxNumPtsPerLeaf_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getMaxNumPtsPerLeaf"
                , getMaxNumPtsPerLeaf_function_type( &::ompl::geometric::STRIDE::getMaxNumPtsPerLeaf ) );
        
        }
        { //::ompl::geometric::STRIDE::getMinDegree
        
            typedef unsigned int ( ::ompl::geometric::STRIDE::*getMinDegree_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getMinDegree"
                , getMinDegree_function_type( &::ompl::geometric::STRIDE::getMinDegree ) );
        
        }
        { //::ompl::geometric::STRIDE::getMinValidPathFraction
        
            typedef double ( ::ompl::geometric::STRIDE::*getMinValidPathFraction_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getMinValidPathFraction"
                , getMinValidPathFraction_function_type( &::ompl::geometric::STRIDE::getMinValidPathFraction ) );
        
        }
        { //::ompl::geometric::STRIDE::getPlannerData
        
            typedef void ( ::ompl::geometric::STRIDE::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( STRIDE_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            STRIDE_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::STRIDE::getPlannerData)
                , default_getPlannerData_function_type(&STRIDE_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::STRIDE::getProjectionEvaluator
        
            typedef ::ompl::base::ProjectionEvaluatorPtr const & ( ::ompl::geometric::STRIDE::*getProjectionEvaluator_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getProjectionEvaluator"
                , getProjectionEvaluator_function_type( &::ompl::geometric::STRIDE::getProjectionEvaluator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::STRIDE::getRange
        
            typedef double ( ::ompl::geometric::STRIDE::*getRange_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getRange"
                , getRange_function_type( &::ompl::geometric::STRIDE::getRange ) );
        
        }
        { //::ompl::geometric::STRIDE::getUseProjectedDistance
        
            typedef bool ( ::ompl::geometric::STRIDE::*getUseProjectedDistance_function_type)(  ) const;
            
            STRIDE_exposer.def( 
                "getUseProjectedDistance"
                , getUseProjectedDistance_function_type( &::ompl::geometric::STRIDE::getUseProjectedDistance ) );
        
        }
        { //::ompl::geometric::STRIDE::setDegree
        
            typedef void ( ::ompl::geometric::STRIDE::*setDegree_function_type)( unsigned int ) ;
            
            STRIDE_exposer.def( 
                "setDegree"
                , setDegree_function_type( &::ompl::geometric::STRIDE::setDegree )
                , ( bp::arg("degree") ) );
        
        }
        { //::ompl::geometric::STRIDE::setEstimatedDimension
        
            typedef void ( ::ompl::geometric::STRIDE::*setEstimatedDimension_function_type)( double ) ;
            
            STRIDE_exposer.def( 
                "setEstimatedDimension"
                , setEstimatedDimension_function_type( &::ompl::geometric::STRIDE::setEstimatedDimension )
                , ( bp::arg("estimatedDimension") ) );
        
        }
        { //::ompl::geometric::STRIDE::setGoalBias
        
            typedef void ( ::ompl::geometric::STRIDE::*setGoalBias_function_type)( double ) ;
            
            STRIDE_exposer.def( 
                "setGoalBias"
                , setGoalBias_function_type( &::ompl::geometric::STRIDE::setGoalBias )
                , ( bp::arg("goalBias") ) );
        
        }
        { //::ompl::geometric::STRIDE::setMaxDegree
        
            typedef void ( ::ompl::geometric::STRIDE::*setMaxDegree_function_type)( unsigned int ) ;
            
            STRIDE_exposer.def( 
                "setMaxDegree"
                , setMaxDegree_function_type( &::ompl::geometric::STRIDE::setMaxDegree )
                , ( bp::arg("maxDegree") ) );
        
        }
        { //::ompl::geometric::STRIDE::setMaxNumPtsPerLeaf
        
            typedef void ( ::ompl::geometric::STRIDE::*setMaxNumPtsPerLeaf_function_type)( unsigned int ) ;
            
            STRIDE_exposer.def( 
                "setMaxNumPtsPerLeaf"
                , setMaxNumPtsPerLeaf_function_type( &::ompl::geometric::STRIDE::setMaxNumPtsPerLeaf )
                , ( bp::arg("maxNumPtsPerLeaf") ) );
        
        }
        { //::ompl::geometric::STRIDE::setMinDegree
        
            typedef void ( ::ompl::geometric::STRIDE::*setMinDegree_function_type)( unsigned int ) ;
            
            STRIDE_exposer.def( 
                "setMinDegree"
                , setMinDegree_function_type( &::ompl::geometric::STRIDE::setMinDegree )
                , ( bp::arg("minDegree") ) );
        
        }
        { //::ompl::geometric::STRIDE::setMinValidPathFraction
        
            typedef void ( ::ompl::geometric::STRIDE::*setMinValidPathFraction_function_type)( double ) ;
            
            STRIDE_exposer.def( 
                "setMinValidPathFraction"
                , setMinValidPathFraction_function_type( &::ompl::geometric::STRIDE::setMinValidPathFraction )
                , ( bp::arg("fraction") ) );
        
        }
        { //::ompl::geometric::STRIDE::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::STRIDE::*setProjectionEvaluator_function_type)( ::ompl::base::ProjectionEvaluatorPtr const & ) ;
            
            STRIDE_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::STRIDE::setProjectionEvaluator )
                , ( bp::arg("projectionEvaluator") ) );
        
        }
        { //::ompl::geometric::STRIDE::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::STRIDE::*setProjectionEvaluator_function_type)( ::std::string const & ) ;
            
            STRIDE_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::STRIDE::setProjectionEvaluator )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::geometric::STRIDE::setRange
        
            typedef void ( ::ompl::geometric::STRIDE::*setRange_function_type)( double ) ;
            
            STRIDE_exposer.def( 
                "setRange"
                , setRange_function_type( &::ompl::geometric::STRIDE::setRange )
                , ( bp::arg("distance") ) );
        
        }
        { //::ompl::geometric::STRIDE::setUseProjectedDistance
        
            typedef void ( ::ompl::geometric::STRIDE::*setUseProjectedDistance_function_type)( bool ) ;
            
            STRIDE_exposer.def( 
                "setUseProjectedDistance"
                , setUseProjectedDistance_function_type( &::ompl::geometric::STRIDE::setUseProjectedDistance )
                , ( bp::arg("useProjectedDistance") ) );
        
        }
        { //::ompl::geometric::STRIDE::setup
        
            typedef void ( ::ompl::geometric::STRIDE::*setup_function_type)(  ) ;
            typedef void ( STRIDE_wrapper::*default_setup_function_type)(  ) ;
            
            STRIDE_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::STRIDE::setup)
                , default_setup_function_type(&STRIDE_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::STRIDE::setupTree
        
            typedef void ( STRIDE_wrapper::*setupTree_function_type)(  ) ;
            
            STRIDE_exposer.def( 
                "setupTree"
                , setupTree_function_type( &STRIDE_wrapper::setupTree ) );
        
        }
        { //::ompl::geometric::STRIDE::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::STRIDE::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( STRIDE_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            STRIDE_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::STRIDE::solve)
                , default_solve_function_type(&STRIDE_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        STRIDE_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        STRIDE_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &STRIDE_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        STRIDE_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &STRIDE_wrapper::default_checkValidity );
    }

}