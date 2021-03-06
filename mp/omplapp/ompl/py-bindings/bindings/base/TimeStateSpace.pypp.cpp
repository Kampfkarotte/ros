// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "TimeStateSpace.pypp.hpp"

namespace bp = boost::python;

struct TimeStateSpace_wrapper : ompl::base::TimeStateSpace, bp::wrapper< ompl::base::TimeStateSpace > {

    TimeStateSpace_wrapper( )
    : ompl::base::TimeStateSpace( )
      , bp::wrapper< ompl::base::TimeStateSpace >(){
        // null constructor
    
    }

    virtual ::ompl::base::StateSamplerPtr allocDefaultStateSampler(  ) const  {
        if( bp::override func_allocDefaultStateSampler = this->get_override( "allocDefaultStateSampler" ) )
            return func_allocDefaultStateSampler(  );
        else{
            return this->ompl::base::TimeStateSpace::allocDefaultStateSampler(  );
        }
    }
    
    ::ompl::base::StateSamplerPtr default_allocDefaultStateSampler(  ) const  {
        return ompl::base::TimeStateSpace::allocDefaultStateSampler( );
    }

    virtual ::ompl::base::State * allocState(  ) const  {
        if( bp::override func_allocState = this->get_override( "allocState" ) )
            return func_allocState(  );
        else{
            return this->ompl::base::TimeStateSpace::allocState(  );
        }
    }
    
    ::ompl::base::State * default_allocState(  ) const  {
        return ompl::base::TimeStateSpace::allocState( );
    }

    virtual void copyState( ::ompl::base::State * destination, ::ompl::base::State const * source ) const  {
        if( bp::override func_copyState = this->get_override( "copyState" ) )
            func_copyState( boost::python::ptr(destination), boost::python::ptr(source) );
        else{
            this->ompl::base::TimeStateSpace::copyState( boost::python::ptr(destination), boost::python::ptr(source) );
        }
    }
    
    void default_copyState( ::ompl::base::State * destination, ::ompl::base::State const * source ) const  {
        ompl::base::TimeStateSpace::copyState( boost::python::ptr(destination), boost::python::ptr(source) );
    }

    virtual void deserialize( ::ompl::base::State * state, void const * serialization ) const  {
        if( bp::override func_deserialize = this->get_override( "deserialize" ) )
            func_deserialize( boost::python::ptr(state), serialization );
        else{
            this->ompl::base::TimeStateSpace::deserialize( boost::python::ptr(state), serialization );
        }
    }
    
    void default_deserialize( ::ompl::base::State * state, void const * serialization ) const  {
        ompl::base::TimeStateSpace::deserialize( boost::python::ptr(state), serialization );
    }

    virtual double distance( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        if( bp::override func_distance = this->get_override( "distance" ) )
            return func_distance( boost::python::ptr(state1), boost::python::ptr(state2) );
        else{
            return this->ompl::base::TimeStateSpace::distance( boost::python::ptr(state1), boost::python::ptr(state2) );
        }
    }
    
    double default_distance( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        return ompl::base::TimeStateSpace::distance( boost::python::ptr(state1), boost::python::ptr(state2) );
    }

    virtual void enforceBounds( ::ompl::base::State * state ) const  {
        if( bp::override func_enforceBounds = this->get_override( "enforceBounds" ) )
            func_enforceBounds( boost::python::ptr(state) );
        else{
            this->ompl::base::TimeStateSpace::enforceBounds( boost::python::ptr(state) );
        }
    }
    
    void default_enforceBounds( ::ompl::base::State * state ) const  {
        ompl::base::TimeStateSpace::enforceBounds( boost::python::ptr(state) );
    }

    virtual bool equalStates( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        if( bp::override func_equalStates = this->get_override( "equalStates" ) )
            return func_equalStates( boost::python::ptr(state1), boost::python::ptr(state2) );
        else{
            return this->ompl::base::TimeStateSpace::equalStates( boost::python::ptr(state1), boost::python::ptr(state2) );
        }
    }
    
    bool default_equalStates( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        return ompl::base::TimeStateSpace::equalStates( boost::python::ptr(state1), boost::python::ptr(state2) );
    }

    virtual void freeState( ::ompl::base::State * state ) const  {
        if( bp::override func_freeState = this->get_override( "freeState" ) )
            func_freeState( boost::python::ptr(state) );
        else{
            this->ompl::base::TimeStateSpace::freeState( boost::python::ptr(state) );
        }
    }
    
