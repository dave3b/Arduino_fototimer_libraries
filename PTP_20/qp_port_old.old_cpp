//////////////////////////////////////////////////////////////////////////////
// Product: QP/C++ port to Arduino, cooperative "vanilla" kernel, no Q-SPY
// Last Updated for QP ver: 4.3.00 (modified to fit in one file)
// Date of the Last Update: Dec 15, 2011
//
//                    Q u a n t u m     L e a P s
//                    ---------------------------
//                    innovating embedded systems
//
// Copyright (C) 2002-2011 Quantum Leaps, LLC. All rights reserved.
//
// This software may be distributed and modified under the terms of the GNU
// General Public License version 2 (GPL) as published by the Free Software
// Foundation and appearing in the file GPL.TXT included in the packaging of
// this file. Please note that GPL Section 2[b] requires that all works based
// on this software must also be made publicly available under the terms of
// the GPL ("Copyleft").
//
// Alternatively, this software may be distributed and modified under the
// terms of Quantum Leaps commercial licenses, which expressly supersede
// the GPL and are specifically designed for licensees interested in
// retaining the proprietary status of their code.
//
// Contact information:
// Quantum Leaps Web site:  http://www.quantum-leaps.com
// e-mail:                  info@quantum-leaps.com
//////////////////////////////////////////////////////////////////////////////
#include "qp_port.h"                                                // QP port

//Q_DEFINE_THIS_MODULE(qp_port)

//............................................................................
extern "C" void loop() {
    QF::run();         // run the application, NOTE: QF::run() does not return
}

//............................................................................
#ifdef QK_PREEMPTIVE
void QK_init(void) {
}
#endif