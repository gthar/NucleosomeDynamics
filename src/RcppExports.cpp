// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// contained
List contained(S4 a, S4 b);
RcppExport SEXP _NucDyn_contained(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type a(aSEXP);
    Rcpp::traits::input_parameter< S4 >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(contained(a, b));
    return rcpp_result_gen;
END_RCPP
}
// equals
List equals(S4 a, S4 b);
RcppExport SEXP _NucDyn_equals(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type a(aSEXP);
    Rcpp::traits::input_parameter< S4 >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(equals(a, b));
    return rcpp_result_gen;
END_RCPP
}
// find_subs
IntegerVector find_subs(IntegerVector subset);
RcppExport SEXP _NucDyn_find_subs(SEXP subsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type subset(subsetSEXP);
    rcpp_result_gen = Rcpp::wrap(find_subs(subset));
    return rcpp_result_gen;
END_RCPP
}
// find_abs_pos
IntegerVector find_abs_pos(IntegerVector idxs, IntegerVector xs, S4 sub_range, S4 whole_range);
RcppExport SEXP _NucDyn_find_abs_pos(SEXP idxsSEXP, SEXP xsSEXP, SEXP sub_rangeSEXP, SEXP whole_rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type idxs(idxsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< S4 >::type sub_range(sub_rangeSEXP);
    Rcpp::traits::input_parameter< S4 >::type whole_range(whole_rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(find_abs_pos(idxs, xs, sub_range, whole_range));
    return rcpp_result_gen;
END_RCPP
}
// get_pvals
NumericVector get_pvals(IntegerVector x, IntegerVector y);
RcppExport SEXP _NucDyn_get_pvals(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(get_pvals(x, y));
    return rcpp_result_gen;
END_RCPP
}
// equals_at_dist
List equals_at_dist(S4 x, S4 y, int max_dist);
RcppExport SEXP _NucDyn_equals_at_dist(SEXP xSEXP, SEXP ySEXP, SEXP max_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< S4 >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type max_dist(max_distSEXP);
    rcpp_result_gen = Rcpp::wrap(equals_at_dist(x, y, max_dist));
    return rcpp_result_gen;
END_RCPP
}
// same_end
List same_end(S4 a, S4 b);
RcppExport SEXP _NucDyn_same_end(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type a(aSEXP);
    Rcpp::traits::input_parameter< S4 >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(same_end(a, b));
    return rcpp_result_gen;
END_RCPP
}
// same_start
List same_start(S4 a, S4 b);
RcppExport SEXP _NucDyn_same_start(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type a(aSEXP);
    Rcpp::traits::input_parameter< S4 >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(same_start(a, b));
    return rcpp_result_gen;
END_RCPP
}
// do_shifts
List do_shifts(S4 ra, S4 rb, int max_distance, int min_distance);
RcppExport SEXP _NucDyn_do_shifts(SEXP raSEXP, SEXP rbSEXP, SEXP max_distanceSEXP, SEXP min_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type ra(raSEXP);
    Rcpp::traits::input_parameter< S4 >::type rb(rbSEXP);
    Rcpp::traits::input_parameter< int >::type max_distance(max_distanceSEXP);
    Rcpp::traits::input_parameter< int >::type min_distance(min_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(do_shifts(ra, rb, max_distance, min_distance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NucDyn_contained", (DL_FUNC) &_NucDyn_contained, 2},
    {"_NucDyn_equals", (DL_FUNC) &_NucDyn_equals, 2},
    {"_NucDyn_find_subs", (DL_FUNC) &_NucDyn_find_subs, 1},
    {"_NucDyn_find_abs_pos", (DL_FUNC) &_NucDyn_find_abs_pos, 4},
    {"_NucDyn_get_pvals", (DL_FUNC) &_NucDyn_get_pvals, 2},
    {"_NucDyn_equals_at_dist", (DL_FUNC) &_NucDyn_equals_at_dist, 3},
    {"_NucDyn_same_end", (DL_FUNC) &_NucDyn_same_end, 2},
    {"_NucDyn_same_start", (DL_FUNC) &_NucDyn_same_start, 2},
    {"_NucDyn_do_shifts", (DL_FUNC) &_NucDyn_do_shifts, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_NucDyn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
