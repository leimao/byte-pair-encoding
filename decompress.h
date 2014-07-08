// Copyright (c) 2014 Vicente Romero Calero
//
// Distributed under the MIT software license, see the file LICENSE
//
// Author: Vicente Romero <vteromero@gmail.com>
//
// Implements file decompression by using Byte Pair Encoding.

#ifndef DECOMPRESS_H_
#define DECOMPRESS_H_

void decompress(
    const char *infilename,
    const char *outfilename,
    bool to_stdout);

#endif // DECOMPRESS_H_
