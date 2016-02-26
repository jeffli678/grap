#ifndef GRAPHIO_H
#define GRAPHIO_H

#define GRAPHBINMAGIC "GRAPHBIN"
#define GRAPHBINMAGIC_LEN 8

#include "nodeIO.h"

/*!
 @file graphIO.h
 @brief Structure and methods for rooted and directed graphs input/output support.
 */
#include <stdio.h>

#include "graph.h"

/*!
 @brief Print a a graph.
 @param graph The graph to print.
 @param fp The file to print the graph to.
 */
void graph_fprint (FILE * fp, graph_t * graph);

#endif 
