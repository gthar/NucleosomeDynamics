# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

contained <- function(a, b) {
    .Call('_NucDyn_contained', PACKAGE = 'NucDyn', a, b)
}

equals <- function(a, b) {
    .Call('_NucDyn_equals', PACKAGE = 'NucDyn', a, b)
}

find_subs <- function(subset) {
    .Call('_NucDyn_find_subs', PACKAGE = 'NucDyn', subset)
}

find_abs_pos <- function(idxs, xs, sub_range, whole_range) {
    .Call('_NucDyn_find_abs_pos', PACKAGE = 'NucDyn', idxs, xs, sub_range, whole_range)
}

get_pvals <- function(x, y) {
    .Call('_NucDyn_get_pvals', PACKAGE = 'NucDyn', x, y)
}

equals_at_dist <- function(x, y, max_dist = 5L) {
    .Call('_NucDyn_equals_at_dist', PACKAGE = 'NucDyn', x, y, max_dist)
}

same_end <- function(a, b) {
    .Call('_NucDyn_same_end', PACKAGE = 'NucDyn', a, b)
}

same_start <- function(a, b) {
    .Call('_NucDyn_same_start', PACKAGE = 'NucDyn', a, b)
}

do_shifts <- function(ra, rb, max_distance = 74L, min_distance = 10L) {
    .Call('_NucDyn_do_shifts', PACKAGE = 'NucDyn', ra, rb, max_distance, min_distance)
}

