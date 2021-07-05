// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// adapt_dyn_cpp
arma::mat adapt_dyn_cpp(const uint32_t& n_reps, const std::vector<arma::vec>& V0, const std::vector<double>& N0, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D, const double& sigma_V0, const double& sigma_N, const std::vector<double>& sigma_V, const double& max_t, const double& min_N, const double& mut_sd, const double& mut_prob, const bool& show_progress, const uint32_t& max_clones, const uint32_t& save_every, const uint32_t& n_threads);
RcppExport SEXP _sauron_adapt_dyn_cpp(SEXP n_repsSEXP, SEXP V0SEXP, SEXP N0SEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP, SEXP sigma_V0SEXP, SEXP sigma_NSEXP, SEXP sigma_VSEXP, SEXP max_tSEXP, SEXP min_NSEXP, SEXP mut_sdSEXP, SEXP mut_probSEXP, SEXP show_progressSEXP, SEXP max_clonesSEXP, SEXP save_everySEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type n_reps(n_repsSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::vec>& >::type V0(V0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N0(N0SEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_V0(sigma_V0SEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_N(sigma_NSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type sigma_V(sigma_VSEXP);
    Rcpp::traits::input_parameter< const double& >::type max_t(max_tSEXP);
    Rcpp::traits::input_parameter< const double& >::type min_N(min_NSEXP);
    Rcpp::traits::input_parameter< const double& >::type mut_sd(mut_sdSEXP);
    Rcpp::traits::input_parameter< const double& >::type mut_prob(mut_probSEXP);
    Rcpp::traits::input_parameter< const bool& >::type show_progress(show_progressSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type max_clones(max_clonesSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type save_every(save_everySEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(adapt_dyn_cpp(n_reps, V0, N0, f, a0, C, r0, D, sigma_V0, sigma_N, sigma_V, max_t, min_N, mut_sd, mut_prob, show_progress, max_clones, save_every, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// sel_str_cpp
arma::mat sel_str_cpp(const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_sel_str_cpp(SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(sel_str_cpp(V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// dVi_dVi_cpp
arma::mat dVi_dVi_cpp(const uint32_t& i, const arma::mat& V, const double& Omega, const arma::mat& C, const double& f, const double& a0, const double& add_var);
RcppExport SEXP _sauron_dVi_dVi_cpp(SEXP iSEXP, SEXP VSEXP, SEXP OmegaSEXP, SEXP CSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP add_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const double& >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double& >::type add_var(add_varSEXP);
    rcpp_result_gen = Rcpp::wrap(dVi_dVi_cpp(i, V, Omega, C, f, a0, add_var));
    return rcpp_result_gen;
END_RCPP
}
// dVi_dVk_cpp
arma::mat dVi_dVk_cpp(const uint32_t& i, const uint32_t& k, const std::vector<double>& N, const arma::mat& V, const arma::mat& D, const double& a0, const double& add_var);
RcppExport SEXP _sauron_dVi_dVk_cpp(SEXP iSEXP, SEXP kSEXP, SEXP NSEXP, SEXP VSEXP, SEXP DSEXP, SEXP a0SEXP, SEXP add_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double& >::type add_var(add_varSEXP);
    rcpp_result_gen = Rcpp::wrap(dVi_dVk_cpp(i, k, N, V, D, a0, add_var));
    return rcpp_result_gen;
END_RCPP
}
// dVi_dNi_cpp
arma::mat dVi_dNi_cpp(const uint32_t& i, const arma::mat& V, const double& a0, const double& add_var);
RcppExport SEXP _sauron_dVi_dNi_cpp(SEXP iSEXP, SEXP VSEXP, SEXP a0SEXP, SEXP add_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double& >::type add_var(add_varSEXP);
    rcpp_result_gen = Rcpp::wrap(dVi_dNi_cpp(i, V, a0, add_var));
    return rcpp_result_gen;
END_RCPP
}
// dVi_dNk_cpp
arma::mat dVi_dNk_cpp(const uint32_t& i, const uint32_t& k, const arma::mat& V, const arma::mat& D, const double& a0, const double& add_var);
RcppExport SEXP _sauron_dVi_dNk_cpp(SEXP iSEXP, SEXP kSEXP, SEXP VSEXP, SEXP DSEXP, SEXP a0SEXP, SEXP add_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double& >::type add_var(add_varSEXP);
    rcpp_result_gen = Rcpp::wrap(dVi_dNk_cpp(i, k, V, D, a0, add_var));
    return rcpp_result_gen;
END_RCPP
}
// dNi_dVi_cpp
arma::mat dNi_dVi_cpp(const uint32_t& i, const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_dNi_dVi_cpp(SEXP iSEXP, SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(dNi_dVi_cpp(i, V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// dNi_dVk_cpp
arma::mat dNi_dVk_cpp(const uint32_t& i, const uint32_t& k, const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_dNi_dVk_cpp(SEXP iSEXP, SEXP kSEXP, SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(dNi_dVk_cpp(i, k, V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// dNi_dNi_cpp
arma::mat dNi_dNi_cpp(const uint32_t& i, const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_dNi_dNi_cpp(SEXP iSEXP, SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(dNi_dNi_cpp(i, V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// dNi_dNk_cpp
arma::mat dNi_dNk_cpp(const uint32_t& i, const uint32_t& k, const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_dNi_dNk_cpp(SEXP iSEXP, SEXP kSEXP, SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(dNi_dNk_cpp(i, k, V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// jacobian_cpp
arma::mat jacobian_cpp(const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const double& r0, const arma::mat& D, const arma::mat& C, const arma::vec& add_var, const bool& evo_only);
RcppExport SEXP _sauron_jacobian_cpp(SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP r0SEXP, SEXP DSEXP, SEXP CSEXP, SEXP add_varSEXP, SEXP evo_onlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type add_var(add_varSEXP);
    Rcpp::traits::input_parameter< const bool& >::type evo_only(evo_onlySEXP);
    rcpp_result_gen = Rcpp::wrap(jacobian_cpp(V, N, f, a0, r0, D, C, add_var, evo_only));
    return rcpp_result_gen;
END_RCPP
}
// unq_spp_cpp
arma::uvec unq_spp_cpp(const std::vector<arma::vec>& V, double precision);
RcppExport SEXP _sauron_unq_spp_cpp(SEXP VSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<arma::vec>& >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(unq_spp_cpp(V, precision));
    return rcpp_result_gen;
END_RCPP
}
// group_spp_cpp
IntegerVector group_spp_cpp(const std::vector<arma::vec>& V, double precision);
RcppExport SEXP _sauron_group_spp_cpp(SEXP VSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<arma::vec>& >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(group_spp_cpp(V, precision));
    return rcpp_result_gen;
END_RCPP
}
// quant_gen_cpp
arma::mat quant_gen_cpp(const uint32_t& n_reps, const std::deque<arma::vec>& V0, const std::deque<arma::vec>& Vp0, const std::deque<double>& N0, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D, const std::deque<double>& add_var, const double& sigma_V0, const double& sigma_N, const std::vector<double>& sigma_V, const uint32_t& spp_gap_t, const uint32_t& final_t, const double& min_N, const uint32_t& save_every, const bool& show_progress, const uint32_t& n_threads);
RcppExport SEXP _sauron_quant_gen_cpp(SEXP n_repsSEXP, SEXP V0SEXP, SEXP Vp0SEXP, SEXP N0SEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP, SEXP add_varSEXP, SEXP sigma_V0SEXP, SEXP sigma_NSEXP, SEXP sigma_VSEXP, SEXP spp_gap_tSEXP, SEXP final_tSEXP, SEXP min_NSEXP, SEXP save_everySEXP, SEXP show_progressSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type n_reps(n_repsSEXP);
    Rcpp::traits::input_parameter< const std::deque<arma::vec>& >::type V0(V0SEXP);
    Rcpp::traits::input_parameter< const std::deque<arma::vec>& >::type Vp0(Vp0SEXP);
    Rcpp::traits::input_parameter< const std::deque<double>& >::type N0(N0SEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const std::deque<double>& >::type add_var(add_varSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_V0(sigma_V0SEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_N(sigma_NSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type sigma_V(sigma_VSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type spp_gap_t(spp_gap_tSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type final_t(final_tSEXP);
    Rcpp::traits::input_parameter< const double& >::type min_N(min_NSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type save_every(save_everySEXP);
    Rcpp::traits::input_parameter< const bool& >::type show_progress(show_progressSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(quant_gen_cpp(n_reps, V0, Vp0, N0, f, a0, C, r0, D, add_var, sigma_V0, sigma_N, sigma_V, spp_gap_t, final_t, min_N, save_every, show_progress, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// trunc_rnorm_cpp
std::vector<double> trunc_rnorm_cpp(const uint32_t& N, const double& mu, const double& sigma);
RcppExport SEXP _sauron_trunc_rnorm_cpp(SEXP NSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(trunc_rnorm_cpp(N, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// trunc_rnorm_mu_cpp
std::vector<double> trunc_rnorm_mu_cpp(const std::vector<double>& mu, const double& sigma);
RcppExport SEXP _sauron_trunc_rnorm_mu_cpp(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(trunc_rnorm_mu_cpp(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// trunc_rnorm_sigma_cpp
std::vector<double> trunc_rnorm_sigma_cpp(const double& mu, const std::vector<double>& sigma);
RcppExport SEXP _sauron_trunc_rnorm_sigma_cpp(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(trunc_rnorm_sigma_cpp(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// trunc_rnorm_mu_sigma_cpp
std::vector<double> trunc_rnorm_mu_sigma_cpp(const std::vector<double>& mu, const std::vector<double>& sigma);
RcppExport SEXP _sauron_trunc_rnorm_mu_sigma_cpp(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(trunc_rnorm_mu_sigma_cpp(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// F_t_cpp
arma::vec F_t_cpp(const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_F_t_cpp(SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(F_t_cpp(V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// F_it_cpp
double F_it_cpp(const uint32_t& i, const arma::mat& V, const std::vector<double>& N, const double& f, const double& a0, const arma::mat& C, const double& r0, const arma::mat& D);
RcppExport SEXP _sauron_F_it_cpp(SEXP iSEXP, SEXP VSEXP, SEXP NSEXP, SEXP fSEXP, SEXP a0SEXP, SEXP CSEXP, SEXP r0SEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(F_it_cpp(i, V, N, f, a0, C, r0, D));
    return rcpp_result_gen;
END_RCPP
}
// using_openmp
bool using_openmp();
RcppExport SEXP _sauron_using_openmp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(using_openmp());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sauron_adapt_dyn_cpp", (DL_FUNC) &_sauron_adapt_dyn_cpp, 19},
    {"_sauron_sel_str_cpp", (DL_FUNC) &_sauron_sel_str_cpp, 7},
    {"_sauron_dVi_dVi_cpp", (DL_FUNC) &_sauron_dVi_dVi_cpp, 7},
    {"_sauron_dVi_dVk_cpp", (DL_FUNC) &_sauron_dVi_dVk_cpp, 7},
    {"_sauron_dVi_dNi_cpp", (DL_FUNC) &_sauron_dVi_dNi_cpp, 4},
    {"_sauron_dVi_dNk_cpp", (DL_FUNC) &_sauron_dVi_dNk_cpp, 6},
    {"_sauron_dNi_dVi_cpp", (DL_FUNC) &_sauron_dNi_dVi_cpp, 8},
    {"_sauron_dNi_dVk_cpp", (DL_FUNC) &_sauron_dNi_dVk_cpp, 9},
    {"_sauron_dNi_dNi_cpp", (DL_FUNC) &_sauron_dNi_dNi_cpp, 8},
    {"_sauron_dNi_dNk_cpp", (DL_FUNC) &_sauron_dNi_dNk_cpp, 9},
    {"_sauron_jacobian_cpp", (DL_FUNC) &_sauron_jacobian_cpp, 9},
    {"_sauron_unq_spp_cpp", (DL_FUNC) &_sauron_unq_spp_cpp, 2},
    {"_sauron_group_spp_cpp", (DL_FUNC) &_sauron_group_spp_cpp, 2},
    {"_sauron_quant_gen_cpp", (DL_FUNC) &_sauron_quant_gen_cpp, 19},
    {"_sauron_trunc_rnorm_cpp", (DL_FUNC) &_sauron_trunc_rnorm_cpp, 3},
    {"_sauron_trunc_rnorm_mu_cpp", (DL_FUNC) &_sauron_trunc_rnorm_mu_cpp, 2},
    {"_sauron_trunc_rnorm_sigma_cpp", (DL_FUNC) &_sauron_trunc_rnorm_sigma_cpp, 2},
    {"_sauron_trunc_rnorm_mu_sigma_cpp", (DL_FUNC) &_sauron_trunc_rnorm_mu_sigma_cpp, 2},
    {"_sauron_F_t_cpp", (DL_FUNC) &_sauron_F_t_cpp, 7},
    {"_sauron_F_it_cpp", (DL_FUNC) &_sauron_F_it_cpp, 8},
    {"_sauron_using_openmp", (DL_FUNC) &_sauron_using_openmp, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_sauron(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
