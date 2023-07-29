/*
 * Author:
 * 2023/06/08 - Yuqing Liang (BIMCoder Liang)
 * bim.frankliang@foxmail.com
 * 微信公众号：BIMCoder梁老师
 *
 * Use of this source code is governed by a GPL-3.0 license that can be found in
 * the LICENSE file.
 */

#pragma once

#include "LNLibDefinitions.h"
#include <vector>

namespace LNLib
{
	class XYZ;
	class XYZW;
	class LNLIB_EXPORT BezierCurve
	{

	public:

		/// <summary>
		/// The NURBS Book 2nd Edition Page22
		/// Algorithm A1.4
		/// Compute point on Bezier curve.
		/// </summary>
		static XYZ GetPointOnCurveByBernstein(const std::vector<XYZ>& controlPoints, unsigned int degree, double paramT);

		/// <summary>
		/// The NURBS Book 2nd Edition Page24
		/// Algorithm A1.5
		/// Compute point on Bezier curve using deCasteljau.
		/// </summary>
		static XYZ GetPointOnCurveByDeCasteljau(const std::vector<XYZ>& controlPoints, unsigned int degree, double paramT);

		/// <summary>
		/// The NURBS Book 2nd Edition Page291
		/// The quadratic rational Bezier arc.
		/// </summary>
		static XYZ GetPointOnQuadraticArc(const XYZW& startPoint, const XYZW& middlePoint, const XYZW& endPoint, double paramT);
		
		/// <summary>
		/// The NURBS Book 2nd Edition Page392
		/// Local rational quadratic curve interpolation.
		/// </summary>
		static XYZW ComputerMiddleControlPointOnQuadraticCurve(const XYZ& startPoint, const XYZ& startTangent, const XYZ& endPoint, const XYZ& endTangent);

	};
}