    void default_freeState( ::ompl::base::State * state ) const  {
        ompl::base::TimeStateSpace::freeState( boost::python::ptr(state) );
    }

    virtual unsigned int getDimension(  ) const  {
        if( bp::override func_getDimension = this->get_override( "getDimension" ) )
            return func_getDimension(  );
        else{
            return this->ompl::base::TimeStateSpace::getDimension(  );
        }
    }
    
    unsigned int default_getDimension(  ) const  {
        return ompl::base::TimeStateSpace::getDimension( );
    }

    virtual double getMaximumExtent(  ) const  {
        if( bp::override func_getMaximumExtent = this->get_override( "getMaximumExtent" ) )
            return func_getMaximumExtent(  );
        else{
            return this->ompl::base::TimeStateSpace::getMaximumExtent(  );
        }
    }
    
    double default_getMaximumExtent(  ) const  {
        return ompl::base::TimeStateSpace::getMaximumExtent( );
    }

    virtual double getMeasure(  ) const  {
        if( bp::override func_getMeasure = this->get_override( "getMeasure" ) )
            return func_getMeasure(  );
        else{
            return this->ompl::base::TimeStateSpace::getMeasure(  );
        }
    }
    
    double default_getMeasure(  ) const  {
        return ompl::base::TimeStateSpace::getMeasure( );
    }

    virtual unsigned int getSerializationLength(  ) const  {
        if( bp::override func_getSerializationLength = this->get_override( "getSerializationLength" ) )
            return func_getSerializationLength(  );
        else{
            return this->ompl::base::TimeStateSpace::getSerializationLength(  );
        }
    }
    
    unsigned int default_getSerializationLength(  ) const  {
        return ompl::base::TimeStateSpace::getSerializationLength( );
    }

    virtual void interpolate( ::ompl::base::State const * from, ::ompl::base::State const * to, double const t, ::ompl::base::State * state ) const  {
        if( bp::override func_interpolate = this->get_override( "interpolate" ) )
            func_interpolate( boost::python::ptr(from), boost::python::ptr(to), t, boost::python::ptr(state) );
        else{
            this->ompl::base::TimeStateSpace::interpolate( boost::python::ptr(from), boost::python::ptr(to), t, boost::python::ptr(state) );
        }
    }
    
    void default_interpolate( ::ompl::base::State const * from, ::ompl::base::State const * to, double const t, ::ompl::base::State * state ) const  {
        ompl::base::TimeStateSpace::interpolate( boost::python::ptr(from), boost::python::ptr(to), t, boost::python::ptr(state) );
    }

    virtual void registerProjections(  ) {
        if( bp::override func_registerProjections = this->get_override( "registerProjections" ) )
            func_registerProjections(  );
        else{
            this->ompl::base::TimeStateSpace::registerProjections(  );
        }
    }
    
    void default_registerProjections(  ) {
        ompl::base::TimeStateSpace::registerProjections( );
    }

    virtual bool satisfiesBounds( ::ompl::base::State const * state ) const  {
        if( bp::override func_satisfiesBounds = this->get_override( "satisfiesBounds" ) )
            return func_satisfiesBounds( boost::python::ptr(state) );
        else{
            return this->ompl::base::TimeStateSpace::satisfiesBounds( boost::python::ptr(state) );
        }
    }
    
    bool default_satisfiesBounds( ::ompl::base::State const * state ) const  {
        return ompl::base::TimeStateSpace::satisfiesBounds( boost::python::ptr(state) );
    }

    virtual void serialize( void * serialization, ::ompl::base::State const * state ) const  {
        if( bp::override func_serialize = this->get_override( "serialize" ) )
            func_serialize( serialization, boost::python::ptr(state) );
        else{
            this->ompl::base::TimeStateSpace::serialize( serialization, boost::python::ptr(state) );
        }
    }
    
    void default_serialize( void * serialization, ::ompl::base::State const * state ) const  {
        ompl::base::TimeStateSpace::serialize( serialization, boost::python::ptr(state) );
    }

    virtual ::ompl::base::StateSamplerPtr allocStateSampler(  ) const  {
        if( bp::override func_allocStateSampler = this->get_override( "allocStateSampler" ) )
            return func_allocStateSampler(  );
        else{
            return this->ompl::base::StateSpace::allocStateSampler(  );
        }
    }
    
