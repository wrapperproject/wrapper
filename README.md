Wrapper integration/staging tree
================================

http://wrapperproject.com/

 Copyright (c) 2009 - 2016 Bitcoin Developers
 
 Copyright (c) 2015 - 2016 Wrapper Developers

What is Wrapper?
----------------

Wrapper differs from other cryptocurrencies by building itself on top of something we call the “Fourier Protocol”. The Fourier Protocol is a way to implement privacy while drastically reducing the size of the blocks in a Bitcoin-based currency. Fourier works by associating each block with a periodic wave of period T0.

License
-------

Wrapper is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.


Testing
-------

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test wrapper.pro
    make -f Makefile.test
    ./wrapper-qt_test

