//
// --------------------------------------------------------------------------
// IOHIDEvent-Reconstructed.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef IOHIDEvent_Reconstructed_h
#define IOHIDEvent_Reconstructed_h

/// In the open source IOKit files, there is an IOHIDEvent.h and an IOHIDEvent.c file, but they are empty. This is my attempt at reconstructing some of its contents that we want to use

uint64_t IOHIDEventGetSenderID(IOHIDEventRef);


#endif /* IOHIDEvent_Reconstructed_h */
