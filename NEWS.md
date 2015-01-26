# Version 1.0

* Calculate Charlson scores
* Sum distinct comorbidities or diagnoses by patient
* Core rewrite in C++ for 50+ times speed improvement. 100,000 patients assigned comorbidities in ~2 seconds.
* Simplified handling validation of codes. No longer done in every function.
* Most functions now guess the ICD-9 code type automatically (e.g. 00321 vs 003.21)
* Reduced external dependencies down to Rcpp and checkmate (a very lightweight and fast function argument checker)
* Bug fixes (see [github](https://github.com/jackwasey/icd9/issues?q=is%3Aissue+is%3Aclosed))
* API changes
    - no more validation except in the icd9IsValidXxx functions. Removed stopIfInvalidIcd9, icd9InvalidActions
    - internalized utility functions. They are also packaged and tested in [jwutil](http://cran.r-project.org/web/packages/jwutil/index.html)
    - deprecated icd9ValidXxx in favour of icd9IsValidXxx
    - deprecated icd9ComorbditiesXxx replacing with briefer icd9ComorbidXxx
    - stopped exporting benchmarking and SAS code processing.

# Version 0.5

* Filter icd9 data for validity or existence. Fixes issue #27
* Guess whether a code is short or decimal. Fixes #22
* Enable ranges for Exxx codes. Fixes #9
* Explain and condense long lists of ICD-9 codes using maximum number of higher-level descriptions without being overly broad. Fixes #3
* Include high level descriptions, chapters, majors, which do not have CMS descriptions because they are not themselves billable codes. Fixes #2
* E codes <800 can be valid in 2014. Fixes #1
* Bug fixes, vignette and other documentation updated.
* Test suite ever more comprehensive.
* Rename Elixhauser arguments and functions to "Elix" for clarity of code, and ease of typing.

# Version 0.4

* Present-on-arrival field handled gracefully
* Revised co-morbidity handling, with functions specific to each mapping
* Standardized naming of fields across Elixhauser and Charlson based mappings for clarity, consistency and comparaibility
* Handle mild and severe co-morbidities without double-counting. Fixes issue #23
* Enable magrittr-style piping as option to clarify chains of operations. Issue #5
* many more test cases, including specific tests for individual values in each computed mapping, and also for the new comorbidity functions
* Vignette updated to demonstrate clearer new functions

# Version 0.3

* Addition of several utility functions, mostly kept for internal use, but which clarify the code
* Consistent behavior with invalid codes, allowing ignore, silent conversion to NA, warn with conversion to NA, or stopping.
* Outline of code to read top level ICD-9 definitions from canonical CDC RTF file.
* Progress to
* Made functions magrittr friendly
* Bug fixes, refactoring, more tests
* Include parsing of hierarchy
* Internal function which reads a file from a zip at a URL
* The included pre-parsed data are slightly updated to include some missing top-level numbers when all the children were also present. ("043" %i9s% "04499" should equal "043" %i9s% "044")

# Version 0.2.1

* trivial changes to appease CRAN

# Version 0.2

* Added more co-morbidity mappings, Elixhauser original and Quan/Elixhauser.
* Exposed more functions to public API
* Better conversion of ICD-9 codes to textual representation
* Expanded vignette
* Bug fixes and test cases
* Improved documentation

# Version 0.1.1

* Include missing import for memoise
* optionally process AHRQ comorbidity subcategories into parent categories
* include the processed binary data. Unlikely to change often, and not too big.


# Version 0.1

* First release. Fully functional, no known bugs, but will benefit from addition of planned features described in README.
