/*
 * SGI FREE SOFTWARE LICENSE B (Version 2.0, Sept. 18, 2008)
 * Copyright (C) 1991-2000 Silicon Graphics, Inc. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice including the dates of first publication and
 * either this permission notice or a reference to
 * http://oss.sgi.com/projects/FreeB/
 * shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * SILICON GRAPHICS, INC. BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of Silicon Graphics, Inc.
 * shall not be used in advertising or otherwise to promote the sale, use or
 * other dealings in this Software without prior written authorization from
 * Silicon Graphics, Inc.
 */

/*
 * gles_evaluator.h
 * Author: Mike Gorchak, 2009. mike@malva.ua, lestat@i.com.ua
 *
 */

#ifndef __gles_evaluator_h_
#define __gles_evaluator_h_

#define GLU_AUTO_NORMAL                         0x0D80
#define GLU_MAP1_COLOR_4                        0x0D90
#define GLU_MAP1_INDEX                          0x0D91
#define GLU_MAP1_NORMAL                         0x0D92
#define GLU_MAP1_TEXTURE_COORD_1                0x0D93
#define GLU_MAP1_TEXTURE_COORD_2                0x0D94
#define GLU_MAP1_TEXTURE_COORD_3                0x0D95
#define GLU_MAP1_TEXTURE_COORD_4                0x0D96
#define GLU_MAP1_VERTEX_3                       0x0D97
#define GLU_MAP1_VERTEX_4                       0x0D98
#define GLU_MAP2_COLOR_4                        0x0DB0
#define GLU_MAP2_INDEX                          0x0DB1
#define GLU_MAP2_NORMAL                         0x0DB2
#define GLU_MAP2_TEXTURE_COORD_1                0x0DB3
#define GLU_MAP2_TEXTURE_COORD_2                0x0DB4
#define GLU_MAP2_TEXTURE_COORD_3                0x0DB5
#define GLU_MAP2_TEXTURE_COORD_4                0x0DB6
#define GLU_MAP2_VERTEX_3                       0x0DB7
#define GLU_MAP2_VERTEX_4                       0x0DB8

/* Primitives */
#define GL_QUAD_STRIP                           0x0008

/* Polygons */
#define GL_POINT                                0x1B00
#define GL_LINE                                 0x1B01
#define GL_FILL                                 0x1B02
#define GL_FRONT                                0x0404
#define GL_BACK                                 0x0405
#define GL_POLYGON_MODE                         0x0B40

#endif /* __gles_evaluator_h_ */
