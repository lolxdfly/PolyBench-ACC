/**
 * 3mm.h: This file is part of the PolyBench/GPU 1.0 test suite.
 *
 *
 * Contact: Scott Grauer-Gray <sgrauerg@gmail.com>
 * Will Killian <killian@udel.edu>
 * Louis-Noel Pouchet <pouchet@cse.ohio-state.edu>
 * Web address: http://www.cse.ohio-state.edu/~pouchet/software/polybench/GPU
 */

#ifndef THREEMM_H
# define THREEMM_H

/* Default to STANDARD_DATASET. */
# if !defined(MINI_DATASET) && !defined(SMALL_DATASET) && !defined(LARGE_DATASET) && !defined(EXTRALARGE_DATASET)
#  define STANDARD_DATASET
# endif

/* Do not define anything if the user manually defines the size. */
# if !defined(N)
/* Define the possible dataset sizes. */
#  ifdef MINI_DATASET
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif

#  ifdef SMALL_DATASET
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif

#  ifdef STANDARD_DATASET /* Default if unspecified. */
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif

#  ifdef LARGE_DATASET
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif

#  ifdef EXTRALARGE_DATASET
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif
# endif /* !N */

# define _PB_N POLYBENCH_LOOP_BOUND(N,n)

# ifndef DATA_TYPE
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%0.2lf "
# endif

/* Thread block dimensions */
#define DIM_LOCAL_WORK_GROUP_X 32
#define DIM_LOCAL_WORK_GROUP_Y 8


#endif /* !THREEMM*/