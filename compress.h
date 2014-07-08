// Copyright (c) 2014 Vicente Romero Calero
//
// Distributed under the MIT software license, see the file LICENSE
//
// Author: Vicente Romero <vteromero@gmail.com>
//
// Implements file compression by using Byte Pair Encoding.

#ifndef COMPRESS_H_
#define COMPRESS_H_

void compress(
    const char *infilename,
    const char *outfilename,
    int block_size,
    bool to_stdout,
    bool verbose);

#endif // COMPRESS_H_
