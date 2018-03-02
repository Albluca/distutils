// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// PartialDistance
NumericMatrix PartialDistance(NumericMatrix Ar, NumericMatrix Br);
RcppExport SEXP _distutils_PartialDistance(SEXP ArSEXP, SEXP BrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Br(BrSEXP);
    rcpp_result_gen = Rcpp::wrap(PartialDistance(Ar, Br));
    return rcpp_result_gen;
END_RCPP
}
// Partition
List Partition(NumericMatrix Ar, NumericMatrix Br, NumericVector SquaredAr);
RcppExport SEXP _distutils_Partition(SEXP ArSEXP, SEXP BrSEXP, SEXP SquaredArSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Br(BrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type SquaredAr(SquaredArSEXP);
    rcpp_result_gen = Rcpp::wrap(Partition(Ar, Br, SquaredAr));
    return rcpp_result_gen;
END_RCPP
}
// ElasticEnergy
List ElasticEnergy(NumericMatrix X, NumericMatrix NodePositions, NumericMatrix ElasticMatrix, NumericVector Dists);
RcppExport SEXP _distutils_ElasticEnergy(SEXP XSEXP, SEXP NodePositionsSEXP, SEXP ElasticMatrixSEXP, SEXP DistsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NodePositions(NodePositionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ElasticMatrix(ElasticMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Dists(DistsSEXP);
    rcpp_result_gen = Rcpp::wrap(ElasticEnergy(X, NodePositions, ElasticMatrix, Dists));
    return rcpp_result_gen;
END_RCPP
}
// ElasticEnergy_V0
List ElasticEnergy_V0(NumericMatrix X, NumericMatrix NodePositions, NumericMatrix ElasticMatrix, NumericVector Dists);
RcppExport SEXP _distutils_ElasticEnergy_V0(SEXP XSEXP, SEXP NodePositionsSEXP, SEXP ElasticMatrixSEXP, SEXP DistsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NodePositions(NodePositionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ElasticMatrix(ElasticMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Dists(DistsSEXP);
    rcpp_result_gen = Rcpp::wrap(ElasticEnergy_V0(X, NodePositions, ElasticMatrix, Dists));
    return rcpp_result_gen;
END_RCPP
}
// PenalizedElasticEnergy
List PenalizedElasticEnergy(NumericMatrix X, NumericMatrix NodePositions, NumericMatrix ElasticMatrix, NumericVector Dists, double alpha, double beta);
RcppExport SEXP _distutils_PenalizedElasticEnergy(SEXP XSEXP, SEXP NodePositionsSEXP, SEXP ElasticMatrixSEXP, SEXP DistsSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NodePositions(NodePositionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ElasticMatrix(ElasticMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Dists(DistsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(PenalizedElasticEnergy(X, NodePositions, ElasticMatrix, Dists, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// ComputeWeightedAverage
List ComputeWeightedAverage(NumericMatrix X, IntegerVector partition, NumericVector PointWeights, unsigned int NumberOfNodes);
RcppExport SEXP _distutils_ComputeWeightedAverage(SEXP XSEXP, SEXP partitionSEXP, SEXP PointWeightsSEXP, SEXP NumberOfNodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type partition(partitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PointWeights(PointWeightsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type NumberOfNodes(NumberOfNodesSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeWeightedAverage(X, partition, PointWeights, NumberOfNodes));
    return rcpp_result_gen;
END_RCPP
}
// FitGraph2DataGivenPartition
arma::mat FitGraph2DataGivenPartition(NumericMatrix X, NumericVector PointWeights, NumericMatrix NodePositions, NumericMatrix SpringLaplacianMatrix, IntegerVector partition, bool FastSolve);
RcppExport SEXP _distutils_FitGraph2DataGivenPartition(SEXP XSEXP, SEXP PointWeightsSEXP, SEXP NodePositionsSEXP, SEXP SpringLaplacianMatrixSEXP, SEXP partitionSEXP, SEXP FastSolveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PointWeights(PointWeightsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NodePositions(NodePositionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SpringLaplacianMatrix(SpringLaplacianMatrixSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type partition(partitionSEXP);
    Rcpp::traits::input_parameter< bool >::type FastSolve(FastSolveSEXP);
    rcpp_result_gen = Rcpp::wrap(FitGraph2DataGivenPartition(X, PointWeights, NodePositions, SpringLaplacianMatrix, partition, FastSolve));
    return rcpp_result_gen;
END_RCPP
}
// RadialCount
List RadialCount(NumericMatrix Ar, NumericVector Pr, NumericVector SquaredAr, NumericVector DVect);
RcppExport SEXP _distutils_RadialCount(SEXP ArSEXP, SEXP PrSEXP, SEXP SquaredArSEXP, SEXP DVectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pr(PrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type SquaredAr(SquaredArSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type DVect(DVectSEXP);
    rcpp_result_gen = Rcpp::wrap(RadialCount(Ar, Pr, SquaredAr, DVect));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distutils_PartialDistance", (DL_FUNC) &_distutils_PartialDistance, 2},
    {"_distutils_Partition", (DL_FUNC) &_distutils_Partition, 3},
    {"_distutils_ElasticEnergy", (DL_FUNC) &_distutils_ElasticEnergy, 4},
    {"_distutils_ElasticEnergy_V0", (DL_FUNC) &_distutils_ElasticEnergy_V0, 4},
    {"_distutils_PenalizedElasticEnergy", (DL_FUNC) &_distutils_PenalizedElasticEnergy, 6},
    {"_distutils_ComputeWeightedAverage", (DL_FUNC) &_distutils_ComputeWeightedAverage, 4},
    {"_distutils_FitGraph2DataGivenPartition", (DL_FUNC) &_distutils_FitGraph2DataGivenPartition, 6},
    {"_distutils_RadialCount", (DL_FUNC) &_distutils_RadialCount, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_distutils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
