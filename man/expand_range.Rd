% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ranges.R
\name{expand_range}
\alias{expand_range}
\alias{expand_range.character}
\alias{expand_range.icd9}
\alias{\%i9da\%}
\alias{\%i9sa\%}
\alias{\%i9d\%}
\alias{\%i9mj\%}
\alias{\%i9s\%}
\title{Generate a set of codes between two ICD codes including encompassed children}
\usage{
expand_range(start, end, ...)

\method{expand_range}{character}(start, end, short_code = NULL, defined = TRUE, ...)

\method{expand_range}{icd9}(
  start,
  end,
  short_code = guess_short(c(start, end)),
  defined = TRUE,
  ex_ambig_start = TRUE,
  ex_ambig_end = TRUE,
  ...
)

start \%i9da\% end

start \%i9sa\% end

start \%i9d\% end

start \%i9mj\% end

start \%i9s\% end
}
\arguments{
\item{start, end}{is a character vector of ICD-9 codes. If fewer than five
characters is given in a code, then the digits are greedily assigned to
hundreds, then tens, then units, before the decimal parts. E.g., \code{10}
becomes \code{010}, not \code{0010} or \code{00010}.}

\item{short_code}{single logical value which determines whether the ICD-9
code provided is in short (\code{TRUE}) or decimal (\code{FALSE}) form.
Where reasonable, this is guessed from the input data.}

\item{defined}{single logical value, if \code{TRUE}, will limit the search to
those codes which appear in the official list, not just syntactically valid
codes. Since nearly valid, out-dated or new codes may be missed, not
limiting to officially defined values will be useful. Ultimately, there
will need to be annual (and all-time) official lists of codes and the
ability to test against a list for the year of the ICD-9 coding.}

\item{ex_ambig_start}{single logical value, if \code{TRUE} the range returned
will not include codes which are explicitly listed in the range, but would
imply a broader range than specified. E.g. \code{V10 \%i9sa\% V1009} would
by default (\code{FALSE}) include \code{V10} even though \code{V10} itself
is parent to everything up to \code{V11}.}

\item{ex_ambig_end}{single logical, same as \code{ex_ambig_start} but affects
codes at the end of the range. E.g. \sQuote{99.99} to \sQuote{101.01} would
by default exclude 101 and 101.0}
}
\description{
Great care is taken not to include codes which have children not in the
range. E.g., \code{100.9} to \code{101.1} would \strong{not} include code
\code{101}. See the extensive tests covering this area for much more detail.
}
\details{
The default for the argument \code{defined} is \code{TRUE} since this is far
more likely to be useful to the end user, dealing with real ICD codes.

When the class is not known, it must be guessed from the start and
  end codes. If this guessing fails, e.g. start is ICD-9 whereas end is
  ICD-10, then an error is thrown. Otherwise, the appropriate S3 method is
  called.
}
\section{Methods (by class)}{
\itemize{
\item \code{character}: Expand a range of ICD-9 or ICD-10 codes when the
class is not known

\item \code{icd9}: Expand a range of ICD-9 codes
}}

\examples{
expand_range("428.0", "428.9")
"4280" \%i9s\% "4289"
"4280" \%i9s\% "42821"
"42799" \%i9sa\% "42802" # doesn't include 428 or 4280
"427.99" \%i9da\% "428.02"
"V80" \%i9s\% "V810"
}
\seealso{
Other ICD-9 ranges: 
\code{\link{children}()},
\code{\link{condense}()}
}
\concept{ICD-9 ranges}
\keyword{internal}
