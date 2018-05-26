// Copyright (C) 2014 - 2018  Jack O. Wasey
//
// This file is part of icd.
//
// icd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// icd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with icd. If not, see <http://www.gnu.org/licenses/>.

#ifndef LOCAL_H_
#define LOCAL_H_

#include "config.h"
#include "icd_types.h"                        // for VecInt, VecVecInt, VecV...
#include <set>
#include <unordered_map>
#include <unordered_set>

extern "C" {
#include "cutil.h"
#include <cstdlib>
}

// debugging:
// #define ICD_DEBUG
// #define ICD_DEBUG_TRACE
// #define ICD_DEBUG_SETUP
// #define ICD_DEBUG_SETUP_SLOW
// #define ICD_DEBUG_SETUP_TRACE
// #define ICD_DEBUG_PARALLEL
// #define ICD_VALGRIND

#ifdef ICD_DEBUG
#define DEBUG(x) do { Rcpp::Rcout << x << std::endl; } while (0)
#else
#define DEBUG(x) ((void)0)
#endif

#ifdef ICD_DEBUG_TRACE
#define TRACE(x) do { Rcpp::Rcout << x << std::endl; } while (0)
#else
#define TRACE(x) ((void)0)
#endif

#ifdef ICD_DEBUG_VALGRIND
#define DEBUG_VALGRIND(x) do { Rcpp::Rcout << x << std::endl; } while (0)
#else
#define DEBUG_VALGRIND(x) ((void)0)
#endif

#ifdef ICD_DEBUG_PARALLEL
#define DEBUG_PARALLEL(x) do { Rcpp::Rcout << x << std::endl; } while (0)
#else
#define DEBUG_PARALLEL(x) ((void)0)
#endif

#ifdef ICD_DEBUG
#define DEBUG_VEC(x) do { Rcpp::Rcout << #x << ": " << std::flush; printIt(x); } while (0);
#else
#define DEBUG_VEC(x) ((void)0)
#endif

// not enough to test whether header is available, because it may be disabled in
// R: #ifdef _OPENMP

// define backwards so rstudio assumes it is present for syntax and reference checking
#define ICD_OPENMP
#ifndef HAVE_R_OPENMP
#undef ICD_OPENMP
#endif

#define ICD_EIGEN
#ifndef HAVE_RCPPEIGEN_H
#undef ICD_EIGEN
#endif

#define ICD_CATCH
#ifndef HAVE_TESTTHAT_H
#undef ICD_CATCH
#endif
#ifdef NDEBUG
#undef ICD_CATCH
#endif

#ifdef ICD_EIGEN
#include <RcppEigen.h> // also add LinkingTo element in DESCRIPTION to enable
#include <Eigen/SparseCore>
// https://eigen.tuxfamily.org/dox/group__TutorialSparse.html
typedef int SparseValue;
typedef Eigen::Triplet<SparseValue> Triplet;
typedef Eigen::SparseMatrix<SparseValue, Eigen::RowMajor> PtsSparse;
typedef Eigen::MatrixXi DenseMap;
#endif

#if defined(ICD_VALGRIND) && defined(HAVE_VALGRIND_VALGRIND_H)
#include <valgrind/callgrind.h>
#else
#undef ICD_VALGRIND
#endif

#if (defined ICD_DEBUG || defined ICD_DEBUG_SETUP)
#include <iostream>
// only include Rcpp::Rcout if debugging: R won't like cout so we should not do
// this unless debugging. not so easy to get an iterator for any std container
// (no common parent class), without Boost
template<typename VT>
void printIt(std::vector<VT> v) {
  std::ostringstream o;
  for (auto i: v) o << i << " ";
  o << std::endl;
  Rcpp::Rcout << o.str();
  Rcpp::Rcout.flush();
}
//overloads (no common STL container class)
template <int VT>
void printIt(Rcpp::Vector<VT> v) {
  std::ostringstream o;
  for (auto i: v) o << i << " ";
  o << std::endl;
  Rcpp::Rcout << o.str();
  Rcpp::Rcout.flush();
}

template<typename ST>
void printIt(std::set<ST> v) {
  std::ostringstream o;
  for (auto i: v) o << i << " ";
  o << std::endl;
  Rcpp::Rcout << o.str();
  Rcpp::Rcout.flush();
}

template<typename MK, typename MV>
void printIt(std::map<MK,MV> v) {
  std::ostringstream o;
  for (auto i: v) o << i << " ";
  o << std::endl;
  Rcpp::Rcout << o.str();
  Rcpp::Rcout.flush();
}
#endif // end (defined ICD_DEBUG || defined ICD_DEBUG_SETUP)
#endif // LOCAL_H_