    ::ompl::base::StateSamplerPtr default_allocStateSampler(  ) const  {
        return ompl::base::StateSpace::allocStateSampler( );
    }

    virtual ::ompl::base::StateSamplerPtr allocSubspaceStateSampler( ::ompl::base::StateSpace const * subspace ) const  {
        if( bp::override func_allocSubspaceStateSampler = this->get_override( "allocSubspaceStateSampler" ) )
            return func_allocSubspaceStateSampler( boost::python::ptr(subspace) );
        else{
            return this->ompl::base::StateSpace::allocSubspaceStateSampler( boost::python::ptr(subspace) );
        }
    }
    
    ::ompl::base::StateSamplerPtr default_allocSubspaceStateSampler( ::ompl::base::StateSpace const * subspace ) const  {
        return ompl::base::StateSpace::allocSubspaceStateSampler( boost::python::ptr(subspace) );
    }

    virtual void computeLocations(  ) {
        if( bp::override func_computeLocations = this->get_override( "computeLocations" ) )
            func_computeLocations(  );
        else{
            this->ompl::base::StateSpace::computeLocations(  );
        }
    }
    
    void default_computeLocations(  ) {
        ompl::base::StateSpace::computeLocations( );
    }

    virtual double getLongestValidSegmentFraction(  ) const  {
        if( bp::override func_getLongestValidSegmentFraction = this->get_override( "getLongestValidSegmentFraction" ) )
            return func_getLongestValidSegmentFraction(  );
        else{
            return this->ompl::base::StateSpace::getLongestValidSegmentFraction(  );
        }
    }
    
    double default_getLongestValidSegmentFraction(  ) const  {
        return ompl::base::StateSpace::getLongestValidSegmentFraction( );
    }

    virtual bool hasSymmetricDistance(  ) const  {
        if( bp::override func_hasSymmetricDistance = this->get_override( "hasSymmetricDistance" ) )
            return func_hasSymmetricDistance(  );
        else{
            return this->ompl::base::StateSpace::hasSymmetricDistance(  );
        }
    }
    
    bool default_hasSymmetricDistance(  ) const  {
        return ompl::base::StateSpace::hasSymmetricDistance( );
    }

    virtual bool hasSymmetricInterpolate(  ) const  {
        if( bp::override func_hasSymmetricInterpolate = this->get_override( "hasSymmetricInterpolate" ) )
            return func_hasSymmetricInterpolate(  );
        else{
            return this->ompl::base::StateSpace::hasSymmetricInterpolate(  );
        }
    }
    
    bool default_hasSymmetricInterpolate(  ) const  {
        return ompl::base::StateSpace::hasSymmetricInterpolate( );
    }

    virtual bool isCompound(  ) const  {
        if( bp::override func_isCompound = this->get_override( "isCompound" ) )
            return func_isCompound(  );
        else{
            return this->ompl::base::StateSpace::isCompound(  );
        }
    }
    
    bool default_isCompound(  ) const  {
        return ompl::base::StateSpace::isCompound( );
    }

    virtual bool isDiscrete(  ) const  {
        if( bp::override func_isDiscrete = this->get_override( "isDiscrete" ) )
            return func_isDiscrete(  );
        else{
            return this->ompl::base::StateSpace::isDiscrete(  );
        }
    }
    
    bool default_isDiscrete(  ) const  {
        return ompl::base::StateSpace::isDiscrete( );
    }

    virtual bool isHybrid(  ) const  {
        if( bp::override func_isHybrid = this->get_override( "isHybrid" ) )
            return func_isHybrid(  );
        else{
            return this->ompl::base::StateSpace::isHybrid(  );
        }
    }
    
    bool default_isHybrid(  ) const  {
        return ompl::base::StateSpace::isHybrid( );
    }

    virtual bool isMetricSpace(  ) const  {
        if( bp::override func_isMetricSpace = this->get_override( "isMetricSpace" ) )
            return func_isMetricSpace(  );
        else{
            return this->ompl::base::StateSpace::isMetricSpace(  );
        }
    }
    
    bool default_isMetricSpace(  ) const  {
        return ompl::base::StateSpace::isMetricSpace( );
    }

