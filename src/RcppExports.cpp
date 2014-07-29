// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_sda
NumericMatrix rcpp_sda(SEXP x, SEXP y, double pretrain_lr, double corruption_level, int pretraining_epochs, double finetune_lr, int finetune_epochs, SEXP hidden, SEXP test);
RcppExport SEXP RcppDL_rcpp_sda(SEXP xSEXP, SEXP ySEXP, SEXP pretrain_lrSEXP, SEXP corruption_levelSEXP, SEXP pretraining_epochsSEXP, SEXP finetune_lrSEXP, SEXP finetune_epochsSEXP, SEXP hiddenSEXP, SEXP testSEXP)
{
    BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        Rcpp::traits::input_parameter< SEXP >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type pretrain_lr(pretrain_lrSEXP );
        Rcpp::traits::input_parameter< double >::type corruption_level(corruption_levelSEXP );
        Rcpp::traits::input_parameter< int >::type pretraining_epochs(pretraining_epochsSEXP );
        Rcpp::traits::input_parameter< double >::type finetune_lr(finetune_lrSEXP );
        Rcpp::traits::input_parameter< int >::type finetune_epochs(finetune_epochsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type hidden(hiddenSEXP );
        Rcpp::traits::input_parameter< SEXP >::type test(testSEXP );
        NumericMatrix __result = rcpp_sda(x, y, pretrain_lr, corruption_level, pretraining_epochs, finetune_lr, finetune_epochs, hidden, test);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
    END_RCPP
}
