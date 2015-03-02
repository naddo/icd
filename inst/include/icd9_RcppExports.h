// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __icd9_RcppExports_h__
#define __icd9_RcppExports_h__

#include <Rcpp.h>

namespace icd9 {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("icd9", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("icd9", "icd9_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in icd9");
            }
        }
    }

    inline SEXP icd9ComorbidShortCpp(const SEXP& icd9df, const List& icd9Mapping, const std::string visitId = "visitId", const std::string icd9Field = "icd9", const int threads = 8, const int chunkSize = 256, const int ompChunkSize = 1, bool aggregate = true) {
        typedef SEXP(*Ptr_icd9ComorbidShortCpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd9ComorbidShortCpp p_icd9ComorbidShortCpp = NULL;
        if (p_icd9ComorbidShortCpp == NULL) {
            validateSignature("SEXP(*icd9ComorbidShortCpp)(const SEXP&,const List&,const std::string,const std::string,const int,const int,const int,bool)");
            p_icd9ComorbidShortCpp = (Ptr_icd9ComorbidShortCpp)R_GetCCallable("icd9", "icd9_icd9ComorbidShortCpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ComorbidShortCpp(Rcpp::wrap(icd9df), Rcpp::wrap(icd9Mapping), Rcpp::wrap(visitId), Rcpp::wrap(icd9Field), Rcpp::wrap(threads), Rcpp::wrap(chunkSize), Rcpp::wrap(ompChunkSize), Rcpp::wrap(aggregate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<SEXP >(__result);
    }

    inline CharacterVector icd9MajMinToCode(const CharacterVector major, const CharacterVector minor, bool isShort) {
        typedef SEXP(*Ptr_icd9MajMinToCode)(SEXP,SEXP,SEXP);
        static Ptr_icd9MajMinToCode p_icd9MajMinToCode = NULL;
        if (p_icd9MajMinToCode == NULL) {
            validateSignature("CharacterVector(*icd9MajMinToCode)(const CharacterVector,const CharacterVector,bool)");
            p_icd9MajMinToCode = (Ptr_icd9MajMinToCode)R_GetCCallable("icd9", "icd9_icd9MajMinToCode");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToCode(Rcpp::wrap(major), Rcpp::wrap(minor), Rcpp::wrap(isShort));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9MajMinToShort(const CharacterVector major, const CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToShort)(SEXP,SEXP);
        static Ptr_icd9MajMinToShort p_icd9MajMinToShort = NULL;
        if (p_icd9MajMinToShort == NULL) {
            validateSignature("CharacterVector(*icd9MajMinToShort)(const CharacterVector,const CharacterVector)");
            p_icd9MajMinToShort = (Ptr_icd9MajMinToShort)R_GetCCallable("icd9", "icd9_icd9MajMinToShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToShort(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9MajMinToDecimal(const CharacterVector major, const CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToDecimal)(SEXP,SEXP);
        static Ptr_icd9MajMinToDecimal p_icd9MajMinToDecimal = NULL;
        if (p_icd9MajMinToDecimal == NULL) {
            validateSignature("CharacterVector(*icd9MajMinToDecimal)(const CharacterVector,const CharacterVector)");
            p_icd9MajMinToDecimal = (Ptr_icd9MajMinToDecimal)R_GetCCallable("icd9", "icd9_icd9MajMinToDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToDecimal(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9PartsToShort(const List parts) {
        typedef SEXP(*Ptr_icd9PartsToShort)(SEXP);
        static Ptr_icd9PartsToShort p_icd9PartsToShort = NULL;
        if (p_icd9PartsToShort == NULL) {
            validateSignature("CharacterVector(*icd9PartsToShort)(const List)");
            p_icd9PartsToShort = (Ptr_icd9PartsToShort)R_GetCCallable("icd9", "icd9_icd9PartsToShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9PartsToShort(Rcpp::wrap(parts));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9PartsToDecimal(const List parts) {
        typedef SEXP(*Ptr_icd9PartsToDecimal)(SEXP);
        static Ptr_icd9PartsToDecimal p_icd9PartsToDecimal = NULL;
        if (p_icd9PartsToDecimal == NULL) {
            validateSignature("CharacterVector(*icd9PartsToDecimal)(const List)");
            p_icd9PartsToDecimal = (Ptr_icd9PartsToDecimal)R_GetCCallable("icd9", "icd9_icd9PartsToDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9PartsToDecimal(Rcpp::wrap(parts));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline List icd9MajMinToParts(const CharacterVector major, const CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToParts)(SEXP,SEXP);
        static Ptr_icd9MajMinToParts p_icd9MajMinToParts = NULL;
        if (p_icd9MajMinToParts == NULL) {
            validateSignature("List(*icd9MajMinToParts)(const CharacterVector,const CharacterVector)");
            p_icd9MajMinToParts = (Ptr_icd9MajMinToParts)R_GetCCallable("icd9", "icd9_icd9MajMinToParts");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToParts(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline List icd9MajMinToParts_list(const CharacterVector major, const CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToParts_list)(SEXP,SEXP);
        static Ptr_icd9MajMinToParts_list p_icd9MajMinToParts_list = NULL;
        if (p_icd9MajMinToParts_list == NULL) {
            validateSignature("List(*icd9MajMinToParts_list)(const CharacterVector,const CharacterVector)");
            p_icd9MajMinToParts_list = (Ptr_icd9MajMinToParts_list)R_GetCCallable("icd9", "icd9_icd9MajMinToParts_list");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToParts_list(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline List icd9ShortToParts(const CharacterVector icd9Short, const String minorEmpty = "") {
        typedef SEXP(*Ptr_icd9ShortToParts)(SEXP,SEXP);
        static Ptr_icd9ShortToParts p_icd9ShortToParts = NULL;
        if (p_icd9ShortToParts == NULL) {
            validateSignature("List(*icd9ShortToParts)(const CharacterVector,const String)");
            p_icd9ShortToParts = (Ptr_icd9ShortToParts)R_GetCCallable("icd9", "icd9_icd9ShortToParts");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToParts(Rcpp::wrap(icd9Short), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline List icd9DecimalToParts(const CharacterVector icd9Decimal, const String minorEmpty = "") {
        typedef SEXP(*Ptr_icd9DecimalToParts)(SEXP,SEXP);
        static Ptr_icd9DecimalToParts p_icd9DecimalToParts = NULL;
        if (p_icd9DecimalToParts == NULL) {
            validateSignature("List(*icd9DecimalToParts)(const CharacterVector,const String)");
            p_icd9DecimalToParts = (Ptr_icd9DecimalToParts)R_GetCCallable("icd9", "icd9_icd9DecimalToParts");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9DecimalToParts(Rcpp::wrap(icd9Decimal), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline CharacterVector icd9ShortToDecimal(const CharacterVector icd9Short) {
        typedef SEXP(*Ptr_icd9ShortToDecimal)(SEXP);
        static Ptr_icd9ShortToDecimal p_icd9ShortToDecimal = NULL;
        if (p_icd9ShortToDecimal == NULL) {
            validateSignature("CharacterVector(*icd9ShortToDecimal)(const CharacterVector)");
            p_icd9ShortToDecimal = (Ptr_icd9ShortToDecimal)R_GetCCallable("icd9", "icd9_icd9ShortToDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToDecimal(Rcpp::wrap(icd9Short));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9DecimalToShort(const CharacterVector icd9Decimal) {
        typedef SEXP(*Ptr_icd9DecimalToShort)(SEXP);
        static Ptr_icd9DecimalToShort p_icd9DecimalToShort = NULL;
        if (p_icd9DecimalToShort == NULL) {
            validateSignature("CharacterVector(*icd9DecimalToShort)(const CharacterVector)");
            p_icd9DecimalToShort = (Ptr_icd9DecimalToShort)R_GetCCallable("icd9", "icd9_icd9DecimalToShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9DecimalToShort(Rcpp::wrap(icd9Decimal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9GetMajor(const CharacterVector icd9, const bool isShort) {
        typedef SEXP(*Ptr_icd9GetMajor)(SEXP,SEXP);
        static Ptr_icd9GetMajor p_icd9GetMajor = NULL;
        if (p_icd9GetMajor == NULL) {
            validateSignature("CharacterVector(*icd9GetMajor)(const CharacterVector,const bool)");
            p_icd9GetMajor = (Ptr_icd9GetMajor)R_GetCCallable("icd9", "icd9_icd9GetMajor");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9GetMajor(Rcpp::wrap(icd9), Rcpp::wrap(isShort));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline bool icd9IsASingleV(std::string s) {
        typedef SEXP(*Ptr_icd9IsASingleV)(SEXP);
        static Ptr_icd9IsASingleV p_icd9IsASingleV = NULL;
        if (p_icd9IsASingleV == NULL) {
            validateSignature("bool(*icd9IsASingleV)(std::string)");
            p_icd9IsASingleV = (Ptr_icd9IsASingleV)R_GetCCallable("icd9", "icd9_icd9IsASingleV");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsASingleV(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<bool >(__result);
    }

    inline bool icd9IsASingleE(std::string s) {
        typedef SEXP(*Ptr_icd9IsASingleE)(SEXP);
        static Ptr_icd9IsASingleE p_icd9IsASingleE = NULL;
        if (p_icd9IsASingleE == NULL) {
            validateSignature("bool(*icd9IsASingleE)(std::string)");
            p_icd9IsASingleE = (Ptr_icd9IsASingleE)R_GetCCallable("icd9", "icd9_icd9IsASingleE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsASingleE(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<bool >(__result);
    }

    inline bool icd9IsASingleVE(std::string s) {
        typedef SEXP(*Ptr_icd9IsASingleVE)(SEXP);
        static Ptr_icd9IsASingleVE p_icd9IsASingleVE = NULL;
        if (p_icd9IsASingleVE == NULL) {
            validateSignature("bool(*icd9IsASingleVE)(std::string)");
            p_icd9IsASingleVE = (Ptr_icd9IsASingleVE)R_GetCCallable("icd9", "icd9_icd9IsASingleVE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsASingleVE(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<bool >(__result);
    }

    inline std::vector<bool> icd9IsV(std::vector< std::string > icd9) {
        typedef SEXP(*Ptr_icd9IsV)(SEXP);
        static Ptr_icd9IsV p_icd9IsV = NULL;
        if (p_icd9IsV == NULL) {
            validateSignature("std::vector<bool>(*icd9IsV)(std::vector< std::string >)");
            p_icd9IsV = (Ptr_icd9IsV)R_GetCCallable("icd9", "icd9_icd9IsV");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsV(Rcpp::wrap(icd9));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9IsE(std::vector< std::string > icd9) {
        typedef SEXP(*Ptr_icd9IsE)(SEXP);
        static Ptr_icd9IsE p_icd9IsE = NULL;
        if (p_icd9IsE == NULL) {
            validateSignature("std::vector<bool>(*icd9IsE)(std::vector< std::string >)");
            p_icd9IsE = (Ptr_icd9IsE)R_GetCCallable("icd9", "icd9_icd9IsE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsE(Rcpp::wrap(icd9));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9IsVE(std::vector< std::string > icd9) {
        typedef SEXP(*Ptr_icd9IsVE)(SEXP);
        static Ptr_icd9IsVE p_icd9IsVE = NULL;
        if (p_icd9IsVE == NULL) {
            validateSignature("std::vector<bool>(*icd9IsVE)(std::vector< std::string >)");
            p_icd9IsVE = (Ptr_icd9IsVE)R_GetCCallable("icd9", "icd9_icd9IsVE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsVE(Rcpp::wrap(icd9));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9IsN(std::vector< std::string > icd9) {
        typedef SEXP(*Ptr_icd9IsN)(SEXP);
        static Ptr_icd9IsN p_icd9IsN = NULL;
        if (p_icd9IsN == NULL) {
            validateSignature("std::vector<bool>(*icd9IsN)(std::vector< std::string >)");
            p_icd9IsN = (Ptr_icd9IsN)R_GetCCallable("icd9", "icd9_icd9IsN");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsN(Rcpp::wrap(icd9));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline CharacterVector icd9LongToWideMatrixByMap(const SEXP& icd9df, const std::string visitId = "visitId", const std::string icd9Field = "icd9") {
        typedef SEXP(*Ptr_icd9LongToWideMatrixByMap)(SEXP,SEXP,SEXP);
        static Ptr_icd9LongToWideMatrixByMap p_icd9LongToWideMatrixByMap = NULL;
        if (p_icd9LongToWideMatrixByMap == NULL) {
            validateSignature("CharacterVector(*icd9LongToWideMatrixByMap)(const SEXP&,const std::string,const std::string)");
            p_icd9LongToWideMatrixByMap = (Ptr_icd9LongToWideMatrixByMap)R_GetCCallable("icd9", "icd9_icd9LongToWideMatrixByMap");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9LongToWideMatrixByMap(Rcpp::wrap(icd9df), Rcpp::wrap(visitId), Rcpp::wrap(icd9Field));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9LongToWide(const SEXP& icd9df, const std::string visitId = "visitId", const std::string icd9Field = "icd9", bool aggregate = true) {
        typedef SEXP(*Ptr_icd9LongToWide)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd9LongToWide p_icd9LongToWide = NULL;
        if (p_icd9LongToWide == NULL) {
            validateSignature("CharacterVector(*icd9LongToWide)(const SEXP&,const std::string,const std::string,bool)");
            p_icd9LongToWide = (Ptr_icd9LongToWide)R_GetCCallable("icd9", "icd9_icd9LongToWide");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9LongToWide(Rcpp::wrap(icd9df), Rcpp::wrap(visitId), Rcpp::wrap(icd9Field), Rcpp::wrap(aggregate));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline String icd9AddLeadingZeroesMajorSingle(String major) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesMajorSingle)(SEXP);
        static Ptr_icd9AddLeadingZeroesMajorSingle p_icd9AddLeadingZeroesMajorSingle = NULL;
        if (p_icd9AddLeadingZeroesMajorSingle == NULL) {
            validateSignature("String(*icd9AddLeadingZeroesMajorSingle)(String)");
            p_icd9AddLeadingZeroesMajorSingle = (Ptr_icd9AddLeadingZeroesMajorSingle)R_GetCCallable("icd9", "icd9_icd9AddLeadingZeroesMajorSingle");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesMajorSingle(Rcpp::wrap(major));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<String >(__result);
    }

    inline CharacterVector icd9AddLeadingZeroes(CharacterVector icd9, bool isShort) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroes)(SEXP,SEXP);
        static Ptr_icd9AddLeadingZeroes p_icd9AddLeadingZeroes = NULL;
        if (p_icd9AddLeadingZeroes == NULL) {
            validateSignature("CharacterVector(*icd9AddLeadingZeroes)(CharacterVector,bool)");
            p_icd9AddLeadingZeroes = (Ptr_icd9AddLeadingZeroes)R_GetCCallable("icd9", "icd9_icd9AddLeadingZeroes");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroes(Rcpp::wrap(icd9), Rcpp::wrap(isShort));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9AddLeadingZeroesShort(CharacterVector icd9Short) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesShort)(SEXP);
        static Ptr_icd9AddLeadingZeroesShort p_icd9AddLeadingZeroesShort = NULL;
        if (p_icd9AddLeadingZeroesShort == NULL) {
            validateSignature("CharacterVector(*icd9AddLeadingZeroesShort)(CharacterVector)");
            p_icd9AddLeadingZeroesShort = (Ptr_icd9AddLeadingZeroesShort)R_GetCCallable("icd9", "icd9_icd9AddLeadingZeroesShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesShort(Rcpp::wrap(icd9Short));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9AddLeadingZeroesDecimal(CharacterVector icd9Decimal) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesDecimal)(SEXP);
        static Ptr_icd9AddLeadingZeroesDecimal p_icd9AddLeadingZeroesDecimal = NULL;
        if (p_icd9AddLeadingZeroesDecimal == NULL) {
            validateSignature("CharacterVector(*icd9AddLeadingZeroesDecimal)(CharacterVector)");
            p_icd9AddLeadingZeroesDecimal = (Ptr_icd9AddLeadingZeroesDecimal)R_GetCCallable("icd9", "icd9_icd9AddLeadingZeroesDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesDecimal(Rcpp::wrap(icd9Decimal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9AddLeadingZeroesMajor(CharacterVector major) {
        typedef SEXP(*Ptr_icd9AddLeadingZeroesMajor)(SEXP);
        static Ptr_icd9AddLeadingZeroesMajor p_icd9AddLeadingZeroesMajor = NULL;
        if (p_icd9AddLeadingZeroesMajor == NULL) {
            validateSignature("CharacterVector(*icd9AddLeadingZeroesMajor)(CharacterVector)");
            p_icd9AddLeadingZeroesMajor = (Ptr_icd9AddLeadingZeroesMajor)R_GetCCallable("icd9", "icd9_icd9AddLeadingZeroesMajor");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9AddLeadingZeroesMajor(Rcpp::wrap(major));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9ExpandMinor(std::string minor, bool isE = false) {
        typedef SEXP(*Ptr_icd9ExpandMinor)(SEXP,SEXP);
        static Ptr_icd9ExpandMinor p_icd9ExpandMinor = NULL;
        if (p_icd9ExpandMinor == NULL) {
            validateSignature("CharacterVector(*icd9ExpandMinor)(std::string,bool)");
            p_icd9ExpandMinor = (Ptr_icd9ExpandMinor)R_GetCCallable("icd9", "icd9_icd9ExpandMinor");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ExpandMinor(Rcpp::wrap(minor), Rcpp::wrap(isE));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9Children_cpp(CharacterVector icd9, bool isShort, bool onlyReal = true) {
        typedef SEXP(*Ptr_icd9Children_cpp)(SEXP,SEXP,SEXP);
        static Ptr_icd9Children_cpp p_icd9Children_cpp = NULL;
        if (p_icd9Children_cpp == NULL) {
            validateSignature("CharacterVector(*icd9Children_cpp)(CharacterVector,bool,bool)");
            p_icd9Children_cpp = (Ptr_icd9Children_cpp)R_GetCCallable("icd9", "icd9_icd9Children_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9Children_cpp(Rcpp::wrap(icd9), Rcpp::wrap(isShort), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9ChildrenShort(CharacterVector icd9Short, bool onlyReal = true) {
        typedef SEXP(*Ptr_icd9ChildrenShort)(SEXP,SEXP);
        static Ptr_icd9ChildrenShort p_icd9ChildrenShort = NULL;
        if (p_icd9ChildrenShort == NULL) {
            validateSignature("CharacterVector(*icd9ChildrenShort)(CharacterVector,bool)");
            p_icd9ChildrenShort = (Ptr_icd9ChildrenShort)R_GetCCallable("icd9", "icd9_icd9ChildrenShort");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ChildrenShort(Rcpp::wrap(icd9Short), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline CharacterVector icd9ChildrenDecimal(CharacterVector icd9Decimal, bool onlyReal = true) {
        typedef SEXP(*Ptr_icd9ChildrenDecimal)(SEXP,SEXP);
        static Ptr_icd9ChildrenDecimal p_icd9ChildrenDecimal = NULL;
        if (p_icd9ChildrenDecimal == NULL) {
            validateSignature("CharacterVector(*icd9ChildrenDecimal)(CharacterVector,bool)");
            p_icd9ChildrenDecimal = (Ptr_icd9ChildrenDecimal)R_GetCCallable("icd9", "icd9_icd9ChildrenDecimal");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ChildrenDecimal(Rcpp::wrap(icd9Decimal), Rcpp::wrap(onlyReal));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<CharacterVector >(__result);
    }

    inline LogicalVector icd9InReferenceCode(CharacterVector icd9, CharacterVector icd9Reference, bool isShort, bool isShortReference = true) {
        typedef SEXP(*Ptr_icd9InReferenceCode)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_icd9InReferenceCode p_icd9InReferenceCode = NULL;
        if (p_icd9InReferenceCode == NULL) {
            validateSignature("LogicalVector(*icd9InReferenceCode)(CharacterVector,CharacterVector,bool,bool)");
            p_icd9InReferenceCode = (Ptr_icd9InReferenceCode)R_GetCCallable("icd9", "icd9_icd9InReferenceCode");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9InReferenceCode(Rcpp::wrap(icd9), Rcpp::wrap(icd9Reference), Rcpp::wrap(isShort), Rcpp::wrap(isShortReference));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<LogicalVector >(__result);
    }

    inline std::vector<bool> icd9IsV_cpp_slower(std::vector< std::string > sv) {
        typedef SEXP(*Ptr_icd9IsV_cpp_slower)(SEXP);
        static Ptr_icd9IsV_cpp_slower p_icd9IsV_cpp_slower = NULL;
        if (p_icd9IsV_cpp_slower == NULL) {
            validateSignature("std::vector<bool>(*icd9IsV_cpp_slower)(std::vector< std::string >)");
            p_icd9IsV_cpp_slower = (Ptr_icd9IsV_cpp_slower)R_GetCCallable("icd9", "icd9_icd9IsV_cpp_slower");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsV_cpp_slower(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline List icd9ShortToParts_cpp_slow(CharacterVector icd9Short, String minorEmpty = "") {
        typedef SEXP(*Ptr_icd9ShortToParts_cpp_slow)(SEXP,SEXP);
        static Ptr_icd9ShortToParts_cpp_slow p_icd9ShortToParts_cpp_slow = NULL;
        if (p_icd9ShortToParts_cpp_slow == NULL) {
            validateSignature("List(*icd9ShortToParts_cpp_slow)(CharacterVector,String)");
            p_icd9ShortToParts_cpp_slow = (Ptr_icd9ShortToParts_cpp_slow)R_GetCCallable("icd9", "icd9_icd9ShortToParts_cpp_slow");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToParts_cpp_slow(Rcpp::wrap(icd9Short), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline List icd9MajMinToParts_slower(CharacterVector major, CharacterVector minor) {
        typedef SEXP(*Ptr_icd9MajMinToParts_slower)(SEXP,SEXP);
        static Ptr_icd9MajMinToParts_slower p_icd9MajMinToParts_slower = NULL;
        if (p_icd9MajMinToParts_slower == NULL) {
            validateSignature("List(*icd9MajMinToParts_slower)(CharacterVector,CharacterVector)");
            p_icd9MajMinToParts_slower = (Ptr_icd9MajMinToParts_slower)R_GetCCallable("icd9", "icd9_icd9MajMinToParts_slower");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9MajMinToParts_slower(Rcpp::wrap(major), Rcpp::wrap(minor));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline std::vector<bool> icd9IsV_cpp_slow(std::vector< std::string > sv) {
        typedef SEXP(*Ptr_icd9IsV_cpp_slow)(SEXP);
        static Ptr_icd9IsV_cpp_slow p_icd9IsV_cpp_slow = NULL;
        if (p_icd9IsV_cpp_slow == NULL) {
            validateSignature("std::vector<bool>(*icd9IsV_cpp_slow)(std::vector< std::string >)");
            p_icd9IsV_cpp_slow = (Ptr_icd9IsV_cpp_slow)R_GetCCallable("icd9", "icd9_icd9IsV_cpp_slow");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsV_cpp_slow(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9IsE_cpp_slow(std::vector< std::string > sv) {
        typedef SEXP(*Ptr_icd9IsE_cpp_slow)(SEXP);
        static Ptr_icd9IsE_cpp_slow p_icd9IsE_cpp_slow = NULL;
        if (p_icd9IsE_cpp_slow == NULL) {
            validateSignature("std::vector<bool>(*icd9IsE_cpp_slow)(std::vector< std::string >)");
            p_icd9IsE_cpp_slow = (Ptr_icd9IsE_cpp_slow)R_GetCCallable("icd9", "icd9_icd9IsE_cpp_slow");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsE_cpp_slow(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline std::vector<bool> icd9IsVE_cpp_slow(std::vector< std::string > sv) {
        typedef SEXP(*Ptr_icd9IsVE_cpp_slow)(SEXP);
        static Ptr_icd9IsVE_cpp_slow p_icd9IsVE_cpp_slow = NULL;
        if (p_icd9IsVE_cpp_slow == NULL) {
            validateSignature("std::vector<bool>(*icd9IsVE_cpp_slow)(std::vector< std::string >)");
            p_icd9IsVE_cpp_slow = (Ptr_icd9IsVE_cpp_slow)R_GetCCallable("icd9", "icd9_icd9IsVE_cpp_slow");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9IsVE_cpp_slow(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<bool> >(__result);
    }

    inline List icd9ShortToParts_cpp_test(CharacterVector icd9Short, std::string minorEmpty = "") {
        typedef SEXP(*Ptr_icd9ShortToParts_cpp_test)(SEXP,SEXP);
        static Ptr_icd9ShortToParts_cpp_test p_icd9ShortToParts_cpp_test = NULL;
        if (p_icd9ShortToParts_cpp_test == NULL) {
            validateSignature("List(*icd9ShortToParts_cpp_test)(CharacterVector,std::string)");
            p_icd9ShortToParts_cpp_test = (Ptr_icd9ShortToParts_cpp_test)R_GetCCallable("icd9", "icd9_icd9ShortToParts_cpp_test");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_icd9ShortToParts_cpp_test(Rcpp::wrap(icd9Short), Rcpp::wrap(minorEmpty));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline std::string strim_cpp(std::string& s) {
        typedef SEXP(*Ptr_strim_cpp)(SEXP);
        static Ptr_strim_cpp p_strim_cpp = NULL;
        if (p_strim_cpp == NULL) {
            validateSignature("std::string(*strim_cpp)(std::string&)");
            p_strim_cpp = (Ptr_strim_cpp)R_GetCCallable("icd9", "icd9_strim_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_strim_cpp(Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::string >(__result);
    }

    inline std::vector<std::string > trim_cpp(std::vector<std::string >& sv) {
        typedef SEXP(*Ptr_trim_cpp)(SEXP);
        static Ptr_trim_cpp p_trim_cpp = NULL;
        if (p_trim_cpp == NULL) {
            validateSignature("std::vector<std::string >(*trim_cpp)(std::vector<std::string >&)");
            p_trim_cpp = (Ptr_trim_cpp)R_GetCCallable("icd9", "icd9_trim_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_trim_cpp(Rcpp::wrap(sv));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<std::vector<std::string > >(__result);
    }

}

#endif // __icd9_RcppExports_h__