    virtual void sanityChecks( double zero, double eps, unsigned int flags ) const  {
        if( bp::override func_sanityChecks = this->get_override( "sanityChecks" ) )
            func_sanityChecks( zero, eps, flags );
        else{
            this->ompl::base::StateSpace::sanityChecks( zero, eps, flags );
        }
    }
    
    void default_sanityChecks( double zero, double eps, unsigned int flags ) const  {
        ompl::base::StateSpace::sanityChecks( zero, eps, flags );
    }

    virtual void sanityChecks(  ) const  {
        if( bp::override func_sanityChecks = this->get_override( "sanityChecks" ) )
            func_sanityChecks(  );
        else{
            this->ompl::base::StateSpace::sanityChecks(  );
        }
    }
    
    void default_sanityChecks(  ) const  {
        ompl::base::StateSpace::sanityChecks( );
    }

    virtual void setLongestValidSegmentFraction( double segmentFraction ) {
        if( bp::override func_setLongestValidSegmentFraction = this->get_override( "setLongestValidSegmentFraction" ) )
            func_setLongestValidSegmentFraction( segmentFraction );
        else{
            this->ompl::base::StateSpace::setLongestValidSegmentFraction( segmentFraction );
        }
    }
    
    void default_setLongestValidSegmentFraction( double segmentFraction ) {
        ompl::base::StateSpace::setLongestValidSegmentFraction( segmentFraction );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::base::StateSpace::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::base::StateSpace::setup( );
    }

    virtual unsigned int validSegmentCount( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        if( bp::override func_validSegmentCount = this->get_override( "validSegmentCount" ) )
            return func_validSegmentCount( boost::python::ptr(state1), boost::python::ptr(state2) );
        else{
            return this->ompl::base::StateSpace::validSegmentCount( boost::python::ptr(state1), boost::python::ptr(state2) );
        }
    }
    
    unsigned int default_validSegmentCount( ::ompl::base::State const * state1, ::ompl::base::State const * state2 ) const  {
        return ompl::base::StateSpace::validSegmentCount( boost::python::ptr(state1), boost::python::ptr(state2) );
    }

};

std::string __printSettings(::ompl::base::TimeStateSpace* obj)
{
    std::ostringstream s;
    obj->printSettings(s);
    return s.str();
}

std::string __printState(::ompl::base::TimeStateSpace* space, ompl::base::State* state)
        {
            std::ostringstream s;
            space->printState(state, s);
            return s.str();
        }

