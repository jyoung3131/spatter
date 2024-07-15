/*!
  \file PatternParser.hh
*/

#ifndef SPATTER_PATTERNPARSER_HH
#define SPATTER_PATTERNPARSER_HH

#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Configuration.hh"
#include "SpatterTypes.hh"

#define PAGE_BITS 12 // 12 bits => 4 KiB page

namespace Spatter {

size_t power(size_t base, size_t exp);

void compress_pattern(aligned_vector<size_t> &pattern);

int generate_pattern_uniform(std::string args,
    aligned_vector<size_t> &pattern,
    size_t &delta);

int generate_pattern_ms1(std::string args,
    aligned_vector<size_t> &pattern);

int generate_pattern_laplacian(std::string args,
    aligned_vector<size_t> &pattern);

int pattern_parser(std::stringstream &pattern_string,
    aligned_vector<size_t> &pattern,
    size_t &delta);

size_t remap_pattern(aligned_vector<size_t> &pattern, const size_t boundary);

int truncate_pattern(aligned_vector<size_t> &pattern, size_t pattern_size);

} // namespace Spatter

#endif
