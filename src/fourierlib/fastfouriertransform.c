// Copyright (c) 2016 Wrapper developers, based on worked done by the Department of Mathematics of WUSTL
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


typedef float realNumber;
typedef struct{
	
	realNumber R;
	
	realNumber I;
	
	}imaginaryNumber;

void fft( imaginaryNumber *v, int n, imaginaryNumber *tmp )
{
  if(n>1) {
    int k,m;
	imaginaryNumber z, w, *vo, *ve;
    ve = tmp;
	vo = tmp+n/2;
	
    for(k=0; k<n/2; k++) {
      ve[k] = v[2*k];
      vo[k] = v[2*k+1];
    }
    fft( ve, n/2, v );
    fft( vo, n/2, v );
    for(m=0; m<n/2; m++) {
      w.R = cos(2*PI*m/(double)n);
      w.I = -sin(2*PI*m/(double)n);
      z.R = w.Re*vo[m].R - w.Im*vo[m].I;
      z.I = w.Re*vo[m].I + w.Im*vo[m].R;
      v[m].R = ve[m].Re + z.R;
      v[m].I = ve[m].Im + z.I;
      v[m+n/2].R = ve[m].Re - z.R;
      v[m+n/2].I = ve[m].Im - z.I;
    }
  }
  return;
}

void ifft( imaginaryNumber *v, int n, imaginaryNumber *tmp )
{
  if(n>1) {	
    int k,m;
	imaginaryNumber z, w, *vo, *ve;
    ve = tmp;
	vo = tmp+n/2;
	
    for(k=0; k<n/2; k++) {
      ve[k] = v[2*k];
      vo[k] = v[2*k+1];
    }
    ifft( ve, n/2, v );
    ifft( vo, n/2, v );
    for(m=0; m<n/2; m++) {
      w.R = cos(2*PI*m/(double)n);
      w.I = sin(2*PI*m/(double)n);
      z.R = w.R*vo[m].R - w.Im*vo[m].I;
      z.I = w.R*vo[m].Im + w.Im*vo[m].R;
      v[m].R = ve[m].Re + z.R;
      v[m].I = ve[m].I + z.I;
      v[m+n/2].R = ve[m].R - z.R;
      v[m+n/2].I = ve[m].I - z.I;
    }
  }
  return;
}