void register_TimeStateSpace_class(){

    { //::ompl::base::TimeStateSpace
        typedef bp::class_< TimeStateSpace_wrapper, bp::bases< ompl::base::StateSpace >, boost::noncopyable > TimeStateSpace_exposer_t;
        TimeStateSpace_exposer_t TimeStateSpace_exposer = TimeStateSpace_exposer_t( "TimeStateSpace", bp::init< >() );
        bp::scope TimeStateSpace_scope( TimeStateSpace_exposer );
        { //::ompl::base::TimeStateSpace::StateType
            typedef bp::class_< ompl::base::TimeStateSpace::StateType, bp::bases< ompl::base::State >, boost::noncopyable > TimeStateInternal_exposer_t;
            TimeStateInternal_exposer_t TimeStateInternal_exposer = TimeStateInternal_exposer_t( "TimeStateInternal" );
            bp::scope TimeStateInternal_scope( TimeStateInternal_exposer );
            TimeStateInternal_exposer.def_readwrite( "position", &ompl::base::TimeStateSpace::StateType::position );
        }
        { //::ompl::base::TimeStateSpace::allocDefaultStateSampler
        
            typedef ::ompl::base::StateSamplerPtr ( ::ompl::base::TimeStateSpace::*allocDefaultStateSampler_function_type)(  ) const;
            typedef ::ompl::base::StateSamplerPtr ( TimeStateSpace_wrapper::*default_allocDefaultStateSampler_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "allocDefaultStateSampler"
                , allocDefaultStateSampler_function_type(&::ompl::base::TimeStateSpace::allocDefaultStateSampler)
                , default_allocDefaultStateSampler_function_type(&TimeStateSpace_wrapper::default_allocDefaultStateSampler) );
        
        }
        { //::ompl::base::TimeStateSpace::allocState
        
            typedef ::ompl::base::State * ( ::ompl::base::TimeStateSpace::*allocState_function_type)(  ) const;
            typedef ::ompl::base::State * ( TimeStateSpace_wrapper::*default_allocState_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "allocState"
                , allocState_function_type(&::ompl::base::TimeStateSpace::allocState)
                , default_allocState_function_type(&TimeStateSpace_wrapper::default_allocState)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::TimeStateSpace::copyState
        
            typedef void ( ::ompl::base::TimeStateSpace::*copyState_function_type)( ::ompl::base::State *,::ompl::base::State const * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_copyState_function_type)( ::ompl::base::State *,::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "copyState"
                , copyState_function_type(&::ompl::base::TimeStateSpace::copyState)
                , default_copyState_function_type(&TimeStateSpace_wrapper::default_copyState)
                , ( bp::arg("destination"), bp::arg("source") ) );
        
        }
        { //::ompl::base::TimeStateSpace::deserialize
        
            typedef void ( ::ompl::base::TimeStateSpace::*deserialize_function_type)( ::ompl::base::State *,void const * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_deserialize_function_type)( ::ompl::base::State *,void const * ) const;
            
            TimeStateSpace_exposer.def( 
                "deserialize"
                , deserialize_function_type(&::ompl::base::TimeStateSpace::deserialize)
                , default_deserialize_function_type(&TimeStateSpace_wrapper::default_deserialize)
                , ( bp::arg("state"), bp::arg("serialization") ) );
        
        }
        { //::ompl::base::TimeStateSpace::distance
        
            typedef double ( ::ompl::base::TimeStateSpace::*distance_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef double ( TimeStateSpace_wrapper::*default_distance_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "distance"
                , distance_function_type(&::ompl::base::TimeStateSpace::distance)
                , default_distance_function_type(&TimeStateSpace_wrapper::default_distance)
                , ( bp::arg("state1"), bp::arg("state2") ) );
        
        }
        { //::ompl::base::TimeStateSpace::enforceBounds
        
            typedef void ( ::ompl::base::TimeStateSpace::*enforceBounds_function_type)( ::ompl::base::State * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_enforceBounds_function_type)( ::ompl::base::State * ) const;
            
            TimeStateSpace_exposer.def( 
                "enforceBounds"
                , enforceBounds_function_type(&::ompl::base::TimeStateSpace::enforceBounds)
                , default_enforceBounds_function_type(&TimeStateSpace_wrapper::default_enforceBounds)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSpace::equalStates
        
            typedef bool ( ::ompl::base::TimeStateSpace::*equalStates_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_equalStates_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "equalStates"
                , equalStates_function_type(&::ompl::base::TimeStateSpace::equalStates)
                , default_equalStates_function_type(&TimeStateSpace_wrapper::default_equalStates)
                , ( bp::arg("state1"), bp::arg("state2") ) );
        
        }
        { //::ompl::base::TimeStateSpace::freeState
        
            typedef void ( ::ompl::base::TimeStateSpace::*freeState_function_type)( ::ompl::base::State * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_freeState_function_type)( ::ompl::base::State * ) const;
            
            TimeStateSpace_exposer.def( 
                "freeState"
                , freeState_function_type(&::ompl::base::TimeStateSpace::freeState)
                , default_freeState_function_type(&TimeStateSpace_wrapper::default_freeState)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSpace::getDimension
        
            typedef unsigned int ( ::ompl::base::TimeStateSpace::*getDimension_function_type)(  ) const;
            typedef unsigned int ( TimeStateSpace_wrapper::*default_getDimension_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getDimension"
                , getDimension_function_type(&::ompl::base::TimeStateSpace::getDimension)
                , default_getDimension_function_type(&TimeStateSpace_wrapper::default_getDimension) );
        
        }
        { //::ompl::base::TimeStateSpace::getMaxTimeBound
        
            typedef double ( ::ompl::base::TimeStateSpace::*getMaxTimeBound_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getMaxTimeBound"
                , getMaxTimeBound_function_type( &::ompl::base::TimeStateSpace::getMaxTimeBound ) );
        
        }
        { //::ompl::base::TimeStateSpace::getMaximumExtent
        
            typedef double ( ::ompl::base::TimeStateSpace::*getMaximumExtent_function_type)(  ) const;
            typedef double ( TimeStateSpace_wrapper::*default_getMaximumExtent_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getMaximumExtent"
                , getMaximumExtent_function_type(&::ompl::base::TimeStateSpace::getMaximumExtent)
                , default_getMaximumExtent_function_type(&TimeStateSpace_wrapper::default_getMaximumExtent) );
        
        }
        { //::ompl::base::TimeStateSpace::getMeasure
        
            typedef double ( ::ompl::base::TimeStateSpace::*getMeasure_function_type)(  ) const;
            typedef double ( TimeStateSpace_wrapper::*default_getMeasure_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getMeasure"
                , getMeasure_function_type(&::ompl::base::TimeStateSpace::getMeasure)
                , default_getMeasure_function_type(&TimeStateSpace_wrapper::default_getMeasure) );
        
        }
        { //::ompl::base::TimeStateSpace::getMinTimeBound
        
            typedef double ( ::ompl::base::TimeStateSpace::*getMinTimeBound_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getMinTimeBound"
                , getMinTimeBound_function_type( &::ompl::base::TimeStateSpace::getMinTimeBound ) );
        
        }
        { //::ompl::base::TimeStateSpace::getSerializationLength
        
            typedef unsigned int ( ::ompl::base::TimeStateSpace::*getSerializationLength_function_type)(  ) const;
            typedef unsigned int ( TimeStateSpace_wrapper::*default_getSerializationLength_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getSerializationLength"
                , getSerializationLength_function_type(&::ompl::base::TimeStateSpace::getSerializationLength)
                , default_getSerializationLength_function_type(&TimeStateSpace_wrapper::default_getSerializationLength) );
        
        }
        { //::ompl::base::TimeStateSpace::interpolate
        
            typedef void ( ::ompl::base::TimeStateSpace::*interpolate_function_type)( ::ompl::base::State const *,::ompl::base::State const *,double const,::ompl::base::State * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_interpolate_function_type)( ::ompl::base::State const *,::ompl::base::State const *,double const,::ompl::base::State * ) const;
            
            TimeStateSpace_exposer.def( 
                "interpolate"
                , interpolate_function_type(&::ompl::base::TimeStateSpace::interpolate)
                , default_interpolate_function_type(&TimeStateSpace_wrapper::default_interpolate)
                , ( bp::arg("from"), bp::arg("to"), bp::arg("t"), bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSpace::isBounded
        
            typedef bool ( ::ompl::base::TimeStateSpace::*isBounded_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "isBounded"
                , isBounded_function_type( &::ompl::base::TimeStateSpace::isBounded ) );
        
        }
        { //::ompl::base::TimeStateSpace::registerProjections
        
            typedef void ( ::ompl::base::TimeStateSpace::*registerProjections_function_type)(  ) ;
            typedef void ( TimeStateSpace_wrapper::*default_registerProjections_function_type)(  ) ;
            
            TimeStateSpace_exposer.def( 
                "registerProjections"
                , registerProjections_function_type(&::ompl::base::TimeStateSpace::registerProjections)
                , default_registerProjections_function_type(&TimeStateSpace_wrapper::default_registerProjections) );
        
        }
        { //::ompl::base::TimeStateSpace::satisfiesBounds
        
            typedef bool ( ::ompl::base::TimeStateSpace::*satisfiesBounds_function_type)( ::ompl::base::State const * ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_satisfiesBounds_function_type)( ::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "satisfiesBounds"
                , satisfiesBounds_function_type(&::ompl::base::TimeStateSpace::satisfiesBounds)
                , default_satisfiesBounds_function_type(&TimeStateSpace_wrapper::default_satisfiesBounds)
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSpace::serialize
        
            typedef void ( ::ompl::base::TimeStateSpace::*serialize_function_type)( void *,::ompl::base::State const * ) const;
            typedef void ( TimeStateSpace_wrapper::*default_serialize_function_type)( void *,::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "serialize"
                , serialize_function_type(&::ompl::base::TimeStateSpace::serialize)
                , default_serialize_function_type(&TimeStateSpace_wrapper::default_serialize)
                , ( bp::arg("serialization"), bp::arg("state") ) );
        
        }
        { //::ompl::base::TimeStateSpace::setBounds
        
            typedef void ( ::ompl::base::TimeStateSpace::*setBounds_function_type)( double,double ) ;
            
            TimeStateSpace_exposer.def( 
                "setBounds"
                , setBounds_function_type( &::ompl::base::TimeStateSpace::setBounds )
                , ( bp::arg("minTime"), bp::arg("maxTime") ) );
        
        }
        { //::ompl::base::StateSpace::allocStateSampler
        
            typedef ::ompl::base::StateSamplerPtr ( ::ompl::base::StateSpace::*allocStateSampler_function_type)(  ) const;
            typedef ::ompl::base::StateSamplerPtr ( TimeStateSpace_wrapper::*default_allocStateSampler_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "allocStateSampler"
                , allocStateSampler_function_type(&::ompl::base::StateSpace::allocStateSampler)
                , default_allocStateSampler_function_type(&TimeStateSpace_wrapper::default_allocStateSampler) );
        
        }
        { //::ompl::base::StateSpace::allocSubspaceStateSampler
        
            typedef ::ompl::base::StateSamplerPtr ( ::ompl::base::StateSpace::*allocSubspaceStateSampler_function_type)( ::ompl::base::StateSpacePtr const & ) const;
            
            TimeStateSpace_exposer.def( 
                "allocSubspaceStateSampler"
                , allocSubspaceStateSampler_function_type( &::ompl::base::StateSpace::allocSubspaceStateSampler )
                , ( bp::arg("subspace") ) );
        
        }
        { //::ompl::base::StateSpace::allocSubspaceStateSampler
        
            typedef ::ompl::base::StateSamplerPtr ( ::ompl::base::StateSpace::*allocSubspaceStateSampler_function_type)( ::ompl::base::StateSpace const * ) const;
            typedef ::ompl::base::StateSamplerPtr ( TimeStateSpace_wrapper::*default_allocSubspaceStateSampler_function_type)( ::ompl::base::StateSpace const * ) const;
            
            TimeStateSpace_exposer.def( 
                "allocSubspaceStateSampler"
                , allocSubspaceStateSampler_function_type(&::ompl::base::StateSpace::allocSubspaceStateSampler)
                , default_allocSubspaceStateSampler_function_type(&TimeStateSpace_wrapper::default_allocSubspaceStateSampler)
                , ( bp::arg("subspace") ) );
        
        }
        { //::ompl::base::StateSpace::computeLocations
        
            typedef void ( ::ompl::base::StateSpace::*computeLocations_function_type)(  ) ;
            typedef void ( TimeStateSpace_wrapper::*default_computeLocations_function_type)(  ) ;
            
            TimeStateSpace_exposer.def( 
                "computeLocations"
                , computeLocations_function_type(&::ompl::base::StateSpace::computeLocations)
                , default_computeLocations_function_type(&TimeStateSpace_wrapper::default_computeLocations) );
        
        }
        { //::ompl::base::StateSpace::getLongestValidSegmentFraction
        
            typedef double ( ::ompl::base::StateSpace::*getLongestValidSegmentFraction_function_type)(  ) const;
            typedef double ( TimeStateSpace_wrapper::*default_getLongestValidSegmentFraction_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "getLongestValidSegmentFraction"
                , getLongestValidSegmentFraction_function_type(&::ompl::base::StateSpace::getLongestValidSegmentFraction)
                , default_getLongestValidSegmentFraction_function_type(&TimeStateSpace_wrapper::default_getLongestValidSegmentFraction) );
        
        }
        { //::ompl::base::StateSpace::hasSymmetricDistance
        
            typedef bool ( ::ompl::base::StateSpace::*hasSymmetricDistance_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_hasSymmetricDistance_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "hasSymmetricDistance"
                , hasSymmetricDistance_function_type(&::ompl::base::StateSpace::hasSymmetricDistance)
                , default_hasSymmetricDistance_function_type(&TimeStateSpace_wrapper::default_hasSymmetricDistance) );
        
        }
        { //::ompl::base::StateSpace::hasSymmetricInterpolate
        
            typedef bool ( ::ompl::base::StateSpace::*hasSymmetricInterpolate_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_hasSymmetricInterpolate_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "hasSymmetricInterpolate"
                , hasSymmetricInterpolate_function_type(&::ompl::base::StateSpace::hasSymmetricInterpolate)
                , default_hasSymmetricInterpolate_function_type(&TimeStateSpace_wrapper::default_hasSymmetricInterpolate) );
        
        }
        { //::ompl::base::StateSpace::isCompound
        
            typedef bool ( ::ompl::base::StateSpace::*isCompound_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_isCompound_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "isCompound"
                , isCompound_function_type(&::ompl::base::StateSpace::isCompound)
                , default_isCompound_function_type(&TimeStateSpace_wrapper::default_isCompound) );
        
        }
        { //::ompl::base::StateSpace::isDiscrete
        
            typedef bool ( ::ompl::base::StateSpace::*isDiscrete_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_isDiscrete_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "isDiscrete"
                , isDiscrete_function_type(&::ompl::base::StateSpace::isDiscrete)
                , default_isDiscrete_function_type(&TimeStateSpace_wrapper::default_isDiscrete) );
        
        }
        { //::ompl::base::StateSpace::isHybrid
        
            typedef bool ( ::ompl::base::StateSpace::*isHybrid_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_isHybrid_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "isHybrid"
                , isHybrid_function_type(&::ompl::base::StateSpace::isHybrid)
                , default_isHybrid_function_type(&TimeStateSpace_wrapper::default_isHybrid) );
        
        }
        { //::ompl::base::StateSpace::isMetricSpace
        
            typedef bool ( ::ompl::base::StateSpace::*isMetricSpace_function_type)(  ) const;
            typedef bool ( TimeStateSpace_wrapper::*default_isMetricSpace_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "isMetricSpace"
                , isMetricSpace_function_type(&::ompl::base::StateSpace::isMetricSpace)
                , default_isMetricSpace_function_type(&TimeStateSpace_wrapper::default_isMetricSpace) );
        
        }
        { //::ompl::base::StateSpace::sanityChecks
        
            typedef void ( ::ompl::base::StateSpace::*sanityChecks_function_type)( double,double,unsigned int ) const;
            typedef void ( TimeStateSpace_wrapper::*default_sanityChecks_function_type)( double,double,unsigned int ) const;
            
            TimeStateSpace_exposer.def( 
                "sanityChecks"
                , sanityChecks_function_type(&::ompl::base::StateSpace::sanityChecks)
                , default_sanityChecks_function_type(&TimeStateSpace_wrapper::default_sanityChecks)
                , ( bp::arg("zero"), bp::arg("eps"), bp::arg("flags") ) );
        
        }
        { //::ompl::base::StateSpace::sanityChecks
        
            typedef void ( ::ompl::base::StateSpace::*sanityChecks_function_type)(  ) const;
            typedef void ( TimeStateSpace_wrapper::*default_sanityChecks_function_type)(  ) const;
            
            TimeStateSpace_exposer.def( 
                "sanityChecks"
                , sanityChecks_function_type(&::ompl::base::StateSpace::sanityChecks)
                , default_sanityChecks_function_type(&TimeStateSpace_wrapper::default_sanityChecks) );
        
        }
        { //::ompl::base::StateSpace::setLongestValidSegmentFraction
        
            typedef void ( ::ompl::base::StateSpace::*setLongestValidSegmentFraction_function_type)( double ) ;
            typedef void ( TimeStateSpace_wrapper::*default_setLongestValidSegmentFraction_function_type)( double ) ;
            
            TimeStateSpace_exposer.def( 
                "setLongestValidSegmentFraction"
                , setLongestValidSegmentFraction_function_type(&::ompl::base::StateSpace::setLongestValidSegmentFraction)
                , default_setLongestValidSegmentFraction_function_type(&TimeStateSpace_wrapper::default_setLongestValidSegmentFraction)
                , ( bp::arg("segmentFraction") ) );
        
        }
        { //::ompl::base::StateSpace::setup
        
            typedef void ( ::ompl::base::StateSpace::*setup_function_type)(  ) ;
            typedef void ( TimeStateSpace_wrapper::*default_setup_function_type)(  ) ;
            
            TimeStateSpace_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::base::StateSpace::setup)
                , default_setup_function_type(&TimeStateSpace_wrapper::default_setup) );
        
        }
        { //::ompl::base::StateSpace::validSegmentCount
        
            typedef unsigned int ( ::ompl::base::StateSpace::*validSegmentCount_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef unsigned int ( TimeStateSpace_wrapper::*default_validSegmentCount_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            TimeStateSpace_exposer.def( 
                "validSegmentCount"
                , validSegmentCount_function_type(&::ompl::base::StateSpace::validSegmentCount)
                , default_validSegmentCount_function_type(&TimeStateSpace_wrapper::default_validSegmentCount)
                , ( bp::arg("state1"), bp::arg("state2") ) );
        
        }
        TimeStateSpace_exposer.def("settings", &__printSettings);
        TimeStateSpace_exposer.def("string", &__printState);
    }

}
