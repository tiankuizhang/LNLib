#pragma once

#include "LNLibDefinitions.h"
#include <vector>

namespace LNLib
{

	class LNLIB_EXPORT Polynomials
	{

	public:
		
		/// <summary>
		/// The NURBS Book 2nd Edition Page20
		/// Algorithm A1.1
		/// power basis curve computed using Horner's method.
		/// </summary>
		static double Horner(const std::vector<double>& coefficients, unsigned int degree, double paramT);

		/// <summary>
		/// The NURBS Book 2nd Edition Page7
		/// Algorithm A1.2
		/// compute values of the Berstein polynomials.
		/// </summary>
		static double Bernstein(unsigned int i, unsigned int degree, double paramT);

		/// <summary>
		/// The NURBS Book 2nd Edition Page21
		/// Algorithm A1.3
		/// Compute All nth-degree Berstein polynomials.
		/// </summary>
		static void AllBernstein(unsigned int degree, double paramT, std::vector<double>& bernsteinArray);

		/// <summary>
		/// The NURBS Book 2nd Edition Page36
		/// Algorithm A1.6
		/// Compute point on a power basis surface.
		/// </summary>
		static double Horner(const std::vector<std::vector<double>>& coefficients, unsigned int degreeU, unsigned int degreeV, double paramU, double paramV);

		/// <summary>
		/// The NURBS Book 2nd Edition Page68
		/// Algorithm A2.1
		/// Get the knot span index.
		/// </summary>
		static int GetKnotSpanIndex(unsigned int n, unsigned int degree, double paramT, const std::vector<double>& knotVector);

		/// <summary>
		/// The NURBS Book 2nd Edition Page152
		/// Get the knot multiplicity.
		/// </summary>
		static int GetKnotMultiplicity(unsigned int n, unsigned int degree, double knot, const std::vector<double>& knotVector);

		/// <summary>
		/// The NURBS Book 2nd Edition Page70
		/// Algorithm A2.2
		/// Compute the nonvanishing basis functions.
		/// </summary>
		static void BasisFunctions(unsigned int spanIndex, unsigned int degree, double paramT, const std::vector<double>& knotVector, std::vector<double>& basisFunctions);

		/// <summary>
		/// The NURBS Book 2nd Edition Page72
		/// Algorithm A2.3
		/// Compute nonzero basis functions and their derivative.
		/// </summary>
		static void BasisFunctionsDerivatives(unsigned int spanIndex, unsigned int degree, double paramT, unsigned int derivative, const std::vector<double>& knotVector, std::vector<std::vector<double>>& derivatives);

		/// <summary>
		/// The NURBS Book 2nd Edition Page74
		/// Algorithm A2.4
		/// Compute a single basis function.
		/// </summary>
		static double OneBasisFunction(unsigned int index, unsigned int degree, const std::vector<double>& knotVector, double paramT);

		/// <summary>
		/// The NURBS Book 2nd Edition Page76
		/// Algorithm A2.5
		/// Compute a single basis function and its derivative.
		/// </summary>
		static void OneBasisFunctionDerivative(unsigned int index, unsigned int degree, const std::vector<double>& knotVector, double paramT, unsigned int derivative, std::vector<double>& derivatives);
	};

}



