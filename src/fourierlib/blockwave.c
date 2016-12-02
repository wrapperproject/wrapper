// Copyright (c) 2016 Wrapper developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//Get transactions in a block from its block wave
void GetBlockTransactions( imaginaryNumber *blockwave, int numberOfTransactions, imaginaryNumber *transactions)
{
  imaginaryNumber tp[N];

  //Copy the blockwave into the transactions array
  for(i=0; i<numberOfTransactions; i++) {
    transactions[i].R = transactions[i].R;
    transactions[i].I = transactions[i].I;
  }
    
	//Apply the FFT algorithm and decompose the blockwave into freqency domain
  fft( transactions, N, tp );
  
	return
}