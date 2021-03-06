// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/control.h"
#include "ODESolver.pypp.hpp"

namespace bp = boost::python;

struct ODESolver_wrapper : ompl::control::ODESolver, bp::wrapper< ompl::control::ODESolver > {

    ODESolver_wrapper(::ompl::control::SpaceInformationPtr const & si, ::boost::function< void (std::vector< double, std::allocator< double > >, ompl::control::Control const*, std::vector<double, std::allocator<double> >&) > const & ode, double intStep )
    : ompl::control::ODESolver( si, boost::ref(ode), intStep )
      , bp::wrapper< ompl::control::ODESolver >(){
        // constructor
    
    }

    virtual void solve( ::std::vector< double > & state, ::ompl::control::Control const * control, double const duration ) const {
        bp::override func_solve = this->get_override( "solve" );
        func_solve( boost::ref(state), boost::python::ptr(control), duration );
    }

};

// ::ompl::control::ODESolver
        ompl::control::StatePropagatorPtr getStatePropagator2(ompl::control::ODESolverPtr solver,
            const ompl::control::ODESolver::PostPropagationEvent &postEvent)
        {
            return ompl::control::ODESolver::getStatePropagator(solver, postEvent);
        }
        ompl::control::StatePropagatorPtr getStatePropagator1(ompl::control::ODESolverPtr solver)
        {
            return ompl::control::ODESolver::getStatePropagator(solver);
        }

void register_ODESolver_class(){

    { //::ompl::control::ODESolver
        typedef bp::class_< ODESolver_wrapper, boost::noncopyable > ODESolver_exposer_t;
        ODESolver_exposer_t ODESolver_exposer = ODESolver_exposer_t( "ODESolver", bp::init< ompl::control::SpaceInformationPtr const &, boost::function< void (std::vector< double, std::allocator< double > >, ompl::control::Control const*, std::vector<double, std::allocator<double> >&) > const &, double >(( bp::arg("si"), bp::arg("ode"), bp::arg("intStep") )) );
        bp::scope ODESolver_scope( ODESolver_exposer );
        { //::ompl::control::ODESolver::getIntegrationStepSize
        
            typedef double ( ::ompl::control::ODESolver::*getIntegrationStepSize_function_type)(  ) const;
            
            ODESolver_exposer.def( 
                "getIntegrationStepSize"
                , getIntegrationStepSize_function_type( &::ompl::control::ODESolver::getIntegrationStepSize ) );
        
        }
        { //::ompl::control::ODESolver::getSpaceInformation
        
            typedef ::ompl::control::SpaceInformationPtr const & ( ::ompl::control::ODESolver::*getSpaceInformation_function_type)(  ) const;
            
            ODESolver_exposer.def( 
                "getSpaceInformation"
                , getSpaceInformation_function_type( &::ompl::control::ODESolver::getSpaceInformation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::control::ODESolver::setIntegrationStepSize
        
            typedef void ( ::ompl::control::ODESolver::*setIntegrationStepSize_function_type)( double ) ;
            
            ODESolver_exposer.def( 
                "setIntegrationStepSize"
                , setIntegrationStepSize_function_type( &::ompl::control::ODESolver::setIntegrationStepSize )
                , ( bp::arg("intStep") ) );
        
        }
        { //::ompl::control::ODESolver::setODE
        
            typedef void ( ::ompl::control::ODESolver::*setODE_function_type)( ::boost::function< void (std::vector< double, std::allocator< double > >, ompl::control::Control const*, std::vector<double, std::allocator<double> >&) > const & ) ;
            
            ODESolver_exposer.def( 
                "setODE"
                , setODE_function_type( &::ompl::control::ODESolver::setODE )
                , ( bp::arg("ode") ) );
        
        }
        { //::ompl::control::ODESolver::solve
        
            typedef void ( ODESolver_wrapper::*solve_function_type)( ::std::vector< double > &,::ompl::control::Control const *,double const ) const;
            
            ODESolver_exposer.def( 
                "solve"
                , solve_function_type( &ODESolver_wrapper::solve )
                , ( bp::arg("state"), bp::arg("control"), bp::arg("duration") ) );
        
        }
        ODESolver_exposer.def("getStatePropagator", &getStatePropagator1);
                ODESolver_exposer.def("getStatePropagator", &getStatePropagator2);
                ODESolver_exposer.staticmethod( "getStatePropagator" );
    }

}
